//  Copyright (c) 2007-2011 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <hpx/hpx.hpp>
#include <hpx/runtime/agas/interface.hpp>
#include <hpx/runtime/components/component_factory_base.hpp>
#include <hpx/components/distributing_factory/distributing_factory.hpp>

#include <boost/foreach.hpp>
#include <boost/assert.hpp>

#include "read_values.hpp"
#include "partition3d.hpp"
#include "interpolator.hpp"

///////////////////////////////////////////////////////////////////////////////
// Add factory registration functionality.
HPX_REGISTER_COMPONENT_MODULE(); // Create entry point for component factory.

///////////////////////////////////////////////////////////////////////////////
typedef sheneos::partition3d partition_client_type;
HPX_DEFINE_GET_COMPONENT_TYPE(partition_client_type);

typedef sheneos::configuration configuration_client_type;
HPX_DEFINE_GET_COMPONENT_TYPE(configuration_client_type);

///////////////////////////////////////////////////////////////////////////////
// Interpolation client.
namespace sheneos
{
    interpolator::interpolator()
      : num_partitions_per_dim_(0),
        was_created_(false)
    {
        std::memset(minval_, 0, sizeof(minval_));
        std::memset(maxval_, 0, sizeof(maxval_));
        std::memset(delta_, 0, sizeof(delta_));
        std::memset(num_values_, 0, sizeof(num_values_));
    }

    interpolator::~interpolator()
    {
        if (was_created_) {
            // Unregister the config data.
            config_data data = cfg_.get();
            hpx::agas::unregister_name(data.symbolic_name_);   

            // Unregister all symbolic names.
            for (std::size_t i = 0; i < partitions_.size(); ++i)
            {
                hpx::agas::unregister_name(data.symbolic_name_ +
                    boost::lexical_cast<std::string>(i++));
            }
        }
    }

    ///////////////////////////////////////////////////////////////////////////
    void interpolator::create(std::string const& datafilename,
        std::string const& symbolic_name_base, std::size_t num_instances)
    {
        // Get the component type of the partition backend.
        hpx::components::component_type type =
            hpx::components::get_component_type<server::partition3d>();

        typedef hpx::components::distributing_factory distributing_factory;

        // Create distributing factory and let it create num_instances
        // objects.
        distributing_factory factory(
            distributing_factory::create_sync(hpx::find_here()));

        // Asynchronously create the components. They will be distributed
        // fairly across all available localities.
        distributing_factory::async_create_result_type result =
            factory.create_components_async(type, num_instances);

        // Initialize the partitions and store the mappings.
        partitions_.reserve(num_instances);
        fill_partitions(datafilename, symbolic_name_base, result);

        was_created_ = true;
    }

    ///////////////////////////////////////////////////////////////////////////
    void interpolator::connect(std::string symbolic_name_base)
    {
        // Connect to the config object.
        hpx::naming::id_type cfg_gid;
        hpx::agas::resolve_name(symbolic_name_base, cfg_gid);
        cfg_ = configuration(cfg_gid);
        config_data data = cfg_.get();

        if (data.symbolic_name_[data.symbolic_name_.size()-1] != '/')
            data.symbolic_name_ += "/";

        // Connect to the partitions.
        partitions_.reserve(data.num_instances_);
        for (std::size_t i = 0; i < data.num_instances_; ++i)
        {
            using boost::lexical_cast;
            partitions_.push_back(hpx::naming::id_type());
            hpx::agas::resolve_name(data.symbolic_name_ + lexical_cast<std::string>(i),
                             partitions_.back());
        }

        // Read required data from given file.
        num_values_[dimension::ye] = extract_data_range(data.datafile_name_,
            "ye", minval_[dimension::ye], maxval_[dimension::ye], delta_[dimension::ye]);
        num_values_[dimension::temp] = extract_data_range(data.datafile_name_,
            "logtemp", minval_[dimension::temp], maxval_[dimension::temp], delta_[dimension::temp]);
        num_values_[dimension::rho] = extract_data_range(data.datafile_name_,
            "logrho", minval_[dimension::rho], maxval_[dimension::rho], delta_[dimension::rho]);

        num_partitions_per_dim_ = std::exp(std::log(double(data.num_instances_)) / 3);
    }

