// Copyright (c) 2007-2012 Hartmut Kaiser
// Copyright (c)      2012 Thomas Heller
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// This file has been automatically generated using the Boost.Wave tool.
// Do not edit manually.


namespace hpx { namespace actions
{
    
    
    template <
        typename Result,
        typename T0,
        Result (*funcptr)(T0)>
    struct action_impl<Result (*)(T0), funcptr>
    {
    public:
        typedef Result (*funcptr_type)(T0);
        typedef
            components::server::plain_function<action<funcptr_type, funcptr> >
            component_type;
        typedef Result result_type;
        typedef
            hpx::util::tuple1<typename detail::remove_qualifiers<T0>::type>
            arguments_type;
    protected:
        
        
        
        struct thread_function
        {
            typedef threads::thread_state_enum result_type;
            template <typename Arg0>
            BOOST_FORCEINLINE result_type operator()(
                BOOST_FWD_REF(Arg0) arg0) const
            {
                try {
                    LTM_(debug) << "Executing plain action("
                                << detail::get_action_name<action<funcptr_type, funcptr> >()
                                << ").";
                    
                    
                    
                    
                    
                    funcptr(boost::move(arg0));
                }
                catch (hpx::exception const& e) {
                    if (e.get_error() != hpx::thread_interrupted) {
                        LTM_(error)
                            << "Unhandled exception while executing plain action("
                            << detail::get_action_name<action<funcptr_type, funcptr> >()
                            << "): " << e.what();
                        
                        hpx::report_error(boost::current_exception());
                    }
                }
                
                
                
                util::force_error_on_lock();
                return threads::terminated;
            }
        };
    public:
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                HPX_STD_BIND(thread_function(),
                    util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0)), lva));
        }
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(continuation_type& cont,
            naming::address::address_type lva, BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                action<funcptr_type, funcptr>::construct_continuation_thread_function(
                    cont, funcptr, boost::forward<Arguments>(args)), lva));
        }
        template <typename Arguments>
        BOOST_FORCEINLINE static result_type
        execute_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            LTM_(debug)
                << "plain_direct_result_action" << 1
                << "::execute_function name("
                << detail::get_action_name<action<funcptr_type, funcptr> >() << ")";
            return funcptr(util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0));
        }
    };
    
    
    template <
        typename T0,
        void (*funcptr)(T0)>
    struct action_impl<void (*)(T0), funcptr>
    {
    public:
        typedef void (*funcptr_type)(T0);
        typedef
            components::server::plain_function<action<funcptr_type, funcptr> >
            component_type;
        typedef hpx::util::unused_type result_type;
        typedef
            hpx::util::tuple1<typename detail::remove_qualifiers<T0>::type>
            arguments_type;
    protected:
        
        
        
        struct thread_function
        {
            typedef threads::thread_state_enum result_type;
            template <typename Arg0>
            BOOST_FORCEINLINE result_type operator()(
                BOOST_FWD_REF(Arg0) arg0) const
            {
                try {
                    LTM_(debug) << "Executing plain action("
                                << detail::get_action_name<action<funcptr_type, funcptr> >()
                                << ").";
                    
                    
                    
                    
                    
                    funcptr(boost::move(arg0));
                }
                catch (hpx::exception const& e) {
                    if (e.get_error() != hpx::thread_interrupted) {
                        LTM_(error)
                            << "Unhandled exception while executing plain action("
                            << detail::get_action_name<action<funcptr_type, funcptr> >()
                            << "): " << e.what();
                        
                        hpx::report_error(boost::current_exception());
                    }
                }
                
                
                
                util::force_error_on_lock();
                return threads::terminated;
            }
        };
    public:
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                HPX_STD_BIND(thread_function(),
                    util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0)), lva));
        }
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(continuation_type& cont,
            naming::address::address_type lva, BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                action<funcptr_type, funcptr>::construct_continuation_thread_function_void(
                    cont, funcptr, boost::forward<Arguments>(args)), lva));
        }
        template <typename Arguments>
        BOOST_FORCEINLINE static util::unused_type
        execute_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            LTM_(debug)
                << "plain_direct_action" << 1
                << "::execute_function name("
                << detail::get_action_name<action<funcptr_type, funcptr> >() << ")";
            funcptr(util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0));
            return util::unused;
        }
    };
}}
namespace hpx { namespace traits
{
    template <typename Arg0,
        void (*F)(Arg0), 
        typename Enable>
    struct needs_guid_initialization<
            hpx::actions::transfer_action<
                void(*)(Arg0), F>, Enable>
      : boost::mpl::false_
    {};
    template <typename R, typename Arg0,
        R(*F)(Arg0),
        typename Enable>
    struct needs_guid_initialization<
            hpx::actions::transfer_action<
                R(*)(Arg0), F>, Enable>
      : boost::mpl::false_
    {};
}}
namespace hpx { namespace actions
{
    
    
    template <
        typename Result,
        typename T0 , typename T1,
        Result (*funcptr)(T0 , T1)>
    struct action_impl<Result (*)(T0 , T1), funcptr>
    {
    public:
        typedef Result (*funcptr_type)(T0 , T1);
        typedef
            components::server::plain_function<action<funcptr_type, funcptr> >
            component_type;
        typedef Result result_type;
        typedef
            hpx::util::tuple2<typename detail::remove_qualifiers<T0>::type , typename detail::remove_qualifiers<T1>::type>
            arguments_type;
    protected:
        
        
        
