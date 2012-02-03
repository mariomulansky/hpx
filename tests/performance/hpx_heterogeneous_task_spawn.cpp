//  Copyright (c) 2011-2012 Bryce Adelstein-Lelbach
//  Copyright (c) 2007-2012 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <hpx/hpx_init.hpp>
#include <hpx/util/high_resolution_timer.hpp>
#include <hpx/include/iostreams.hpp>

#include <stdexcept>

#include <boost/random.hpp>
#include <boost/format.hpp>
#include <boost/bind.hpp>
#include <boost/ref.hpp>
#include <boost/cstdint.hpp>

using boost::program_options::variables_map;
using boost::program_options::options_description;
using boost::program_options::value;

using hpx::init;
using hpx::finalize;
using hpx::get_os_thread_count;

using hpx::applier::register_work;

using hpx::threads::suspend;
using hpx::threads::get_thread_count;

using hpx::util::high_resolution_timer;

using hpx::cout;
using hpx::flush;

///////////////////////////////////////////////////////////////////////////////
void task(
    boost::uint64_t delay 
    )
{
    double volatile d = 0.;
    for (boost::uint64_t i = 0; i < delay; ++i)
        d += 1 / (2. * i + 1);
}

///////////////////////////////////////////////////////////////////////////////
void print_results(
    boost::uint64_t cores
  , boost::uint64_t seed
  , boost::uint64_t tasks
  , boost::uint64_t min_delay
  , boost::uint64_t max_delay
  , boost::uint64_t total_delay
  , double walltime
  , boost::uint64_t current_trial
  , boost::uint64_t total_trials
    )
{
    if (current_trial == 1)
    {
        std::string const cores_str = boost::str(boost::format("%lu,") % cores);
        std::string const seed_str  = boost::str(boost::format("%lu,") % seed);
        std::string const tasks_str = boost::str(boost::format("%lu,") % tasks);

        std::string const min_delay_str
            = boost::str(boost::format("%lu,") % min_delay);
        std::string const max_delay_str
            = boost::str(boost::format("%lu,") % max_delay);
        std::string const total_delay_str
            = boost::str(boost::format("%lu,") % total_delay);

        cout << ( boost::format("%-21s %-21s %-21s %-21s %-21s %-21s %-08.8g")
                % cores_str % seed_str % tasks_str
                % min_delay_str % max_delay_str % total_delay_str
                % walltime);
    }

    else
        cout << (boost::format(", %-08.8g") % walltime);

    if (current_trial == total_trials)
        cout << "\n";

    cout << flush;
}

///////////////////////////////////////////////////////////////////////////////
boost::uint64_t shuffler(
    boost::random::mt19937_64& prng
  , boost::uint64_t high
    )
{
    if (high == 0)
        throw std::logic_error("high value was 0");

    // Our range is [0, x).
    boost::random::uniform_int_distribution<boost::uint64_t>
        dist(0, high - 1);

    return dist(prng); 
}