    ///////////////////////////////////////////////////////////////////////////
    void interpolator::fill_partitions(std::string const& datafilename,
        std::string symbolic_name_base, async_create_result_type future)
    {
        // Read required data from file.
        num_values_[dimension::ye] = extract_data_range(datafilename,
            "ye", minval_[dimension::ye], maxval_[dimension::ye], delta_[dimension::ye]);
        num_values_[dimension::temp] = extract_data_range(datafilename,
            "logtemp", minval_[dimension::temp], maxval_[dimension::temp], delta_[dimension::temp]);
        num_values_[dimension::rho] = extract_data_range(datafilename,
            "logrho", minval_[dimension::rho], maxval_[dimension::rho], delta_[dimension::rho]);

        // Wait for the partitions to be created.
        distributing_factory::result_type results = future.get();
        distributing_factory::iterator_range_type parts =
            hpx::components::server::locality_results(results);

        BOOST_FOREACH(hpx::naming::id_type id, parts)
            partitions_.push_back(id);

        // Initialize all attached partition objects.
        std::size_t num_localities = partitions_.size();
        BOOST_ASSERT(0 != num_localities);

        num_partitions_per_dim_ = std::exp(std::log(double(num_localities)) / 3);

        std::size_t partition_size_x =
            num_values_[dimension::ye] / num_partitions_per_dim_;
        std::size_t last_partition_size_x =
            num_values_[dimension::ye] - partition_size_x * (num_partitions_per_dim_-1);

        std::size_t partition_size_y =
            num_values_[dimension::temp] / num_partitions_per_dim_;
        std::size_t last_partition_size_y =
            num_values_[dimension::temp] - partition_size_y * (num_partitions_per_dim_-1);

        std::size_t partition_size_z =
            num_values_[dimension::rho] / num_partitions_per_dim_;
        std::size_t last_partition_size_z =
            num_values_[dimension::rho] - partition_size_z * (num_partitions_per_dim_-1);

        dimension dim_x(num_values_[dimension::ye]);
        dimension dim_y(num_values_[dimension::temp]);
        dimension dim_z(num_values_[dimension::rho]);

        std::vector<hpx::lcos::promise<void> > lazy_sync;
        for (std::size_t x = 0; x != num_partitions_per_dim_; ++x)
        {
            dim_x.offset_ = partition_size_x * x;
            if (x == num_partitions_per_dim_-1)
                dim_x.count_ = last_partition_size_x;
            else
                dim_x.count_ = partition_size_x;

            for (std::size_t y = 0; y != num_partitions_per_dim_; ++y)
            {
                dim_y.offset_ = partition_size_y * y;
                if (y == num_partitions_per_dim_-1)
                    dim_y.count_ = last_partition_size_y;
                else
                    dim_y.count_ = partition_size_y;

                for (std::size_t z = 0; z != num_partitions_per_dim_; ++z)
                {
                    dim_z.offset_ = partition_size_z * z;
                    if (z == num_partitions_per_dim_-1)
                        dim_z.count_ = last_partition_size_z;
                    else
                        dim_z.count_ = partition_size_z;

                    std::size_t index =
                        x + (y + z * num_partitions_per_dim_) * num_partitions_per_dim_;
                    BOOST_ASSERT(index < partitions_.size());

                    lazy_sync.push_back(stubs::partition3d::init_async(
                        partitions_[index], datafilename, dim_x, dim_y, dim_z));
                }
            }
        }

        // Create the config object locally.
        hpx::naming::id_type config_id =
            hpx::find_locality(configuration::get_component_type());
        cfg_ = configuration(config_id, datafilename, symbolic_name_base, num_localities);
        hpx::agas::register_name(symbolic_name_base, cfg_.get_gid());

        if (symbolic_name_base[symbolic_name_base.size() - 1] != '/')
            symbolic_name_base += "/";

        std::size_t i = 0;

        // Register symbolic names of all involved components.
        BOOST_FOREACH(hpx::naming::id_type const& id, partitions_)
        {
            using boost::lexical_cast;
            hpx::agas::register_name(
                symbolic_name_base + lexical_cast<std::string>(i++),
                id);
        }

        // Wait for initialization to finish.
        hpx::lcos::wait(lazy_sync);
    }

    ///////////////////////////////////////////////////////////////////////////
    hpx::naming::id_type const&
    interpolator::get_gid(double ye, double temp, double rho)
    {
        std::size_t x = get_partition_index(dimension::ye, ye);
        std::size_t y = get_partition_index(dimension::temp, std::log10(temp));
        std::size_t z = get_partition_index(dimension::rho, std::log10(rho));

        std::size_t index =
            x + (y + z * num_partitions_per_dim_) * num_partitions_per_dim_;
        BOOST_ASSERT(index < partitions_.size());

        return partitions_[index];
    }

    std::size_t interpolator::get_partition_index(std::size_t d, double value)
    {
        std::size_t partition_size = num_values_[d] / num_partitions_per_dim_;
        std::size_t partition_index = (value - minval_[d]) / (delta_[d] * partition_size);
        if (partition_index == num_partitions_per_dim_)
            --partition_index;
        BOOST_ASSERT(partition_index < num_partitions_per_dim_);
        return partition_index;
    }

    void interpolator::get_dimension(dimension::type what, double& min, double& max)
    {
        switch (what) {
        case dimension::ye:
            min = minval_[dimension::ye];
            max = maxval_[dimension::ye];
            break;

        case dimension::temp:
        case dimension::rho:
            min = std::pow(10., minval_[what]);
            max = std::pow(10., maxval_[what]);
            break;

        default:
            HPX_THROW_EXCEPTION(hpx::bad_parameter,
                "sheneos::interpolator::get_dimension",
                "value of parameter 'what' is not valid");
            
        }
    }
}
