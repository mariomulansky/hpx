//  Copyright (c) 2007-2011 Hartmut Kaiser
//  Copyright (c)      2011 Bryce Adelstein-Lelbach
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_AF0DB32C_432B_4E92_9040_66177E0693CC)
#define HPX_AF0DB32C_432B_4E92_9040_66177E0693CC

#include <hpx/runtime/components/stubs/stub_base.hpp>
#include <hpx/runtime/applier/apply.hpp>
#include <hpx/lcos/async.hpp>

#include "../server/managed_accumulator.hpp"

namespace accumulators { namespace stubs
{
    ///////////////////////////////////////////////////////////////////////////
    struct managed_accumulator
      : hpx::components::stub_base<server::managed_accumulator>
    {
        ///////////////////////////////////////////////////////////////////////
        /// Reset the accumulator's value to 0.
        ///
        /// \note This function has fire-and-forget semantics. It will not wait
        ///       for the action to be executed. Instead, it will return
        ///       immediately after the action has has been dispatched.
        static void reset_non_blocking(hpx::naming::id_type const& gid)
        {
            typedef server::managed_accumulator::reset_action action_type;
            hpx::applier::apply<action_type>(gid);
        }

        /// Reset the accumulator's value to 0.
        ///
        /// \note This function is fully synchronous.
        static void reset_sync(hpx::naming::id_type const& gid)
        {
            typedef server::managed_accumulator::reset_action action_type;
            hpx::lcos::async<action_type>(gid).get();
        }

        ///////////////////////////////////////////////////////////////////////
        /// Add \p arg to the accumulator's value.
        ///
        /// \note This function has fire-and-forget semantics. It will not wait
        ///       for the action to be executed. Instead, it will return
        ///       immediately after the action has has been dispatched.
        static void
        add_non_blocking(hpx::naming::id_type const& gid, boost::uint64_t arg)
        {
            typedef server::managed_accumulator::add_action action_type;
            hpx::applier::apply<action_type>(gid, arg);
        }

        /// Add \p arg to the accumulator's value.
        ///
        /// \note This function is fully synchronous.
        static void
        add_sync(hpx::naming::id_type const& gid, boost::uint64_t arg)
        {
            typedef server::managed_accumulator::add_action action_type;
            hpx::lcos::async<action_type>(gid, arg).get();
        }

        ///////////////////////////////////////////////////////////////////////
        /// Asynchronously query the current value of the accumulator.
        ///
        /// \returns This function returns an \a hpx::lcos::promise. When the
        ///          value of this computation is needed, the get() method of
        ///          the promise should be called. If the value is available,
        ///          get() will return immediately; otherwise, it will block
        ///          until the value is ready.
        static hpx::lcos::promise<boost::uint64_t>
        query_async(hpx::naming::id_type const& gid)
        {
            typedef server::managed_accumulator::query_action action_type;
            return hpx::lcos::async<action_type>(gid);
        }

        /// Query the current value of the accumulator.
        ///
        /// \note This function is fully synchronous.
        static boost::uint64_t query_sync(hpx::naming::id_type const& gid)
        {
            // The following get yields control while the action is executed.
            return query_async(gid).get();
        }
    };
}}

#endif