///////////////////////////////////////////////////////////////////////////////
int hpx_main(
    variables_map& vm
    )
{
    {
        boost::uint64_t const min_delay = vm["min-delay"].as<boost::uint64_t>();
        boost::uint64_t const max_delay = vm["max-delay"].as<boost::uint64_t>();
        boost::uint64_t const total_delay
            = vm["total-delay"].as<boost::uint64_t>();

        boost::uint64_t const tasks = vm["tasks"].as<boost::uint64_t>();

        boost::uint64_t const current_trial
            = vm["current-trial"].as<boost::uint64_t>();
        boost::uint64_t const total_trials
            = vm["total-trials"].as<boost::uint64_t>();

        ///////////////////////////////////////////////////////////////////////
        // Initialize the PRNG seed. 
        boost::uint64_t seed = vm["seed"].as<boost::uint64_t>();

        if (!seed)
            seed = boost::uint64_t(std::time(0));

        ///////////////////////////////////////////////////////////////////////
        // Validate command-line arguments.
        if (0 == tasks)
            throw std::invalid_argument("count of 0 tasks specified\n");

        if (min_delay > max_delay)
            throw std::invalid_argument("minimum delay cannot be larger than "
                                        "maximum delay\n");

        if (min_delay > total_delay)
            throw std::invalid_argument("minimum delay cannot be larger than"
                                        "total delay\n");

        if (max_delay > total_delay)
            throw std::invalid_argument("maximum delay cannot be larger than "
                                        "total delay\n");

        if ((min_delay * tasks) > total_delay)
            throw std::invalid_argument("minimum delay is too small for the "
                                        "specified total delay and number of "
                                        "tasks\n");

        if ((max_delay * tasks) < total_delay)
            throw std::invalid_argument("maximum delay is too small for the "
                                        "specified total delay and number of "
                                        "tasks\n");

        ///////////////////////////////////////////////////////////////////////
        // Randomly generate a description of the heterogeneous workload. 
        
        std::vector<boost::uint64_t> payloads;
        payloads.reserve(tasks);

        // For random numbers, we use a 64-bit specialization of Boost.Random's
        // mersenne twister engine (good uniform distribution up to 311
        // dimensions, cycle length 2 ^ 19937 - 1)
        boost::random::mt19937_64 prng(seed);

        boost::uint64_t current_sum = 0;

        for (boost::uint64_t i = 0; i < tasks; ++i)
        {
            // Credit to Spencer Ruport for putting this algorithm on
            // stackoverflow.
            boost::uint64_t const low_calc
                = (total_delay - current_sum) - (max_delay * (tasks - 1 - i));

            bool const negative
                = (total_delay - current_sum) < (max_delay * (tasks - 1 - i));

            boost::uint64_t const low
                = (negative || (low_calc < min_delay)) ? min_delay : low_calc;

            boost::uint64_t const high_calc
                = (total_delay - current_sum) - (min_delay * (tasks - 1 - i));

            boost::uint64_t const high
                = (high_calc > max_delay) ? max_delay : high_calc;

            // Our range is [low, high].
            boost::random::uniform_int_distribution<boost::uint64_t>
                dist(low, high);

            boost::uint64_t const payload = dist(prng);

            if (payload < min_delay)
                throw std::logic_error("task delay is below minimum"); 

            if (payload > max_delay)
                throw std::logic_error("task delay is above maximum"); 

            current_sum += payload;
            payloads.push_back(payload);
        }

        // Randomly shuffle the entire sequence to deal with drift.
        boost::function<boost::uint64_t(boost::uint64_t)> shuffler_f =
            boost::bind(&shuffler, boost::ref(prng), _1);
        std::random_shuffle(payloads.begin(), payloads.end()
                          , shuffler_f);

        ///////////////////////////////////////////////////////////////////////
        // Validate the payloads.
        if (payloads.size() != tasks)
            throw std::logic_error("incorrect number of tasks generated");

        boost::uint64_t const payloads_sum =
            std::accumulate(payloads.begin(), payloads.end(), 0LLU);
        if (payloads_sum != total_delay)
            throw std::logic_error("incorrect total delay generated");
 
        ///////////////////////////////////////////////////////////////////////
        // Start the clock.
        high_resolution_timer t;

        ///////////////////////////////////////////////////////////////////////
        // Queue the tasks in a serial loop. 
        for (boost::uint64_t i = 0; i < tasks; ++i)
            register_work(HPX_STD_BIND(&task, payloads[i]));

        ///////////////////////////////////////////////////////////////////////
        // Wait for the work to finish.
        do {
            // Reschedule hpx_main until all other px-threads have finished. We
            // should be resumed after most of the null px-threads have been
            // executed. If we haven't, we just reschedule ourselves again.
            suspend();
        } while (get_thread_count() > 1);

        ///////////////////////////////////////////////////////////////////////
        // Print the results.
        print_results(get_os_thread_count()
                    , seed
                    , tasks
                    , min_delay
                    , max_delay
                    , total_delay
                    , t.elapsed()
                    , current_trial
                    , total_trials);
    }

    finalize();
    return 0;
}

///////////////////////////////////////////////////////////////////////////////
int main(
    int argc
  , char* argv[]
    )
{
    // Configure application-specific options.
    options_description cmdline("usage: " HPX_APPLICATION_STRING " [options]");

    cmdline.add_options()
        ( "tasks"
        , value<boost::uint64_t>()->default_value(500000)
        , "number of tasks (e.g. px-threads)")

        ( "min-delay"
        , value<boost::uint64_t>()->default_value(0)
        , "minimum number of iterations in the delay loop")

        ( "max-delay"
        , value<boost::uint64_t>()->default_value(0)
        , "maximum number of iterations in the delay loop")

        ( "total-delay"
        , value<boost::uint64_t>()->default_value(0)
        , "total number of delay iterations to be executed")
        
        ( "current-trial"
        , value<boost::uint64_t>()->default_value(1)
        , "current trial (must be greater than 0 and less than --total-trials)")

        ( "total-trials"
        , value<boost::uint64_t>()->default_value(1)
        , "total number of trial runs")

        ( "seed"
        , value<boost::uint64_t>()->default_value(0)
        , "seed for the pseudo random number generator (if 0, a seed is "
          "choosen based on the current system time)")
        ;

    // Initialize and run HPX.
    return init(cmdline, argc, argv);
}