        struct thread_function
        {
            typedef threads::thread_state_enum result_type;
            template <typename Arg0 , typename Arg1>
            BOOST_FORCEINLINE result_type operator()(
                BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1) const
            {
                try {
                    LTM_(debug) << "Executing plain action("
                                << detail::get_action_name<action<funcptr_type, funcptr> >()
                                << ").";
                    
                    
                    
                    
                    
                    funcptr(boost::move(arg0) , boost::move(arg1));
                }
                catch (hpx::exception const& e) {
                    if (e.get_error() != hpx::thread_interrupted) {
                        LTM_(error)
                            << "Unhandled exception while executing plain action("
                            << detail::get_action_name<action<funcptr_type, funcptr> >()
                            << "): " << e.what();
                        
                        hpx::report_error(boost::current_exception());
                    }
                }
                
                
                
                util::force_error_on_lock();
                return threads::terminated;
            }
        };
    public:
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                HPX_STD_BIND(thread_function(),
                    util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1)), lva));
        }
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(continuation_type& cont,
            naming::address::address_type lva, BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                action<funcptr_type, funcptr>::construct_continuation_thread_function(
                    cont, funcptr, boost::forward<Arguments>(args)), lva));
        }
        template <typename Arguments>
        BOOST_FORCEINLINE static result_type
        execute_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            LTM_(debug)
                << "plain_direct_result_action" << 2
                << "::execute_function name("
                << detail::get_action_name<action<funcptr_type, funcptr> >() << ")";
            return funcptr(util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1));
        }
    };
    
    
    template <
        typename T0 , typename T1,
        void (*funcptr)(T0 , T1)>
    struct action_impl<void (*)(T0 , T1), funcptr>
    {
    public:
        typedef void (*funcptr_type)(T0 , T1);
        typedef
            components::server::plain_function<action<funcptr_type, funcptr> >
            component_type;
        typedef hpx::util::unused_type result_type;
        typedef
            hpx::util::tuple2<typename detail::remove_qualifiers<T0>::type , typename detail::remove_qualifiers<T1>::type>
            arguments_type;
    protected:
        
        
        
        struct thread_function
        {
            typedef threads::thread_state_enum result_type;
            template <typename Arg0 , typename Arg1>
            BOOST_FORCEINLINE result_type operator()(
                BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1) const
            {
                try {
                    LTM_(debug) << "Executing plain action("
                                << detail::get_action_name<action<funcptr_type, funcptr> >()
                                << ").";
                    
                    
                    
                    
                    
                    funcptr(boost::move(arg0) , boost::move(arg1));
                }
                catch (hpx::exception const& e) {
                    if (e.get_error() != hpx::thread_interrupted) {
                        LTM_(error)
                            << "Unhandled exception while executing plain action("
                            << detail::get_action_name<action<funcptr_type, funcptr> >()
                            << "): " << e.what();
                        
                        hpx::report_error(boost::current_exception());
                    }
                }
                
                
                
                util::force_error_on_lock();
                return threads::terminated;
            }
        };
    public:
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                HPX_STD_BIND(thread_function(),
                    util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1)), lva));
        }
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(continuation_type& cont,
            naming::address::address_type lva, BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                action<funcptr_type, funcptr>::construct_continuation_thread_function_void(
                    cont, funcptr, boost::forward<Arguments>(args)), lva));
        }
        template <typename Arguments>
        BOOST_FORCEINLINE static util::unused_type
        execute_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            LTM_(debug)
                << "plain_direct_action" << 2
                << "::execute_function name("
                << detail::get_action_name<action<funcptr_type, funcptr> >() << ")";
            funcptr(util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1));
            return util::unused;
        }
    };
}}
namespace hpx { namespace traits
{
    template <typename Arg0 , typename Arg1,
        void (*F)(Arg0 , Arg1), 
        typename Enable>
    struct needs_guid_initialization<
            hpx::actions::transfer_action<
                void(*)(Arg0 , Arg1), F>, Enable>
      : boost::mpl::false_
    {};
    template <typename R, typename Arg0 , typename Arg1,
        R(*F)(Arg0 , Arg1),
        typename Enable>
    struct needs_guid_initialization<
            hpx::actions::transfer_action<
                R(*)(Arg0 , Arg1), F>, Enable>
      : boost::mpl::false_
    {};
}}
namespace hpx { namespace actions
{
    
    
    template <
        typename Result,
        typename T0 , typename T1 , typename T2,
        Result (*funcptr)(T0 , T1 , T2)>
    struct action_impl<Result (*)(T0 , T1 , T2), funcptr>
    {
    public:
        typedef Result (*funcptr_type)(T0 , T1 , T2);
        typedef
            components::server::plain_function<action<funcptr_type, funcptr> >
            component_type;
        typedef Result result_type;
        typedef
            hpx::util::tuple3<typename detail::remove_qualifiers<T0>::type , typename detail::remove_qualifiers<T1>::type , typename detail::remove_qualifiers<T2>::type>
            arguments_type;
    protected:
        
        
        
        struct thread_function
        {
            typedef threads::thread_state_enum result_type;
            template <typename Arg0 , typename Arg1 , typename Arg2>
            BOOST_FORCEINLINE result_type operator()(
                BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2) const
            {
                try {
                    LTM_(debug) << "Executing plain action("
                                << detail::get_action_name<action<funcptr_type, funcptr> >()
                                << ").";
                    
                    
                    
                    
                    
                    funcptr(boost::move(arg0) , boost::move(arg1) , boost::move(arg2));
                }
                catch (hpx::exception const& e) {
                    if (e.get_error() != hpx::thread_interrupted) {
                        LTM_(error)
                            << "Unhandled exception while executing plain action("
                            << detail::get_action_name<action<funcptr_type, funcptr> >()
                            << "): " << e.what();
                        
                        hpx::report_error(boost::current_exception());
                    }
                }
                
                
                
                util::force_error_on_lock();
                return threads::terminated;
            }
        };
    public:
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                HPX_STD_BIND(thread_function(),
                    util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type2>::call( args. a2)), lva));
        }
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(continuation_type& cont,
            naming::address::address_type lva, BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                action<funcptr_type, funcptr>::construct_continuation_thread_function(
                    cont, funcptr, boost::forward<Arguments>(args)), lva));
        }
        template <typename Arguments>
        BOOST_FORCEINLINE static result_type
        execute_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            LTM_(debug)
                << "plain_direct_result_action" << 3
                << "::execute_function name("
                << detail::get_action_name<action<funcptr_type, funcptr> >() << ")";
            return funcptr(util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type2>::call( args. a2));
        }
    };
    
    
    template <
        typename T0 , typename T1 , typename T2,
        void (*funcptr)(T0 , T1 , T2)>
    struct action_impl<void (*)(T0 , T1 , T2), funcptr>
    {
    public:
        typedef void (*funcptr_type)(T0 , T1 , T2);
        typedef
            components::server::plain_function<action<funcptr_type, funcptr> >
            component_type;
        typedef hpx::util::unused_type result_type;
        typedef
            hpx::util::tuple3<typename detail::remove_qualifiers<T0>::type , typename detail::remove_qualifiers<T1>::type , typename detail::remove_qualifiers<T2>::type>
            arguments_type;
    protected:
        
        
        
        struct thread_function
        {
            typedef threads::thread_state_enum result_type;
            template <typename Arg0 , typename Arg1 , typename Arg2>
            BOOST_FORCEINLINE result_type operator()(
                BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2) const
            {
                try {
                    LTM_(debug) << "Executing plain action("
                                << detail::get_action_name<action<funcptr_type, funcptr> >()
                                << ").";
                    
                    
                    
                    
                    
                    funcptr(boost::move(arg0) , boost::move(arg1) , boost::move(arg2));
                }
                catch (hpx::exception const& e) {
                    if (e.get_error() != hpx::thread_interrupted) {
                        LTM_(error)
                            << "Unhandled exception while executing plain action("
                            << detail::get_action_name<action<funcptr_type, funcptr> >()
                            << "): " << e.what();
                        
                        hpx::report_error(boost::current_exception());
                    }
                }
                
                
                
                util::force_error_on_lock();
                return threads::terminated;
            }
        };
    public:
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                HPX_STD_BIND(thread_function(),
                    util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type2>::call( args. a2)), lva));
        }
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(continuation_type& cont,
            naming::address::address_type lva, BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                action<funcptr_type, funcptr>::construct_continuation_thread_function_void(
                    cont, funcptr, boost::forward<Arguments>(args)), lva));
        }
        template <typename Arguments>
        BOOST_FORCEINLINE static util::unused_type
        execute_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            LTM_(debug)
                << "plain_direct_action" << 3
                << "::execute_function name("
                << detail::get_action_name<action<funcptr_type, funcptr> >() << ")";
            funcptr(util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type2>::call( args. a2));
            return util::unused;
        }
    };
}}
namespace hpx { namespace traits
{
    template <typename Arg0 , typename Arg1 , typename Arg2,
        void (*F)(Arg0 , Arg1 , Arg2), 
        typename Enable>
    struct needs_guid_initialization<
            hpx::actions::transfer_action<
                void(*)(Arg0 , Arg1 , Arg2), F>, Enable>
      : boost::mpl::false_
    {};
    template <typename R, typename Arg0 , typename Arg1 , typename Arg2,
        R(*F)(Arg0 , Arg1 , Arg2),
        typename Enable>
    struct needs_guid_initialization<
            hpx::actions::transfer_action<
                R(*)(Arg0 , Arg1 , Arg2), F>, Enable>
      : boost::mpl::false_
    {};
}}
namespace hpx { namespace actions
{
    
    
    template <
        typename Result,
        typename T0 , typename T1 , typename T2 , typename T3,
        Result (*funcptr)(T0 , T1 , T2 , T3)>
    struct action_impl<Result (*)(T0 , T1 , T2 , T3), funcptr>
    {
    public:
        typedef Result (*funcptr_type)(T0 , T1 , T2 , T3);
        typedef
            components::server::plain_function<action<funcptr_type, funcptr> >
            component_type;
        typedef Result result_type;
        typedef
            hpx::util::tuple4<typename detail::remove_qualifiers<T0>::type , typename detail::remove_qualifiers<T1>::type , typename detail::remove_qualifiers<T2>::type , typename detail::remove_qualifiers<T3>::type>
            arguments_type;
    protected:
        
        
        
        struct thread_function
        {
            typedef threads::thread_state_enum result_type;
            template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
            BOOST_FORCEINLINE result_type operator()(
                BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3) const
            {
                try {
                    LTM_(debug) << "Executing plain action("
                                << detail::get_action_name<action<funcptr_type, funcptr> >()
                                << ").";
                    
                    
                    
                    
                    
                    funcptr(boost::move(arg0) , boost::move(arg1) , boost::move(arg2) , boost::move(arg3));
                }
                catch (hpx::exception const& e) {
                    if (e.get_error() != hpx::thread_interrupted) {
                        LTM_(error)
                            << "Unhandled exception while executing plain action("
                            << detail::get_action_name<action<funcptr_type, funcptr> >()
                            << "): " << e.what();
                        
                        hpx::report_error(boost::current_exception());
                    }
                }
                
                
                
                util::force_error_on_lock();
                return threads::terminated;
            }
        };
    public:
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                HPX_STD_BIND(thread_function(),
                    util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type2>::call( args. a2) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type3>::call( args. a3)), lva));
        }
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(continuation_type& cont,
            naming::address::address_type lva, BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                action<funcptr_type, funcptr>::construct_continuation_thread_function(
                    cont, funcptr, boost::forward<Arguments>(args)), lva));
        }
        template <typename Arguments>
        BOOST_FORCEINLINE static result_type
        execute_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            LTM_(debug)
                << "plain_direct_result_action" << 4
                << "::execute_function name("
                << detail::get_action_name<action<funcptr_type, funcptr> >() << ")";
            return funcptr(util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type2>::call( args. a2) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type3>::call( args. a3));
        }
    };
    
    
    template <
        typename T0 , typename T1 , typename T2 , typename T3,
        void (*funcptr)(T0 , T1 , T2 , T3)>
    struct action_impl<void (*)(T0 , T1 , T2 , T3), funcptr>
    {
    public:
        typedef void (*funcptr_type)(T0 , T1 , T2 , T3);
        typedef
            components::server::plain_function<action<funcptr_type, funcptr> >
            component_type;
        typedef hpx::util::unused_type result_type;
        typedef
            hpx::util::tuple4<typename detail::remove_qualifiers<T0>::type , typename detail::remove_qualifiers<T1>::type , typename detail::remove_qualifiers<T2>::type , typename detail::remove_qualifiers<T3>::type>
            arguments_type;
    protected:
        
        
        
        struct thread_function
        {
            typedef threads::thread_state_enum result_type;
            template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
            BOOST_FORCEINLINE result_type operator()(
                BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3) const
            {
                try {
                    LTM_(debug) << "Executing plain action("
                                << detail::get_action_name<action<funcptr_type, funcptr> >()
                                << ").";
                    
                    
                    
                    
                    
                    funcptr(boost::move(arg0) , boost::move(arg1) , boost::move(arg2) , boost::move(arg3));
                }
                catch (hpx::exception const& e) {
                    if (e.get_error() != hpx::thread_interrupted) {
                        LTM_(error)
                            << "Unhandled exception while executing plain action("
                            << detail::get_action_name<action<funcptr_type, funcptr> >()
                            << "): " << e.what();
                        
                        hpx::report_error(boost::current_exception());
                    }
                }
                
                
                
                util::force_error_on_lock();
                return threads::terminated;
            }
        };
    public:
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                HPX_STD_BIND(thread_function(),
                    util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type2>::call( args. a2) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type3>::call( args. a3)), lva));
        }
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(continuation_type& cont,
            naming::address::address_type lva, BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                action<funcptr_type, funcptr>::construct_continuation_thread_function_void(
                    cont, funcptr, boost::forward<Arguments>(args)), lva));
        }
        template <typename Arguments>
        BOOST_FORCEINLINE static util::unused_type
        execute_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            LTM_(debug)
                << "plain_direct_action" << 4
                << "::execute_function name("
                << detail::get_action_name<action<funcptr_type, funcptr> >() << ")";
            funcptr(util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type2>::call( args. a2) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type3>::call( args. a3));
            return util::unused;
        }
    };
}}
namespace hpx { namespace traits
{
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3,
        void (*F)(Arg0 , Arg1 , Arg2 , Arg3), 
        typename Enable>
    struct needs_guid_initialization<
            hpx::actions::transfer_action<
                void(*)(Arg0 , Arg1 , Arg2 , Arg3), F>, Enable>
      : boost::mpl::false_
    {};
    template <typename R, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3,
        R(*F)(Arg0 , Arg1 , Arg2 , Arg3),
        typename Enable>
    struct needs_guid_initialization<
            hpx::actions::transfer_action<
                R(*)(Arg0 , Arg1 , Arg2 , Arg3), F>, Enable>
      : boost::mpl::false_
    {};
}}
namespace hpx { namespace actions
{
    
    
    template <
        typename Result,
        typename T0 , typename T1 , typename T2 , typename T3 , typename T4,
        Result (*funcptr)(T0 , T1 , T2 , T3 , T4)>
    struct action_impl<Result (*)(T0 , T1 , T2 , T3 , T4), funcptr>
    {
    public:
        typedef Result (*funcptr_type)(T0 , T1 , T2 , T3 , T4);
        typedef
            components::server::plain_function<action<funcptr_type, funcptr> >
            component_type;
        typedef Result result_type;
        typedef
            hpx::util::tuple5<typename detail::remove_qualifiers<T0>::type , typename detail::remove_qualifiers<T1>::type , typename detail::remove_qualifiers<T2>::type , typename detail::remove_qualifiers<T3>::type , typename detail::remove_qualifiers<T4>::type>
            arguments_type;
    protected:
        
        
        
        struct thread_function
        {
            typedef threads::thread_state_enum result_type;
            template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
            BOOST_FORCEINLINE result_type operator()(
                BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4) const
            {
                try {
                    LTM_(debug) << "Executing plain action("
                                << detail::get_action_name<action<funcptr_type, funcptr> >()
                                << ").";
                    
                    
                    
                    
                    
                    funcptr(boost::move(arg0) , boost::move(arg1) , boost::move(arg2) , boost::move(arg3) , boost::move(arg4));
                }
                catch (hpx::exception const& e) {
                    if (e.get_error() != hpx::thread_interrupted) {
                        LTM_(error)
                            << "Unhandled exception while executing plain action("
                            << detail::get_action_name<action<funcptr_type, funcptr> >()
                            << "): " << e.what();
                        
                        hpx::report_error(boost::current_exception());
                    }
                }
                
                
                
                util::force_error_on_lock();
                return threads::terminated;
            }
        };
    public:
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                HPX_STD_BIND(thread_function(),
                    util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type2>::call( args. a2) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type3>::call( args. a3) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type4>::call( args. a4)), lva));
        }
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(continuation_type& cont,
            naming::address::address_type lva, BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                action<funcptr_type, funcptr>::construct_continuation_thread_function(
                    cont, funcptr, boost::forward<Arguments>(args)), lva));
        }
        template <typename Arguments>
        BOOST_FORCEINLINE static result_type
        execute_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            LTM_(debug)
                << "plain_direct_result_action" << 5
                << "::execute_function name("
                << detail::get_action_name<action<funcptr_type, funcptr> >() << ")";
            return funcptr(util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type2>::call( args. a2) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type3>::call( args. a3) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type4>::call( args. a4));
        }
    };
    
    
    template <
        typename T0 , typename T1 , typename T2 , typename T3 , typename T4,
        void (*funcptr)(T0 , T1 , T2 , T3 , T4)>
    struct action_impl<void (*)(T0 , T1 , T2 , T3 , T4), funcptr>
    {
    public:
        typedef void (*funcptr_type)(T0 , T1 , T2 , T3 , T4);
        typedef
            components::server::plain_function<action<funcptr_type, funcptr> >
            component_type;
        typedef hpx::util::unused_type result_type;
        typedef
            hpx::util::tuple5<typename detail::remove_qualifiers<T0>::type , typename detail::remove_qualifiers<T1>::type , typename detail::remove_qualifiers<T2>::type , typename detail::remove_qualifiers<T3>::type , typename detail::remove_qualifiers<T4>::type>
            arguments_type;
    protected:
        
        
        
        struct thread_function
        {
            typedef threads::thread_state_enum result_type;
            template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
            BOOST_FORCEINLINE result_type operator()(
                BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4) const
            {
                try {
                    LTM_(debug) << "Executing plain action("
                                << detail::get_action_name<action<funcptr_type, funcptr> >()
                                << ").";
                    
                    
                    
                    
                    
                    funcptr(boost::move(arg0) , boost::move(arg1) , boost::move(arg2) , boost::move(arg3) , boost::move(arg4));
                }
                catch (hpx::exception const& e) {
                    if (e.get_error() != hpx::thread_interrupted) {
                        LTM_(error)
                            << "Unhandled exception while executing plain action("
                            << detail::get_action_name<action<funcptr_type, funcptr> >()
                            << "): " << e.what();
                        
                        hpx::report_error(boost::current_exception());
                    }
                }
                
                
                
                util::force_error_on_lock();
                return threads::terminated;
            }
        };
    public:
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                HPX_STD_BIND(thread_function(),
                    util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type2>::call( args. a2) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type3>::call( args. a3) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type4>::call( args. a4)), lva));
        }
        
        
        
        
        template <typename Arguments>
        static HPX_STD_FUNCTION<threads::thread_function_type>
        construct_thread_function(continuation_type& cont,
            naming::address::address_type lva, BOOST_FWD_REF(Arguments) args)
        {
            return boost::move(decorate_action<funcptr_type, funcptr>::call(
                action<funcptr_type, funcptr>::construct_continuation_thread_function_void(
                    cont, funcptr, boost::forward<Arguments>(args)), lva));
        }
        template <typename Arguments>
        BOOST_FORCEINLINE static util::unused_type
        execute_function(naming::address::address_type lva,
            BOOST_FWD_REF(Arguments) args)
        {
            LTM_(debug)
                << "plain_direct_action" << 5
                << "::execute_function name("
                << detail::get_action_name<action<funcptr_type, funcptr> >() << ")";
            funcptr(util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type0>::call( args. a0) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type1>::call( args. a1) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type2>::call( args. a2) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type3>::call( args. a3) , util::detail::move_if_no_ref< typename util::detail::remove_reference<Arguments>::type:: member_type4>::call( args. a4));
            return util::unused;
        }
    };
}}
namespace hpx { namespace traits
{
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4,
        void (*F)(Arg0 , Arg1 , Arg2 , Arg3 , Arg4), 
        typename Enable>
    struct needs_guid_initialization<
            hpx::actions::transfer_action<
                void(*)(Arg0 , Arg1 , Arg2 , Arg3 , Arg4), F>, Enable>
      : boost::mpl::false_
    {};
    template <typename R, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4,
        R(*F)(Arg0 , Arg1 , Arg2 , Arg3 , Arg4),
        typename Enable>
    struct needs_guid_initialization<
            hpx::actions::transfer_action<
                R(*)(Arg0 , Arg1 , Arg2 , Arg3 , Arg4), F>, Enable>
      : boost::mpl::false_
    {};
}}
