// Copyright (c) 2007-2013 Hartmut Kaiser
// Copyright (c) 2012-2013 Thomas Heller
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// This file has been automatically generated using the Boost.Wave tool.
// Do not edit manually.


namespace hpx { namespace util { namespace detail
{
    template <typename Tuple> struct tuple_element< 0, Tuple> { typedef typename Tuple::member_type0 type; typedef typename detail::tuple_element_access<type>::type rtype; typedef typename detail::tuple_element_access<type>::ctype crtype; static BOOST_CONSTEXPR rtype get(Tuple& t) BOOST_NOEXCEPT { return t.a0; } static BOOST_CONSTEXPR crtype get(Tuple const& t) BOOST_NOEXCEPT { return t.a0; } }; template <typename Tuple> struct tuple_element< 1, Tuple> { typedef typename Tuple::member_type1 type; typedef typename detail::tuple_element_access<type>::type rtype; typedef typename detail::tuple_element_access<type>::ctype crtype; static BOOST_CONSTEXPR rtype get(Tuple& t) BOOST_NOEXCEPT { return t.a1; } static BOOST_CONSTEXPR crtype get(Tuple const& t) BOOST_NOEXCEPT { return t.a1; } }; template <typename Tuple> struct tuple_element< 2, Tuple> { typedef typename Tuple::member_type2 type; typedef typename detail::tuple_element_access<type>::type rtype; typedef typename detail::tuple_element_access<type>::ctype crtype; static BOOST_CONSTEXPR rtype get(Tuple& t) BOOST_NOEXCEPT { return t.a2; } static BOOST_CONSTEXPR crtype get(Tuple const& t) BOOST_NOEXCEPT { return t.a2; } }; template <typename Tuple> struct tuple_element< 3, Tuple> { typedef typename Tuple::member_type3 type; typedef typename detail::tuple_element_access<type>::type rtype; typedef typename detail::tuple_element_access<type>::ctype crtype; static BOOST_CONSTEXPR rtype get(Tuple& t) BOOST_NOEXCEPT { return t.a3; } static BOOST_CONSTEXPR crtype get(Tuple const& t) BOOST_NOEXCEPT { return t.a3; } }; template <typename Tuple> struct tuple_element< 4, Tuple> { typedef typename Tuple::member_type4 type; typedef typename detail::tuple_element_access<type>::type rtype; typedef typename detail::tuple_element_access<type>::ctype crtype; static BOOST_CONSTEXPR rtype get(Tuple& t) BOOST_NOEXCEPT { return t.a4; } static BOOST_CONSTEXPR crtype get(Tuple const& t) BOOST_NOEXCEPT { return t.a4; } }; template <typename Tuple> struct tuple_element< 5, Tuple> { typedef typename Tuple::member_type5 type; typedef typename detail::tuple_element_access<type>::type rtype; typedef typename detail::tuple_element_access<type>::ctype crtype; static BOOST_CONSTEXPR rtype get(Tuple& t) BOOST_NOEXCEPT { return t.a5; } static BOOST_CONSTEXPR crtype get(Tuple const& t) BOOST_NOEXCEPT { return t.a5; } }; template <typename Tuple> struct tuple_element< 6, Tuple> { typedef typename Tuple::member_type6 type; typedef typename detail::tuple_element_access<type>::type rtype; typedef typename detail::tuple_element_access<type>::ctype crtype; static BOOST_CONSTEXPR rtype get(Tuple& t) BOOST_NOEXCEPT { return t.a6; } static BOOST_CONSTEXPR crtype get(Tuple const& t) BOOST_NOEXCEPT { return t.a6; } }; template <typename Tuple> struct tuple_element< 7, Tuple> { typedef typename Tuple::member_type7 type; typedef typename detail::tuple_element_access<type>::type rtype; typedef typename detail::tuple_element_access<type>::ctype crtype; static BOOST_CONSTEXPR rtype get(Tuple& t) BOOST_NOEXCEPT { return t.a7; } static BOOST_CONSTEXPR crtype get(Tuple const& t) BOOST_NOEXCEPT { return t.a7; } }; template <typename Tuple> struct tuple_element< 8, Tuple> { typedef typename Tuple::member_type8 type; typedef typename detail::tuple_element_access<type>::type rtype; typedef typename detail::tuple_element_access<type>::ctype crtype; static BOOST_CONSTEXPR rtype get(Tuple& t) BOOST_NOEXCEPT { return t.a8; } static BOOST_CONSTEXPR crtype get(Tuple const& t) BOOST_NOEXCEPT { return t.a8; } }; template <typename Tuple> struct tuple_element< 9, Tuple> { typedef typename Tuple::member_type9 type; typedef typename detail::tuple_element_access<type>::type rtype; typedef typename detail::tuple_element_access<type>::ctype crtype; static BOOST_CONSTEXPR rtype get(Tuple& t) BOOST_NOEXCEPT { return t.a9; } static BOOST_CONSTEXPR crtype get(Tuple const& t) BOOST_NOEXCEPT { return t.a9; } }; template <typename Tuple> struct tuple_element< 10, Tuple> { typedef typename Tuple::member_type10 type; typedef typename detail::tuple_element_access<type>::type rtype; typedef typename detail::tuple_element_access<type>::ctype crtype; static BOOST_CONSTEXPR rtype get(Tuple& t) BOOST_NOEXCEPT { return t.a10; } static BOOST_CONSTEXPR crtype get(Tuple const& t) BOOST_NOEXCEPT { return t.a10; } }; template <typename Tuple> struct tuple_element< 11, Tuple> { typedef typename Tuple::member_type11 type; typedef typename detail::tuple_element_access<type>::type rtype; typedef typename detail::tuple_element_access<type>::ctype crtype; static BOOST_CONSTEXPR rtype get(Tuple& t) BOOST_NOEXCEPT { return t.a11; } static BOOST_CONSTEXPR crtype get(Tuple const& t) BOOST_NOEXCEPT { return t.a11; } }; template <typename Tuple> struct tuple_element< 12, Tuple> { typedef typename Tuple::member_type12 type; typedef typename detail::tuple_element_access<type>::type rtype; typedef typename detail::tuple_element_access<type>::ctype crtype; static BOOST_CONSTEXPR rtype get(Tuple& t) BOOST_NOEXCEPT { return t.a12; } static BOOST_CONSTEXPR crtype get(Tuple const& t) BOOST_NOEXCEPT { return t.a12; } };
}}}
namespace hpx { namespace util
{
    template <typename A0>
    struct tuple1
    {
        typedef A0 member_type0; A0 a0;
        template <int E>
        typename detail::tuple_element<E, tuple1>::rtype
        get() BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple1>::get(*this);
        }
        template <int E>
        BOOST_CONSTEXPR
        typename detail::tuple_element<E, tuple1>::crtype
        get() const BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple1>::get(*this);
        }
        tuple1() {}
        tuple1(tuple1 const& other)
          : a0(other.a0)
        {}
        tuple1(BOOST_RV_REF(tuple1) other)
          : a0(detail::move_if_no_ref<A0>::call( other.a0))
        {}
        tuple1 & operator=(BOOST_COPY_ASSIGN_REF(tuple1) other)
        {
            a0 = other.a0;
            return *this;
        }
        tuple1 & operator=(BOOST_RV_REF(tuple1) other)
        {
            a0 = detail::move_if_no_ref<A0>::call( other.a0);
            return *this;
        }
        template <typename T0>
        tuple1 & operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple1<T0>
            ))) other)
        {
            a0 = detail::move_if_no_ref<T0>::call( other.a0);
            return *this;
        }
        template <typename Arg0>
        explicit tuple1(BOOST_FWD_REF(Arg0) arg0,
                typename boost::disable_if<is_tuple<Arg0> >::type* = 0)
          : a0(boost::forward<Arg0>(arg0))
        {}
        template <typename Arg0>
        explicit tuple1(BOOST_RV_REF(tuple1<Arg0>) arg0)
          : a0(detail::move_if_no_ref<Arg0>::call(arg0.a0))
        {}
        typedef boost::mpl::int_<1> size_type;
        static const int size_value = 1;
    private:
        BOOST_COPYABLE_AND_MOVABLE(tuple1);
    };
    template <typename T0>
    struct is_tuple<tuple1<T0> >
      : boost::mpl::true_
    {};
    
    template <typename Arg0>
    BOOST_FORCEINLINE
    tuple1<typename detail::env_value_type<Arg0>::type>
    forward_as_tuple(BOOST_FWD_REF(Arg0) arg0) BOOST_NOEXCEPT
    {
        return tuple1<
                typename detail::env_value_type<Arg0>::type>(
            boost::forward<Arg0>( arg0 ));
    }
    
    template <typename A0>
    struct tuple<A0>
      : tuple1<A0>
    {
        typedef tuple1<A0> base_tuple;
        tuple() {}
        tuple(tuple const& other)
          : base_tuple(other)
        {}
        tuple(base_tuple const& other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(tuple) other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(base_tuple) other)
          : base_tuple(other)
        {}
        tuple& operator=(BOOST_COPY_ASSIGN_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_COPY_ASSIGN_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple<T0>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple1<T0>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename Arg0>
        tuple(BOOST_FWD_REF(Arg0) arg0)
          : base_tuple(boost::forward<Arg0>( arg0 ))
        {}
        template <typename T0>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple<T0>
                ))) other)
          : base_tuple(other)
        {}
        template <typename T0>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple1<T0>
                ))) other)
          : base_tuple(other)
        {}
    };
    
    template <typename Arg0>
    BOOST_FORCEINLINE tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type>
    make_tuple(BOOST_FWD_REF(Arg0) arg0)
    {
        return tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type>(
            boost::forward<Arg0>( arg0 ));
    }
}}
namespace boost { namespace fusion { namespace traits { template< typename A0 > struct tag_of<hpx::util::tuple1<A0> > { typedef struct_tag type; }; template< typename A0 > struct tag_of<hpx::util::tuple1<A0> const> { typedef struct_tag type; }; } namespace extension { template< typename A0 > struct access::struct_member< hpx::util::tuple1<A0> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0 > struct struct_member_name< hpx::util::tuple1<A0> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0 > struct struct_size<hpx::util::tuple1<A0> > : mpl::int_<1> {}; template< typename A0 > struct struct_is_view< hpx::util::tuple1<A0> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0 > struct sequence_tag<hpx::util::tuple1<A0> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0 > struct sequence_tag< hpx::util::tuple1<A0> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace fusion { namespace traits { template< typename A0 > struct tag_of<hpx::util::tuple<A0> > { typedef struct_tag type; }; template< typename A0 > struct tag_of<hpx::util::tuple<A0> const> { typedef struct_tag type; }; } namespace extension { template< typename A0 > struct access::struct_member< hpx::util::tuple<A0> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0 > struct struct_member_name< hpx::util::tuple<A0> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0 > struct struct_size<hpx::util::tuple<A0> > : mpl::int_<1> {}; template< typename A0 > struct struct_is_view< hpx::util::tuple<A0> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0 > struct sequence_tag<hpx::util::tuple<A0> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0 > struct sequence_tag< hpx::util::tuple<A0> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace serialization
{
    template <typename T0>
    struct is_bitwise_serializable<
            hpx::util::tuple1<T0> >
       : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple1<T0> >
    {};
    template <typename T0>
    struct is_bitwise_serializable<
            hpx::util::tuple<T0> >
      : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple<T0> >
    {};
}}
namespace hpx { namespace util
{
    template <typename A0 , typename A1>
    struct tuple2
    {
        typedef A0 member_type0; A0 a0; typedef A1 member_type1; A1 a1;
        template <int E>
        typename detail::tuple_element<E, tuple2>::rtype
        get() BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple2>::get(*this);
        }
        template <int E>
        BOOST_CONSTEXPR
        typename detail::tuple_element<E, tuple2>::crtype
        get() const BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple2>::get(*this);
        }
        tuple2() {}
        tuple2(tuple2 const& other)
          : a0(other.a0) , a1(other.a1)
        {}
        tuple2(BOOST_RV_REF(tuple2) other)
          : a0(detail::move_if_no_ref<A0>::call( other.a0)) , a1(detail::move_if_no_ref<A1>::call( other.a1))
        {}
        tuple2 & operator=(BOOST_COPY_ASSIGN_REF(tuple2) other)
        {
            a0 = other.a0; a1 = other.a1;
            return *this;
        }
        tuple2 & operator=(BOOST_RV_REF(tuple2) other)
        {
            a0 = detail::move_if_no_ref<A0>::call( other.a0); a1 = detail::move_if_no_ref<A1>::call( other.a1);
            return *this;
        }
        template <typename T0 , typename T1>
        tuple2 & operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple2<T0 , T1>
            ))) other)
        {
            a0 = detail::move_if_no_ref<T0>::call( other.a0); a1 = detail::move_if_no_ref<T1>::call( other.a1);
            return *this;
        }
        template <typename Arg0 , typename Arg1>
        tuple2(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1)
          : a0(boost::forward<Arg0>( arg0 )) , a1(boost::forward<Arg1>( arg1 ))
        {}
        template <typename T0 , typename T1>
        tuple2(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple2<T0 , T1>
                ))) other)
          : a0(detail::move_if_no_ref<T0>::call( other.a0)) , a1(detail::move_if_no_ref<T1>::call( other.a1))
        {}
        typedef boost::mpl::int_<2> size_type;
        static const int size_value = 2;
    private:
        BOOST_COPYABLE_AND_MOVABLE(tuple2);
    };
    template <typename T0 , typename T1>
    struct is_tuple<tuple2<T0 , T1> >
      : boost::mpl::true_
    {};
    
    template <typename Arg0 , typename Arg1>
    BOOST_FORCEINLINE
    tuple2<typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type>
    forward_as_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1) BOOST_NOEXCEPT
    {
        return tuple2<
                typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ));
    }
    
    template <typename A0 , typename A1>
    struct tuple<A0 , A1>
      : tuple2<A0 , A1>
    {
        typedef tuple2<A0 , A1> base_tuple;
        tuple() {}
        tuple(tuple const& other)
          : base_tuple(other)
        {}
        tuple(base_tuple const& other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(tuple) other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(base_tuple) other)
          : base_tuple(other)
        {}
        tuple& operator=(BOOST_COPY_ASSIGN_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_COPY_ASSIGN_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple<T0 , T1>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple2<T0 , T1>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename Arg0 , typename Arg1>
        tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1)
          : base_tuple(boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ))
        {}
        template <typename T0 , typename T1>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple<T0 , T1>
                ))) other)
          : base_tuple(other)
        {}
        template <typename T0 , typename T1>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple2<T0 , T1>
                ))) other)
          : base_tuple(other)
        {}
    };
    
    template <typename Arg0 , typename Arg1>
    BOOST_FORCEINLINE tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type>
    make_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1)
    {
        return tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ));
    }
}}
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1 > struct tag_of<hpx::util::tuple2<A0, A1> > { typedef struct_tag type; }; template< typename A0, typename A1 > struct tag_of<hpx::util::tuple2<A0, A1> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1 > struct access::struct_member< hpx::util::tuple2<A0, A1> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1 > struct struct_member_name< hpx::util::tuple2<A0, A1> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1 > struct access::struct_member< hpx::util::tuple2<A0, A1> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1 > struct struct_member_name< hpx::util::tuple2<A0, A1> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1 > struct struct_size<hpx::util::tuple2<A0, A1> > : mpl::int_<2> {}; template< typename A0, typename A1 > struct struct_is_view< hpx::util::tuple2<A0, A1> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1 > struct sequence_tag<hpx::util::tuple2<A0, A1> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1 > struct sequence_tag< hpx::util::tuple2<A0, A1> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1 > struct tag_of<hpx::util::tuple<A0, A1> > { typedef struct_tag type; }; template< typename A0, typename A1 > struct tag_of<hpx::util::tuple<A0, A1> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1 > struct access::struct_member< hpx::util::tuple<A0, A1> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1 > struct struct_member_name< hpx::util::tuple<A0, A1> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1 > struct access::struct_member< hpx::util::tuple<A0, A1> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1 > struct struct_member_name< hpx::util::tuple<A0, A1> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1 > struct struct_size<hpx::util::tuple<A0, A1> > : mpl::int_<2> {}; template< typename A0, typename A1 > struct struct_is_view< hpx::util::tuple<A0, A1> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1 > struct sequence_tag<hpx::util::tuple<A0, A1> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1 > struct sequence_tag< hpx::util::tuple<A0, A1> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace serialization
{
    template <typename T0 , typename T1>
    struct is_bitwise_serializable<
            hpx::util::tuple2<T0 , T1> >
       : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple2<T0 , T1> >
    {};
    template <typename T0 , typename T1>
    struct is_bitwise_serializable<
            hpx::util::tuple<T0 , T1> >
      : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple<T0 , T1> >
    {};
}}
namespace hpx { namespace util
{
    template <typename A0 , typename A1 , typename A2>
    struct tuple3
    {
        typedef A0 member_type0; A0 a0; typedef A1 member_type1; A1 a1; typedef A2 member_type2; A2 a2;
        template <int E>
        typename detail::tuple_element<E, tuple3>::rtype
        get() BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple3>::get(*this);
        }
        template <int E>
        BOOST_CONSTEXPR
        typename detail::tuple_element<E, tuple3>::crtype
        get() const BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple3>::get(*this);
        }
        tuple3() {}
        tuple3(tuple3 const& other)
          : a0(other.a0) , a1(other.a1) , a2(other.a2)
        {}
        tuple3(BOOST_RV_REF(tuple3) other)
          : a0(detail::move_if_no_ref<A0>::call( other.a0)) , a1(detail::move_if_no_ref<A1>::call( other.a1)) , a2(detail::move_if_no_ref<A2>::call( other.a2))
        {}
        tuple3 & operator=(BOOST_COPY_ASSIGN_REF(tuple3) other)
        {
            a0 = other.a0; a1 = other.a1; a2 = other.a2;
            return *this;
        }
        tuple3 & operator=(BOOST_RV_REF(tuple3) other)
        {
            a0 = detail::move_if_no_ref<A0>::call( other.a0); a1 = detail::move_if_no_ref<A1>::call( other.a1); a2 = detail::move_if_no_ref<A2>::call( other.a2);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2>
        tuple3 & operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple3<T0 , T1 , T2>
            ))) other)
        {
            a0 = detail::move_if_no_ref<T0>::call( other.a0); a1 = detail::move_if_no_ref<T1>::call( other.a1); a2 = detail::move_if_no_ref<T2>::call( other.a2);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2>
        tuple3(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2)
          : a0(boost::forward<Arg0>( arg0 )) , a1(boost::forward<Arg1>( arg1 )) , a2(boost::forward<Arg2>( arg2 ))
        {}
        template <typename T0 , typename T1 , typename T2>
        tuple3(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple3<T0 , T1 , T2>
                ))) other)
          : a0(detail::move_if_no_ref<T0>::call( other.a0)) , a1(detail::move_if_no_ref<T1>::call( other.a1)) , a2(detail::move_if_no_ref<T2>::call( other.a2))
        {}
        typedef boost::mpl::int_<3> size_type;
        static const int size_value = 3;
    private:
        BOOST_COPYABLE_AND_MOVABLE(tuple3);
    };
    template <typename T0 , typename T1 , typename T2>
    struct is_tuple<tuple3<T0 , T1 , T2> >
      : boost::mpl::true_
    {};
    
    template <typename Arg0 , typename Arg1 , typename Arg2>
    BOOST_FORCEINLINE
    tuple3<typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type>
    forward_as_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2) BOOST_NOEXCEPT
    {
        return tuple3<
                typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ));
    }
    
    template <typename A0 , typename A1 , typename A2>
    struct tuple<A0 , A1 , A2>
      : tuple3<A0 , A1 , A2>
    {
        typedef tuple3<A0 , A1 , A2> base_tuple;
        tuple() {}
        tuple(tuple const& other)
          : base_tuple(other)
        {}
        tuple(base_tuple const& other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(tuple) other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(base_tuple) other)
          : base_tuple(other)
        {}
        tuple& operator=(BOOST_COPY_ASSIGN_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_COPY_ASSIGN_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple<T0 , T1 , T2>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple3<T0 , T1 , T2>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2>
        tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2)
          : base_tuple(boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ))
        {}
        template <typename T0 , typename T1 , typename T2>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple<T0 , T1 , T2>
                ))) other)
          : base_tuple(other)
        {}
        template <typename T0 , typename T1 , typename T2>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple3<T0 , T1 , T2>
                ))) other)
          : base_tuple(other)
        {}
    };
    
    template <typename Arg0 , typename Arg1 , typename Arg2>
    BOOST_FORCEINLINE tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type>
    make_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2)
    {
        return tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ));
    }
}}
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2 > struct tag_of<hpx::util::tuple3<A0, A1, A2> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2 > struct tag_of<hpx::util::tuple3<A0, A1, A2> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2 > struct access::struct_member< hpx::util::tuple3<A0, A1, A2> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2 > struct struct_member_name< hpx::util::tuple3<A0, A1, A2> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2 > struct access::struct_member< hpx::util::tuple3<A0, A1, A2> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2 > struct struct_member_name< hpx::util::tuple3<A0, A1, A2> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2 > struct access::struct_member< hpx::util::tuple3<A0, A1, A2> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2 > struct struct_member_name< hpx::util::tuple3<A0, A1, A2> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2 > struct struct_size<hpx::util::tuple3<A0, A1, A2> > : mpl::int_<3> {}; template< typename A0, typename A1, typename A2 > struct struct_is_view< hpx::util::tuple3<A0, A1, A2> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2 > struct sequence_tag<hpx::util::tuple3<A0, A1, A2> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2 > struct sequence_tag< hpx::util::tuple3<A0, A1, A2> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2 > struct tag_of<hpx::util::tuple<A0, A1, A2> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2 > struct tag_of<hpx::util::tuple<A0, A1, A2> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2 > struct access::struct_member< hpx::util::tuple<A0, A1, A2> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2 > struct struct_member_name< hpx::util::tuple<A0, A1, A2> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2 > struct access::struct_member< hpx::util::tuple<A0, A1, A2> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2 > struct struct_member_name< hpx::util::tuple<A0, A1, A2> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2 > struct access::struct_member< hpx::util::tuple<A0, A1, A2> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2 > struct struct_member_name< hpx::util::tuple<A0, A1, A2> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2 > struct struct_size<hpx::util::tuple<A0, A1, A2> > : mpl::int_<3> {}; template< typename A0, typename A1, typename A2 > struct struct_is_view< hpx::util::tuple<A0, A1, A2> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2 > struct sequence_tag<hpx::util::tuple<A0, A1, A2> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2 > struct sequence_tag< hpx::util::tuple<A0, A1, A2> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace serialization
{
    template <typename T0 , typename T1 , typename T2>
    struct is_bitwise_serializable<
            hpx::util::tuple3<T0 , T1 , T2> >
       : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple3<T0 , T1 , T2> >
    {};
    template <typename T0 , typename T1 , typename T2>
    struct is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2> >
      : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2> >
    {};
}}
namespace hpx { namespace util
{
    template <typename A0 , typename A1 , typename A2 , typename A3>
    struct tuple4
    {
        typedef A0 member_type0; A0 a0; typedef A1 member_type1; A1 a1; typedef A2 member_type2; A2 a2; typedef A3 member_type3; A3 a3;
        template <int E>
        typename detail::tuple_element<E, tuple4>::rtype
        get() BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple4>::get(*this);
        }
        template <int E>
        BOOST_CONSTEXPR
        typename detail::tuple_element<E, tuple4>::crtype
        get() const BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple4>::get(*this);
        }
        tuple4() {}
        tuple4(tuple4 const& other)
          : a0(other.a0) , a1(other.a1) , a2(other.a2) , a3(other.a3)
        {}
        tuple4(BOOST_RV_REF(tuple4) other)
          : a0(detail::move_if_no_ref<A0>::call( other.a0)) , a1(detail::move_if_no_ref<A1>::call( other.a1)) , a2(detail::move_if_no_ref<A2>::call( other.a2)) , a3(detail::move_if_no_ref<A3>::call( other.a3))
        {}
        tuple4 & operator=(BOOST_COPY_ASSIGN_REF(tuple4) other)
        {
            a0 = other.a0; a1 = other.a1; a2 = other.a2; a3 = other.a3;
            return *this;
        }
        tuple4 & operator=(BOOST_RV_REF(tuple4) other)
        {
            a0 = detail::move_if_no_ref<A0>::call( other.a0); a1 = detail::move_if_no_ref<A1>::call( other.a1); a2 = detail::move_if_no_ref<A2>::call( other.a2); a3 = detail::move_if_no_ref<A3>::call( other.a3);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3>
        tuple4 & operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple4<T0 , T1 , T2 , T3>
            ))) other)
        {
            a0 = detail::move_if_no_ref<T0>::call( other.a0); a1 = detail::move_if_no_ref<T1>::call( other.a1); a2 = detail::move_if_no_ref<T2>::call( other.a2); a3 = detail::move_if_no_ref<T3>::call( other.a3);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
        tuple4(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3)
          : a0(boost::forward<Arg0>( arg0 )) , a1(boost::forward<Arg1>( arg1 )) , a2(boost::forward<Arg2>( arg2 )) , a3(boost::forward<Arg3>( arg3 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3>
        tuple4(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple4<T0 , T1 , T2 , T3>
                ))) other)
          : a0(detail::move_if_no_ref<T0>::call( other.a0)) , a1(detail::move_if_no_ref<T1>::call( other.a1)) , a2(detail::move_if_no_ref<T2>::call( other.a2)) , a3(detail::move_if_no_ref<T3>::call( other.a3))
        {}
        typedef boost::mpl::int_<4> size_type;
        static const int size_value = 4;
    private:
        BOOST_COPYABLE_AND_MOVABLE(tuple4);
    };
    template <typename T0 , typename T1 , typename T2 , typename T3>
    struct is_tuple<tuple4<T0 , T1 , T2 , T3> >
      : boost::mpl::true_
    {};
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
    BOOST_FORCEINLINE
    tuple4<typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type>
    forward_as_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3) BOOST_NOEXCEPT
    {
        return tuple4<
                typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ));
    }
    
    template <typename A0 , typename A1 , typename A2 , typename A3>
    struct tuple<A0 , A1 , A2 , A3>
      : tuple4<A0 , A1 , A2 , A3>
    {
        typedef tuple4<A0 , A1 , A2 , A3> base_tuple;
        tuple() {}
        tuple(tuple const& other)
          : base_tuple(other)
        {}
        tuple(base_tuple const& other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(tuple) other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(base_tuple) other)
          : base_tuple(other)
        {}
        tuple& operator=(BOOST_COPY_ASSIGN_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_COPY_ASSIGN_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple<T0 , T1 , T2 , T3>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple4<T0 , T1 , T2 , T3>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
        tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3)
          : base_tuple(boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple<T0 , T1 , T2 , T3>
                ))) other)
          : base_tuple(other)
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple4<T0 , T1 , T2 , T3>
                ))) other)
          : base_tuple(other)
        {}
    };
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
    BOOST_FORCEINLINE tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type>
    make_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3)
    {
        return tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ));
    }
}}
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3 > struct tag_of<hpx::util::tuple4<A0, A1, A2, A3> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3 > struct tag_of<hpx::util::tuple4<A0, A1, A2, A3> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3 > struct access::struct_member< hpx::util::tuple4<A0, A1, A2, A3> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3 > struct struct_member_name< hpx::util::tuple4<A0, A1, A2, A3> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3 > struct access::struct_member< hpx::util::tuple4<A0, A1, A2, A3> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3 > struct struct_member_name< hpx::util::tuple4<A0, A1, A2, A3> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3 > struct access::struct_member< hpx::util::tuple4<A0, A1, A2, A3> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3 > struct struct_member_name< hpx::util::tuple4<A0, A1, A2, A3> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3 > struct access::struct_member< hpx::util::tuple4<A0, A1, A2, A3> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3 > struct struct_member_name< hpx::util::tuple4<A0, A1, A2, A3> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3 > struct struct_size<hpx::util::tuple4<A0, A1, A2, A3> > : mpl::int_<4> {}; template< typename A0, typename A1, typename A2, typename A3 > struct struct_is_view< hpx::util::tuple4<A0, A1, A2, A3> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3 > struct sequence_tag<hpx::util::tuple4<A0, A1, A2, A3> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3 > struct sequence_tag< hpx::util::tuple4<A0, A1, A2, A3> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3 > struct struct_size<hpx::util::tuple<A0, A1, A2, A3> > : mpl::int_<4> {}; template< typename A0, typename A1, typename A2, typename A3 > struct struct_is_view< hpx::util::tuple<A0, A1, A2, A3> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3 > struct sequence_tag<hpx::util::tuple<A0, A1, A2, A3> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3 > struct sequence_tag< hpx::util::tuple<A0, A1, A2, A3> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace serialization
{
    template <typename T0 , typename T1 , typename T2 , typename T3>
    struct is_bitwise_serializable<
            hpx::util::tuple4<T0 , T1 , T2 , T3> >
       : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple4<T0 , T1 , T2 , T3> >
    {};
    template <typename T0 , typename T1 , typename T2 , typename T3>
    struct is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3> >
      : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3> >
    {};
}}
namespace hpx { namespace util
{
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    struct tuple5
    {
        typedef A0 member_type0; A0 a0; typedef A1 member_type1; A1 a1; typedef A2 member_type2; A2 a2; typedef A3 member_type3; A3 a3; typedef A4 member_type4; A4 a4;
        template <int E>
        typename detail::tuple_element<E, tuple5>::rtype
        get() BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple5>::get(*this);
        }
        template <int E>
        BOOST_CONSTEXPR
        typename detail::tuple_element<E, tuple5>::crtype
        get() const BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple5>::get(*this);
        }
        tuple5() {}
        tuple5(tuple5 const& other)
          : a0(other.a0) , a1(other.a1) , a2(other.a2) , a3(other.a3) , a4(other.a4)
        {}
        tuple5(BOOST_RV_REF(tuple5) other)
          : a0(detail::move_if_no_ref<A0>::call( other.a0)) , a1(detail::move_if_no_ref<A1>::call( other.a1)) , a2(detail::move_if_no_ref<A2>::call( other.a2)) , a3(detail::move_if_no_ref<A3>::call( other.a3)) , a4(detail::move_if_no_ref<A4>::call( other.a4))
        {}
        tuple5 & operator=(BOOST_COPY_ASSIGN_REF(tuple5) other)
        {
            a0 = other.a0; a1 = other.a1; a2 = other.a2; a3 = other.a3; a4 = other.a4;
            return *this;
        }
        tuple5 & operator=(BOOST_RV_REF(tuple5) other)
        {
            a0 = detail::move_if_no_ref<A0>::call( other.a0); a1 = detail::move_if_no_ref<A1>::call( other.a1); a2 = detail::move_if_no_ref<A2>::call( other.a2); a3 = detail::move_if_no_ref<A3>::call( other.a3); a4 = detail::move_if_no_ref<A4>::call( other.a4);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
        tuple5 & operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple5<T0 , T1 , T2 , T3 , T4>
            ))) other)
        {
            a0 = detail::move_if_no_ref<T0>::call( other.a0); a1 = detail::move_if_no_ref<T1>::call( other.a1); a2 = detail::move_if_no_ref<T2>::call( other.a2); a3 = detail::move_if_no_ref<T3>::call( other.a3); a4 = detail::move_if_no_ref<T4>::call( other.a4);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
        tuple5(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4)
          : a0(boost::forward<Arg0>( arg0 )) , a1(boost::forward<Arg1>( arg1 )) , a2(boost::forward<Arg2>( arg2 )) , a3(boost::forward<Arg3>( arg3 )) , a4(boost::forward<Arg4>( arg4 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
        tuple5(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple5<T0 , T1 , T2 , T3 , T4>
                ))) other)
          : a0(detail::move_if_no_ref<T0>::call( other.a0)) , a1(detail::move_if_no_ref<T1>::call( other.a1)) , a2(detail::move_if_no_ref<T2>::call( other.a2)) , a3(detail::move_if_no_ref<T3>::call( other.a3)) , a4(detail::move_if_no_ref<T4>::call( other.a4))
        {}
        typedef boost::mpl::int_<5> size_type;
        static const int size_value = 5;
    private:
        BOOST_COPYABLE_AND_MOVABLE(tuple5);
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    struct is_tuple<tuple5<T0 , T1 , T2 , T3 , T4> >
      : boost::mpl::true_
    {};
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
    BOOST_FORCEINLINE
    tuple5<typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type>
    forward_as_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4) BOOST_NOEXCEPT
    {
        return tuple5<
                typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ));
    }
    
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    struct tuple<A0 , A1 , A2 , A3 , A4>
      : tuple5<A0 , A1 , A2 , A3 , A4>
    {
        typedef tuple5<A0 , A1 , A2 , A3 , A4> base_tuple;
        tuple() {}
        tuple(tuple const& other)
          : base_tuple(other)
        {}
        tuple(base_tuple const& other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(tuple) other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(base_tuple) other)
          : base_tuple(other)
        {}
        tuple& operator=(BOOST_COPY_ASSIGN_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_COPY_ASSIGN_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple<T0 , T1 , T2 , T3 , T4>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple5<T0 , T1 , T2 , T3 , T4>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
        tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4)
          : base_tuple(boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple<T0 , T1 , T2 , T3 , T4>
                ))) other)
          : base_tuple(other)
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple5<T0 , T1 , T2 , T3 , T4>
                ))) other)
          : base_tuple(other)
        {}
    };
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
    BOOST_FORCEINLINE tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type>
    make_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4)
    {
        return tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ));
    }
}}
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct tag_of<hpx::util::tuple5<A0, A1, A2, A3, A4> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct tag_of<hpx::util::tuple5<A0, A1, A2, A3, A4> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct access::struct_member< hpx::util::tuple5<A0, A1, A2, A3, A4> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_member_name< hpx::util::tuple5<A0, A1, A2, A3, A4> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct access::struct_member< hpx::util::tuple5<A0, A1, A2, A3, A4> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_member_name< hpx::util::tuple5<A0, A1, A2, A3, A4> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct access::struct_member< hpx::util::tuple5<A0, A1, A2, A3, A4> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_member_name< hpx::util::tuple5<A0, A1, A2, A3, A4> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct access::struct_member< hpx::util::tuple5<A0, A1, A2, A3, A4> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_member_name< hpx::util::tuple5<A0, A1, A2, A3, A4> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct access::struct_member< hpx::util::tuple5<A0, A1, A2, A3, A4> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_member_name< hpx::util::tuple5<A0, A1, A2, A3, A4> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_size<hpx::util::tuple5<A0, A1, A2, A3, A4> > : mpl::int_<5> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_is_view< hpx::util::tuple5<A0, A1, A2, A3, A4> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct sequence_tag<hpx::util::tuple5<A0, A1, A2, A3, A4> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct sequence_tag< hpx::util::tuple5<A0, A1, A2, A3, A4> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_size<hpx::util::tuple<A0, A1, A2, A3, A4> > : mpl::int_<5> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct struct_is_view< hpx::util::tuple<A0, A1, A2, A3, A4> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct sequence_tag<hpx::util::tuple<A0, A1, A2, A3, A4> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4 > struct sequence_tag< hpx::util::tuple<A0, A1, A2, A3, A4> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace serialization
{
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    struct is_bitwise_serializable<
            hpx::util::tuple5<T0 , T1 , T2 , T3 , T4> >
       : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple5<T0 , T1 , T2 , T3 , T4> >
    {};
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    struct is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4> >
      : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4> >
    {};
}}
namespace hpx { namespace util
{
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    struct tuple6
    {
        typedef A0 member_type0; A0 a0; typedef A1 member_type1; A1 a1; typedef A2 member_type2; A2 a2; typedef A3 member_type3; A3 a3; typedef A4 member_type4; A4 a4; typedef A5 member_type5; A5 a5;
        template <int E>
        typename detail::tuple_element<E, tuple6>::rtype
        get() BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple6>::get(*this);
        }
        template <int E>
        BOOST_CONSTEXPR
        typename detail::tuple_element<E, tuple6>::crtype
        get() const BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple6>::get(*this);
        }
        tuple6() {}
        tuple6(tuple6 const& other)
          : a0(other.a0) , a1(other.a1) , a2(other.a2) , a3(other.a3) , a4(other.a4) , a5(other.a5)
        {}
        tuple6(BOOST_RV_REF(tuple6) other)
          : a0(detail::move_if_no_ref<A0>::call( other.a0)) , a1(detail::move_if_no_ref<A1>::call( other.a1)) , a2(detail::move_if_no_ref<A2>::call( other.a2)) , a3(detail::move_if_no_ref<A3>::call( other.a3)) , a4(detail::move_if_no_ref<A4>::call( other.a4)) , a5(detail::move_if_no_ref<A5>::call( other.a5))
        {}
        tuple6 & operator=(BOOST_COPY_ASSIGN_REF(tuple6) other)
        {
            a0 = other.a0; a1 = other.a1; a2 = other.a2; a3 = other.a3; a4 = other.a4; a5 = other.a5;
            return *this;
        }
        tuple6 & operator=(BOOST_RV_REF(tuple6) other)
        {
            a0 = detail::move_if_no_ref<A0>::call( other.a0); a1 = detail::move_if_no_ref<A1>::call( other.a1); a2 = detail::move_if_no_ref<A2>::call( other.a2); a3 = detail::move_if_no_ref<A3>::call( other.a3); a4 = detail::move_if_no_ref<A4>::call( other.a4); a5 = detail::move_if_no_ref<A5>::call( other.a5);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
        tuple6 & operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple6<T0 , T1 , T2 , T3 , T4 , T5>
            ))) other)
        {
            a0 = detail::move_if_no_ref<T0>::call( other.a0); a1 = detail::move_if_no_ref<T1>::call( other.a1); a2 = detail::move_if_no_ref<T2>::call( other.a2); a3 = detail::move_if_no_ref<T3>::call( other.a3); a4 = detail::move_if_no_ref<T4>::call( other.a4); a5 = detail::move_if_no_ref<T5>::call( other.a5);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5>
        tuple6(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5)
          : a0(boost::forward<Arg0>( arg0 )) , a1(boost::forward<Arg1>( arg1 )) , a2(boost::forward<Arg2>( arg2 )) , a3(boost::forward<Arg3>( arg3 )) , a4(boost::forward<Arg4>( arg4 )) , a5(boost::forward<Arg5>( arg5 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
        tuple6(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple6<T0 , T1 , T2 , T3 , T4 , T5>
                ))) other)
          : a0(detail::move_if_no_ref<T0>::call( other.a0)) , a1(detail::move_if_no_ref<T1>::call( other.a1)) , a2(detail::move_if_no_ref<T2>::call( other.a2)) , a3(detail::move_if_no_ref<T3>::call( other.a3)) , a4(detail::move_if_no_ref<T4>::call( other.a4)) , a5(detail::move_if_no_ref<T5>::call( other.a5))
        {}
        typedef boost::mpl::int_<6> size_type;
        static const int size_value = 6;
    private:
        BOOST_COPYABLE_AND_MOVABLE(tuple6);
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    struct is_tuple<tuple6<T0 , T1 , T2 , T3 , T4 , T5> >
      : boost::mpl::true_
    {};
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5>
    BOOST_FORCEINLINE
    tuple6<typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type>
    forward_as_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5) BOOST_NOEXCEPT
    {
        return tuple6<
                typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ));
    }
    
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    struct tuple<A0 , A1 , A2 , A3 , A4 , A5>
      : tuple6<A0 , A1 , A2 , A3 , A4 , A5>
    {
        typedef tuple6<A0 , A1 , A2 , A3 , A4 , A5> base_tuple;
        tuple() {}
        tuple(tuple const& other)
          : base_tuple(other)
        {}
        tuple(base_tuple const& other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(tuple) other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(base_tuple) other)
          : base_tuple(other)
        {}
        tuple& operator=(BOOST_COPY_ASSIGN_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_COPY_ASSIGN_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple<T0 , T1 , T2 , T3 , T4 , T5>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple6<T0 , T1 , T2 , T3 , T4 , T5>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5>
        tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5)
          : base_tuple(boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple<T0 , T1 , T2 , T3 , T4 , T5>
                ))) other)
          : base_tuple(other)
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple6<T0 , T1 , T2 , T3 , T4 , T5>
                ))) other)
          : base_tuple(other)
        {}
    };
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5>
    BOOST_FORCEINLINE tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type>
    make_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5)
    {
        return tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ));
    }
}}
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct tag_of<hpx::util::tuple6<A0, A1, A2, A3, A4, A5> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct tag_of<hpx::util::tuple6<A0, A1, A2, A3, A4, A5> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct access::struct_member< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_member_name< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct access::struct_member< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_member_name< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct access::struct_member< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_member_name< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct access::struct_member< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_member_name< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct access::struct_member< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_member_name< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct access::struct_member< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_member_name< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_size<hpx::util::tuple6<A0, A1, A2, A3, A4, A5> > : mpl::int_<6> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_is_view< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct sequence_tag<hpx::util::tuple6<A0, A1, A2, A3, A4, A5> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct sequence_tag< hpx::util::tuple6<A0, A1, A2, A3, A4, A5> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_size<hpx::util::tuple<A0, A1, A2, A3, A4, A5> > : mpl::int_<6> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct struct_is_view< hpx::util::tuple<A0, A1, A2, A3, A4, A5> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct sequence_tag<hpx::util::tuple<A0, A1, A2, A3, A4, A5> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5 > struct sequence_tag< hpx::util::tuple<A0, A1, A2, A3, A4, A5> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace serialization
{
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    struct is_bitwise_serializable<
            hpx::util::tuple6<T0 , T1 , T2 , T3 , T4 , T5> >
       : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple6<T0 , T1 , T2 , T3 , T4 , T5> >
    {};
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    struct is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5> >
      : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5> >
    {};
}}
namespace hpx { namespace util
{
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    struct tuple7
    {
        typedef A0 member_type0; A0 a0; typedef A1 member_type1; A1 a1; typedef A2 member_type2; A2 a2; typedef A3 member_type3; A3 a3; typedef A4 member_type4; A4 a4; typedef A5 member_type5; A5 a5; typedef A6 member_type6; A6 a6;
        template <int E>
        typename detail::tuple_element<E, tuple7>::rtype
        get() BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple7>::get(*this);
        }
        template <int E>
        BOOST_CONSTEXPR
        typename detail::tuple_element<E, tuple7>::crtype
        get() const BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple7>::get(*this);
        }
        tuple7() {}
        tuple7(tuple7 const& other)
          : a0(other.a0) , a1(other.a1) , a2(other.a2) , a3(other.a3) , a4(other.a4) , a5(other.a5) , a6(other.a6)
        {}
        tuple7(BOOST_RV_REF(tuple7) other)
          : a0(detail::move_if_no_ref<A0>::call( other.a0)) , a1(detail::move_if_no_ref<A1>::call( other.a1)) , a2(detail::move_if_no_ref<A2>::call( other.a2)) , a3(detail::move_if_no_ref<A3>::call( other.a3)) , a4(detail::move_if_no_ref<A4>::call( other.a4)) , a5(detail::move_if_no_ref<A5>::call( other.a5)) , a6(detail::move_if_no_ref<A6>::call( other.a6))
        {}
        tuple7 & operator=(BOOST_COPY_ASSIGN_REF(tuple7) other)
        {
            a0 = other.a0; a1 = other.a1; a2 = other.a2; a3 = other.a3; a4 = other.a4; a5 = other.a5; a6 = other.a6;
            return *this;
        }
        tuple7 & operator=(BOOST_RV_REF(tuple7) other)
        {
            a0 = detail::move_if_no_ref<A0>::call( other.a0); a1 = detail::move_if_no_ref<A1>::call( other.a1); a2 = detail::move_if_no_ref<A2>::call( other.a2); a3 = detail::move_if_no_ref<A3>::call( other.a3); a4 = detail::move_if_no_ref<A4>::call( other.a4); a5 = detail::move_if_no_ref<A5>::call( other.a5); a6 = detail::move_if_no_ref<A6>::call( other.a6);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
        tuple7 & operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple7<T0 , T1 , T2 , T3 , T4 , T5 , T6>
            ))) other)
        {
            a0 = detail::move_if_no_ref<T0>::call( other.a0); a1 = detail::move_if_no_ref<T1>::call( other.a1); a2 = detail::move_if_no_ref<T2>::call( other.a2); a3 = detail::move_if_no_ref<T3>::call( other.a3); a4 = detail::move_if_no_ref<T4>::call( other.a4); a5 = detail::move_if_no_ref<T5>::call( other.a5); a6 = detail::move_if_no_ref<T6>::call( other.a6);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6>
        tuple7(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6)
          : a0(boost::forward<Arg0>( arg0 )) , a1(boost::forward<Arg1>( arg1 )) , a2(boost::forward<Arg2>( arg2 )) , a3(boost::forward<Arg3>( arg3 )) , a4(boost::forward<Arg4>( arg4 )) , a5(boost::forward<Arg5>( arg5 )) , a6(boost::forward<Arg6>( arg6 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
        tuple7(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple7<T0 , T1 , T2 , T3 , T4 , T5 , T6>
                ))) other)
          : a0(detail::move_if_no_ref<T0>::call( other.a0)) , a1(detail::move_if_no_ref<T1>::call( other.a1)) , a2(detail::move_if_no_ref<T2>::call( other.a2)) , a3(detail::move_if_no_ref<T3>::call( other.a3)) , a4(detail::move_if_no_ref<T4>::call( other.a4)) , a5(detail::move_if_no_ref<T5>::call( other.a5)) , a6(detail::move_if_no_ref<T6>::call( other.a6))
        {}
        typedef boost::mpl::int_<7> size_type;
        static const int size_value = 7;
    private:
        BOOST_COPYABLE_AND_MOVABLE(tuple7);
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    struct is_tuple<tuple7<T0 , T1 , T2 , T3 , T4 , T5 , T6> >
      : boost::mpl::true_
    {};
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6>
    BOOST_FORCEINLINE
    tuple7<typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type>
    forward_as_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6) BOOST_NOEXCEPT
    {
        return tuple7<
                typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ));
    }
    
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    struct tuple<A0 , A1 , A2 , A3 , A4 , A5 , A6>
      : tuple7<A0 , A1 , A2 , A3 , A4 , A5 , A6>
    {
        typedef tuple7<A0 , A1 , A2 , A3 , A4 , A5 , A6> base_tuple;
        tuple() {}
        tuple(tuple const& other)
          : base_tuple(other)
        {}
        tuple(base_tuple const& other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(tuple) other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(base_tuple) other)
          : base_tuple(other)
        {}
        tuple& operator=(BOOST_COPY_ASSIGN_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_COPY_ASSIGN_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple7<T0 , T1 , T2 , T3 , T4 , T5 , T6>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6>
        tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6)
          : base_tuple(boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6>
                ))) other)
          : base_tuple(other)
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple7<T0 , T1 , T2 , T3 , T4 , T5 , T6>
                ))) other)
          : base_tuple(other)
        {}
    };
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6>
    BOOST_FORCEINLINE tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type>
    make_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6)
    {
        return tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ));
    }
}}
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct tag_of<hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct tag_of<hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_size<hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> > : mpl::int_<7> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_is_view< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct sequence_tag<hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct sequence_tag< hpx::util::tuple7<A0, A1, A2, A3, A4, A5, A6> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_size<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> > : mpl::int_<7> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct struct_is_view< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct sequence_tag<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6 > struct sequence_tag< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace serialization
{
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    struct is_bitwise_serializable<
            hpx::util::tuple7<T0 , T1 , T2 , T3 , T4 , T5 , T6> >
       : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple7<T0 , T1 , T2 , T3 , T4 , T5 , T6> >
    {};
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    struct is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6> >
      : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6> >
    {};
}}
namespace hpx { namespace util
{
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    struct tuple8
    {
        typedef A0 member_type0; A0 a0; typedef A1 member_type1; A1 a1; typedef A2 member_type2; A2 a2; typedef A3 member_type3; A3 a3; typedef A4 member_type4; A4 a4; typedef A5 member_type5; A5 a5; typedef A6 member_type6; A6 a6; typedef A7 member_type7; A7 a7;
        template <int E>
        typename detail::tuple_element<E, tuple8>::rtype
        get() BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple8>::get(*this);
        }
        template <int E>
        BOOST_CONSTEXPR
        typename detail::tuple_element<E, tuple8>::crtype
        get() const BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple8>::get(*this);
        }
        tuple8() {}
        tuple8(tuple8 const& other)
          : a0(other.a0) , a1(other.a1) , a2(other.a2) , a3(other.a3) , a4(other.a4) , a5(other.a5) , a6(other.a6) , a7(other.a7)
        {}
        tuple8(BOOST_RV_REF(tuple8) other)
          : a0(detail::move_if_no_ref<A0>::call( other.a0)) , a1(detail::move_if_no_ref<A1>::call( other.a1)) , a2(detail::move_if_no_ref<A2>::call( other.a2)) , a3(detail::move_if_no_ref<A3>::call( other.a3)) , a4(detail::move_if_no_ref<A4>::call( other.a4)) , a5(detail::move_if_no_ref<A5>::call( other.a5)) , a6(detail::move_if_no_ref<A6>::call( other.a6)) , a7(detail::move_if_no_ref<A7>::call( other.a7))
        {}
        tuple8 & operator=(BOOST_COPY_ASSIGN_REF(tuple8) other)
        {
            a0 = other.a0; a1 = other.a1; a2 = other.a2; a3 = other.a3; a4 = other.a4; a5 = other.a5; a6 = other.a6; a7 = other.a7;
            return *this;
        }
        tuple8 & operator=(BOOST_RV_REF(tuple8) other)
        {
            a0 = detail::move_if_no_ref<A0>::call( other.a0); a1 = detail::move_if_no_ref<A1>::call( other.a1); a2 = detail::move_if_no_ref<A2>::call( other.a2); a3 = detail::move_if_no_ref<A3>::call( other.a3); a4 = detail::move_if_no_ref<A4>::call( other.a4); a5 = detail::move_if_no_ref<A5>::call( other.a5); a6 = detail::move_if_no_ref<A6>::call( other.a6); a7 = detail::move_if_no_ref<A7>::call( other.a7);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
        tuple8 & operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple8<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>
            ))) other)
        {
            a0 = detail::move_if_no_ref<T0>::call( other.a0); a1 = detail::move_if_no_ref<T1>::call( other.a1); a2 = detail::move_if_no_ref<T2>::call( other.a2); a3 = detail::move_if_no_ref<T3>::call( other.a3); a4 = detail::move_if_no_ref<T4>::call( other.a4); a5 = detail::move_if_no_ref<T5>::call( other.a5); a6 = detail::move_if_no_ref<T6>::call( other.a6); a7 = detail::move_if_no_ref<T7>::call( other.a7);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7>
        tuple8(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7)
          : a0(boost::forward<Arg0>( arg0 )) , a1(boost::forward<Arg1>( arg1 )) , a2(boost::forward<Arg2>( arg2 )) , a3(boost::forward<Arg3>( arg3 )) , a4(boost::forward<Arg4>( arg4 )) , a5(boost::forward<Arg5>( arg5 )) , a6(boost::forward<Arg6>( arg6 )) , a7(boost::forward<Arg7>( arg7 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
        tuple8(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple8<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>
                ))) other)
          : a0(detail::move_if_no_ref<T0>::call( other.a0)) , a1(detail::move_if_no_ref<T1>::call( other.a1)) , a2(detail::move_if_no_ref<T2>::call( other.a2)) , a3(detail::move_if_no_ref<T3>::call( other.a3)) , a4(detail::move_if_no_ref<T4>::call( other.a4)) , a5(detail::move_if_no_ref<T5>::call( other.a5)) , a6(detail::move_if_no_ref<T6>::call( other.a6)) , a7(detail::move_if_no_ref<T7>::call( other.a7))
        {}
        typedef boost::mpl::int_<8> size_type;
        static const int size_value = 8;
    private:
        BOOST_COPYABLE_AND_MOVABLE(tuple8);
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    struct is_tuple<tuple8<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> >
      : boost::mpl::true_
    {};
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7>
    BOOST_FORCEINLINE
    tuple8<typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type , typename detail::env_value_type<Arg7>::type>
    forward_as_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7) BOOST_NOEXCEPT
    {
        return tuple8<
                typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type , typename detail::env_value_type<Arg7>::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ));
    }
    
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    struct tuple<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7>
      : tuple8<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7>
    {
        typedef tuple8<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7> base_tuple;
        tuple() {}
        tuple(tuple const& other)
          : base_tuple(other)
        {}
        tuple(base_tuple const& other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(tuple) other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(base_tuple) other)
          : base_tuple(other)
        {}
        tuple& operator=(BOOST_COPY_ASSIGN_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_COPY_ASSIGN_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple8<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7>
        tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7)
          : base_tuple(boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>
                ))) other)
          : base_tuple(other)
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple8<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>
                ))) other)
          : base_tuple(other)
        {}
    };
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7>
    BOOST_FORCEINLINE tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg7>::type >::type>
    make_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7)
    {
        return tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg7>::type >::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ));
    }
}}
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct tag_of<hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct tag_of<hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 7 > { typedef A7 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a7; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> , 7 > { typedef char const* type; static type call() { return "a7"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_size<hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> > : mpl::int_<8> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_is_view< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct sequence_tag<hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct sequence_tag< hpx::util::tuple8<A0, A1, A2, A3, A4, A5, A6, A7> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 7 > { typedef A7 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a7; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> , 7 > { typedef char const* type; static type call() { return "a7"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_size<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> > : mpl::int_<8> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct struct_is_view< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct sequence_tag<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7 > struct sequence_tag< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace serialization
{
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    struct is_bitwise_serializable<
            hpx::util::tuple8<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> >
       : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple8<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> >
    {};
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    struct is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> >
      : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> >
    {};
}}
namespace hpx { namespace util
{
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8>
    struct tuple9
    {
        typedef A0 member_type0; A0 a0; typedef A1 member_type1; A1 a1; typedef A2 member_type2; A2 a2; typedef A3 member_type3; A3 a3; typedef A4 member_type4; A4 a4; typedef A5 member_type5; A5 a5; typedef A6 member_type6; A6 a6; typedef A7 member_type7; A7 a7; typedef A8 member_type8; A8 a8;
        template <int E>
        typename detail::tuple_element<E, tuple9>::rtype
        get() BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple9>::get(*this);
        }
        template <int E>
        BOOST_CONSTEXPR
        typename detail::tuple_element<E, tuple9>::crtype
        get() const BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple9>::get(*this);
        }
        tuple9() {}
        tuple9(tuple9 const& other)
          : a0(other.a0) , a1(other.a1) , a2(other.a2) , a3(other.a3) , a4(other.a4) , a5(other.a5) , a6(other.a6) , a7(other.a7) , a8(other.a8)
        {}
        tuple9(BOOST_RV_REF(tuple9) other)
          : a0(detail::move_if_no_ref<A0>::call( other.a0)) , a1(detail::move_if_no_ref<A1>::call( other.a1)) , a2(detail::move_if_no_ref<A2>::call( other.a2)) , a3(detail::move_if_no_ref<A3>::call( other.a3)) , a4(detail::move_if_no_ref<A4>::call( other.a4)) , a5(detail::move_if_no_ref<A5>::call( other.a5)) , a6(detail::move_if_no_ref<A6>::call( other.a6)) , a7(detail::move_if_no_ref<A7>::call( other.a7)) , a8(detail::move_if_no_ref<A8>::call( other.a8))
        {}
        tuple9 & operator=(BOOST_COPY_ASSIGN_REF(tuple9) other)
        {
            a0 = other.a0; a1 = other.a1; a2 = other.a2; a3 = other.a3; a4 = other.a4; a5 = other.a5; a6 = other.a6; a7 = other.a7; a8 = other.a8;
            return *this;
        }
        tuple9 & operator=(BOOST_RV_REF(tuple9) other)
        {
            a0 = detail::move_if_no_ref<A0>::call( other.a0); a1 = detail::move_if_no_ref<A1>::call( other.a1); a2 = detail::move_if_no_ref<A2>::call( other.a2); a3 = detail::move_if_no_ref<A3>::call( other.a3); a4 = detail::move_if_no_ref<A4>::call( other.a4); a5 = detail::move_if_no_ref<A5>::call( other.a5); a6 = detail::move_if_no_ref<A6>::call( other.a6); a7 = detail::move_if_no_ref<A7>::call( other.a7); a8 = detail::move_if_no_ref<A8>::call( other.a8);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
        tuple9 & operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple9<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8>
            ))) other)
        {
            a0 = detail::move_if_no_ref<T0>::call( other.a0); a1 = detail::move_if_no_ref<T1>::call( other.a1); a2 = detail::move_if_no_ref<T2>::call( other.a2); a3 = detail::move_if_no_ref<T3>::call( other.a3); a4 = detail::move_if_no_ref<T4>::call( other.a4); a5 = detail::move_if_no_ref<T5>::call( other.a5); a6 = detail::move_if_no_ref<T6>::call( other.a6); a7 = detail::move_if_no_ref<T7>::call( other.a7); a8 = detail::move_if_no_ref<T8>::call( other.a8);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8>
        tuple9(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8)
          : a0(boost::forward<Arg0>( arg0 )) , a1(boost::forward<Arg1>( arg1 )) , a2(boost::forward<Arg2>( arg2 )) , a3(boost::forward<Arg3>( arg3 )) , a4(boost::forward<Arg4>( arg4 )) , a5(boost::forward<Arg5>( arg5 )) , a6(boost::forward<Arg6>( arg6 )) , a7(boost::forward<Arg7>( arg7 )) , a8(boost::forward<Arg8>( arg8 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
        tuple9(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple9<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8>
                ))) other)
          : a0(detail::move_if_no_ref<T0>::call( other.a0)) , a1(detail::move_if_no_ref<T1>::call( other.a1)) , a2(detail::move_if_no_ref<T2>::call( other.a2)) , a3(detail::move_if_no_ref<T3>::call( other.a3)) , a4(detail::move_if_no_ref<T4>::call( other.a4)) , a5(detail::move_if_no_ref<T5>::call( other.a5)) , a6(detail::move_if_no_ref<T6>::call( other.a6)) , a7(detail::move_if_no_ref<T7>::call( other.a7)) , a8(detail::move_if_no_ref<T8>::call( other.a8))
        {}
        typedef boost::mpl::int_<9> size_type;
        static const int size_value = 9;
    private:
        BOOST_COPYABLE_AND_MOVABLE(tuple9);
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    struct is_tuple<tuple9<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8> >
      : boost::mpl::true_
    {};
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8>
    BOOST_FORCEINLINE
    tuple9<typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type , typename detail::env_value_type<Arg7>::type , typename detail::env_value_type<Arg8>::type>
    forward_as_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8) BOOST_NOEXCEPT
    {
        return tuple9<
                typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type , typename detail::env_value_type<Arg7>::type , typename detail::env_value_type<Arg8>::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ));
    }
    
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8>
    struct tuple<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8>
      : tuple9<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8>
    {
        typedef tuple9<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8> base_tuple;
        tuple() {}
        tuple(tuple const& other)
          : base_tuple(other)
        {}
        tuple(base_tuple const& other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(tuple) other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(base_tuple) other)
          : base_tuple(other)
        {}
        tuple& operator=(BOOST_COPY_ASSIGN_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_COPY_ASSIGN_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple9<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8>
        tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8)
          : base_tuple(boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8>
                ))) other)
          : base_tuple(other)
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple9<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8>
                ))) other)
          : base_tuple(other)
        {}
    };
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8>
    BOOST_FORCEINLINE tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg7>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg8>::type >::type>
    make_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8)
    {
        return tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg7>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg8>::type >::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ));
    }
}}
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct tag_of<hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct tag_of<hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 7 > { typedef A7 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a7; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 7 > { typedef char const* type; static type call() { return "a7"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 8 > { typedef A8 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a8; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 8 > { typedef char const* type; static type call() { return "a8"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_size<hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> > : mpl::int_<9> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_is_view< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct sequence_tag<hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct sequence_tag< hpx::util::tuple9<A0, A1, A2, A3, A4, A5, A6, A7, A8> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 7 > { typedef A7 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a7; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 7 > { typedef char const* type; static type call() { return "a7"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 8 > { typedef A8 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a8; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> , 8 > { typedef char const* type; static type call() { return "a8"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_size<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> > : mpl::int_<9> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct struct_is_view< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct sequence_tag<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8 > struct sequence_tag< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace serialization
{
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    struct is_bitwise_serializable<
            hpx::util::tuple9<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8> >
       : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple9<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8> >
    {};
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    struct is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8> >
      : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8> >
    {};
}}
namespace hpx { namespace util
{
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9>
    struct tuple10
    {
        typedef A0 member_type0; A0 a0; typedef A1 member_type1; A1 a1; typedef A2 member_type2; A2 a2; typedef A3 member_type3; A3 a3; typedef A4 member_type4; A4 a4; typedef A5 member_type5; A5 a5; typedef A6 member_type6; A6 a6; typedef A7 member_type7; A7 a7; typedef A8 member_type8; A8 a8; typedef A9 member_type9; A9 a9;
        template <int E>
        typename detail::tuple_element<E, tuple10>::rtype
        get() BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple10>::get(*this);
        }
        template <int E>
        BOOST_CONSTEXPR
        typename detail::tuple_element<E, tuple10>::crtype
        get() const BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple10>::get(*this);
        }
        tuple10() {}
        tuple10(tuple10 const& other)
          : a0(other.a0) , a1(other.a1) , a2(other.a2) , a3(other.a3) , a4(other.a4) , a5(other.a5) , a6(other.a6) , a7(other.a7) , a8(other.a8) , a9(other.a9)
        {}
        tuple10(BOOST_RV_REF(tuple10) other)
          : a0(detail::move_if_no_ref<A0>::call( other.a0)) , a1(detail::move_if_no_ref<A1>::call( other.a1)) , a2(detail::move_if_no_ref<A2>::call( other.a2)) , a3(detail::move_if_no_ref<A3>::call( other.a3)) , a4(detail::move_if_no_ref<A4>::call( other.a4)) , a5(detail::move_if_no_ref<A5>::call( other.a5)) , a6(detail::move_if_no_ref<A6>::call( other.a6)) , a7(detail::move_if_no_ref<A7>::call( other.a7)) , a8(detail::move_if_no_ref<A8>::call( other.a8)) , a9(detail::move_if_no_ref<A9>::call( other.a9))
        {}
        tuple10 & operator=(BOOST_COPY_ASSIGN_REF(tuple10) other)
        {
            a0 = other.a0; a1 = other.a1; a2 = other.a2; a3 = other.a3; a4 = other.a4; a5 = other.a5; a6 = other.a6; a7 = other.a7; a8 = other.a8; a9 = other.a9;
            return *this;
        }
        tuple10 & operator=(BOOST_RV_REF(tuple10) other)
        {
            a0 = detail::move_if_no_ref<A0>::call( other.a0); a1 = detail::move_if_no_ref<A1>::call( other.a1); a2 = detail::move_if_no_ref<A2>::call( other.a2); a3 = detail::move_if_no_ref<A3>::call( other.a3); a4 = detail::move_if_no_ref<A4>::call( other.a4); a5 = detail::move_if_no_ref<A5>::call( other.a5); a6 = detail::move_if_no_ref<A6>::call( other.a6); a7 = detail::move_if_no_ref<A7>::call( other.a7); a8 = detail::move_if_no_ref<A8>::call( other.a8); a9 = detail::move_if_no_ref<A9>::call( other.a9);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
        tuple10 & operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple10<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9>
            ))) other)
        {
            a0 = detail::move_if_no_ref<T0>::call( other.a0); a1 = detail::move_if_no_ref<T1>::call( other.a1); a2 = detail::move_if_no_ref<T2>::call( other.a2); a3 = detail::move_if_no_ref<T3>::call( other.a3); a4 = detail::move_if_no_ref<T4>::call( other.a4); a5 = detail::move_if_no_ref<T5>::call( other.a5); a6 = detail::move_if_no_ref<T6>::call( other.a6); a7 = detail::move_if_no_ref<T7>::call( other.a7); a8 = detail::move_if_no_ref<T8>::call( other.a8); a9 = detail::move_if_no_ref<T9>::call( other.a9);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9>
        tuple10(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9)
          : a0(boost::forward<Arg0>( arg0 )) , a1(boost::forward<Arg1>( arg1 )) , a2(boost::forward<Arg2>( arg2 )) , a3(boost::forward<Arg3>( arg3 )) , a4(boost::forward<Arg4>( arg4 )) , a5(boost::forward<Arg5>( arg5 )) , a6(boost::forward<Arg6>( arg6 )) , a7(boost::forward<Arg7>( arg7 )) , a8(boost::forward<Arg8>( arg8 )) , a9(boost::forward<Arg9>( arg9 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
        tuple10(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple10<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9>
                ))) other)
          : a0(detail::move_if_no_ref<T0>::call( other.a0)) , a1(detail::move_if_no_ref<T1>::call( other.a1)) , a2(detail::move_if_no_ref<T2>::call( other.a2)) , a3(detail::move_if_no_ref<T3>::call( other.a3)) , a4(detail::move_if_no_ref<T4>::call( other.a4)) , a5(detail::move_if_no_ref<T5>::call( other.a5)) , a6(detail::move_if_no_ref<T6>::call( other.a6)) , a7(detail::move_if_no_ref<T7>::call( other.a7)) , a8(detail::move_if_no_ref<T8>::call( other.a8)) , a9(detail::move_if_no_ref<T9>::call( other.a9))
        {}
        typedef boost::mpl::int_<10> size_type;
        static const int size_value = 10;
    private:
        BOOST_COPYABLE_AND_MOVABLE(tuple10);
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    struct is_tuple<tuple10<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9> >
      : boost::mpl::true_
    {};
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9>
    BOOST_FORCEINLINE
    tuple10<typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type , typename detail::env_value_type<Arg7>::type , typename detail::env_value_type<Arg8>::type , typename detail::env_value_type<Arg9>::type>
    forward_as_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9) BOOST_NOEXCEPT
    {
        return tuple10<
                typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type , typename detail::env_value_type<Arg7>::type , typename detail::env_value_type<Arg8>::type , typename detail::env_value_type<Arg9>::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ) , boost::forward<Arg9>( arg9 ));
    }
    
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9>
    struct tuple<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9>
      : tuple10<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9>
    {
        typedef tuple10<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9> base_tuple;
        tuple() {}
        tuple(tuple const& other)
          : base_tuple(other)
        {}
        tuple(base_tuple const& other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(tuple) other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(base_tuple) other)
          : base_tuple(other)
        {}
        tuple& operator=(BOOST_COPY_ASSIGN_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_COPY_ASSIGN_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple10<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9>
        tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9)
          : base_tuple(boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ) , boost::forward<Arg9>( arg9 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9>
                ))) other)
          : base_tuple(other)
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple10<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9>
                ))) other)
          : base_tuple(other)
        {}
    };
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9>
    BOOST_FORCEINLINE tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg7>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg8>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg9>::type >::type>
    make_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9)
    {
        return tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg7>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg8>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg9>::type >::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ) , boost::forward<Arg9>( arg9 ));
    }
}}
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct tag_of<hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct tag_of<hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 7 > { typedef A7 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a7; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 7 > { typedef char const* type; static type call() { return "a7"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 8 > { typedef A8 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a8; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 8 > { typedef char const* type; static type call() { return "a8"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 9 > { typedef A9 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a9; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 9 > { typedef char const* type; static type call() { return "a9"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_size<hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> > : mpl::int_<10> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_is_view< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct sequence_tag<hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct sequence_tag< hpx::util::tuple10<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 7 > { typedef A7 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a7; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 7 > { typedef char const* type; static type call() { return "a7"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 8 > { typedef A8 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a8; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 8 > { typedef char const* type; static type call() { return "a8"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 9 > { typedef A9 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a9; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> , 9 > { typedef char const* type; static type call() { return "a9"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_size<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> > : mpl::int_<10> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct struct_is_view< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct sequence_tag<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9 > struct sequence_tag< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace serialization
{
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    struct is_bitwise_serializable<
            hpx::util::tuple10<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9> >
       : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple10<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9> >
    {};
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    struct is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9> >
      : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9> >
    {};
}}
namespace hpx { namespace util
{
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10>
    struct tuple11
    {
        typedef A0 member_type0; A0 a0; typedef A1 member_type1; A1 a1; typedef A2 member_type2; A2 a2; typedef A3 member_type3; A3 a3; typedef A4 member_type4; A4 a4; typedef A5 member_type5; A5 a5; typedef A6 member_type6; A6 a6; typedef A7 member_type7; A7 a7; typedef A8 member_type8; A8 a8; typedef A9 member_type9; A9 a9; typedef A10 member_type10; A10 a10;
        template <int E>
        typename detail::tuple_element<E, tuple11>::rtype
        get() BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple11>::get(*this);
        }
        template <int E>
        BOOST_CONSTEXPR
        typename detail::tuple_element<E, tuple11>::crtype
        get() const BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple11>::get(*this);
        }
        tuple11() {}
        tuple11(tuple11 const& other)
          : a0(other.a0) , a1(other.a1) , a2(other.a2) , a3(other.a3) , a4(other.a4) , a5(other.a5) , a6(other.a6) , a7(other.a7) , a8(other.a8) , a9(other.a9) , a10(other.a10)
        {}
        tuple11(BOOST_RV_REF(tuple11) other)
          : a0(detail::move_if_no_ref<A0>::call( other.a0)) , a1(detail::move_if_no_ref<A1>::call( other.a1)) , a2(detail::move_if_no_ref<A2>::call( other.a2)) , a3(detail::move_if_no_ref<A3>::call( other.a3)) , a4(detail::move_if_no_ref<A4>::call( other.a4)) , a5(detail::move_if_no_ref<A5>::call( other.a5)) , a6(detail::move_if_no_ref<A6>::call( other.a6)) , a7(detail::move_if_no_ref<A7>::call( other.a7)) , a8(detail::move_if_no_ref<A8>::call( other.a8)) , a9(detail::move_if_no_ref<A9>::call( other.a9)) , a10(detail::move_if_no_ref<A10>::call( other.a10))
        {}
        tuple11 & operator=(BOOST_COPY_ASSIGN_REF(tuple11) other)
        {
            a0 = other.a0; a1 = other.a1; a2 = other.a2; a3 = other.a3; a4 = other.a4; a5 = other.a5; a6 = other.a6; a7 = other.a7; a8 = other.a8; a9 = other.a9; a10 = other.a10;
            return *this;
        }
        tuple11 & operator=(BOOST_RV_REF(tuple11) other)
        {
            a0 = detail::move_if_no_ref<A0>::call( other.a0); a1 = detail::move_if_no_ref<A1>::call( other.a1); a2 = detail::move_if_no_ref<A2>::call( other.a2); a3 = detail::move_if_no_ref<A3>::call( other.a3); a4 = detail::move_if_no_ref<A4>::call( other.a4); a5 = detail::move_if_no_ref<A5>::call( other.a5); a6 = detail::move_if_no_ref<A6>::call( other.a6); a7 = detail::move_if_no_ref<A7>::call( other.a7); a8 = detail::move_if_no_ref<A8>::call( other.a8); a9 = detail::move_if_no_ref<A9>::call( other.a9); a10 = detail::move_if_no_ref<A10>::call( other.a10);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
        tuple11 & operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple11<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10>
            ))) other)
        {
            a0 = detail::move_if_no_ref<T0>::call( other.a0); a1 = detail::move_if_no_ref<T1>::call( other.a1); a2 = detail::move_if_no_ref<T2>::call( other.a2); a3 = detail::move_if_no_ref<T3>::call( other.a3); a4 = detail::move_if_no_ref<T4>::call( other.a4); a5 = detail::move_if_no_ref<T5>::call( other.a5); a6 = detail::move_if_no_ref<T6>::call( other.a6); a7 = detail::move_if_no_ref<T7>::call( other.a7); a8 = detail::move_if_no_ref<T8>::call( other.a8); a9 = detail::move_if_no_ref<T9>::call( other.a9); a10 = detail::move_if_no_ref<T10>::call( other.a10);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10>
        tuple11(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10)
          : a0(boost::forward<Arg0>( arg0 )) , a1(boost::forward<Arg1>( arg1 )) , a2(boost::forward<Arg2>( arg2 )) , a3(boost::forward<Arg3>( arg3 )) , a4(boost::forward<Arg4>( arg4 )) , a5(boost::forward<Arg5>( arg5 )) , a6(boost::forward<Arg6>( arg6 )) , a7(boost::forward<Arg7>( arg7 )) , a8(boost::forward<Arg8>( arg8 )) , a9(boost::forward<Arg9>( arg9 )) , a10(boost::forward<Arg10>( arg10 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
        tuple11(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple11<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10>
                ))) other)
          : a0(detail::move_if_no_ref<T0>::call( other.a0)) , a1(detail::move_if_no_ref<T1>::call( other.a1)) , a2(detail::move_if_no_ref<T2>::call( other.a2)) , a3(detail::move_if_no_ref<T3>::call( other.a3)) , a4(detail::move_if_no_ref<T4>::call( other.a4)) , a5(detail::move_if_no_ref<T5>::call( other.a5)) , a6(detail::move_if_no_ref<T6>::call( other.a6)) , a7(detail::move_if_no_ref<T7>::call( other.a7)) , a8(detail::move_if_no_ref<T8>::call( other.a8)) , a9(detail::move_if_no_ref<T9>::call( other.a9)) , a10(detail::move_if_no_ref<T10>::call( other.a10))
        {}
        typedef boost::mpl::int_<11> size_type;
        static const int size_value = 11;
    private:
        BOOST_COPYABLE_AND_MOVABLE(tuple11);
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
    struct is_tuple<tuple11<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10> >
      : boost::mpl::true_
    {};
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10>
    BOOST_FORCEINLINE
    tuple11<typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type , typename detail::env_value_type<Arg7>::type , typename detail::env_value_type<Arg8>::type , typename detail::env_value_type<Arg9>::type , typename detail::env_value_type<Arg10>::type>
    forward_as_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10) BOOST_NOEXCEPT
    {
        return tuple11<
                typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type , typename detail::env_value_type<Arg7>::type , typename detail::env_value_type<Arg8>::type , typename detail::env_value_type<Arg9>::type , typename detail::env_value_type<Arg10>::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ) , boost::forward<Arg9>( arg9 ) , boost::forward<Arg10>( arg10 ));
    }
    
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10>
    struct tuple<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10>
      : tuple11<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10>
    {
        typedef tuple11<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10> base_tuple;
        tuple() {}
        tuple(tuple const& other)
          : base_tuple(other)
        {}
        tuple(base_tuple const& other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(tuple) other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(base_tuple) other)
          : base_tuple(other)
        {}
        tuple& operator=(BOOST_COPY_ASSIGN_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_COPY_ASSIGN_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple11<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10>
        tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10)
          : base_tuple(boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ) , boost::forward<Arg9>( arg9 ) , boost::forward<Arg10>( arg10 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10>
                ))) other)
          : base_tuple(other)
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple11<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10>
                ))) other)
          : base_tuple(other)
        {}
    };
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10>
    BOOST_FORCEINLINE tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg7>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg8>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg9>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg10>::type >::type>
    make_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10)
    {
        return tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg7>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg8>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg9>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg10>::type >::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ) , boost::forward<Arg9>( arg9 ) , boost::forward<Arg10>( arg10 ));
    }
}}
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct tag_of<hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct tag_of<hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 7 > { typedef A7 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a7; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 7 > { typedef char const* type; static type call() { return "a7"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 8 > { typedef A8 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a8; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 8 > { typedef char const* type; static type call() { return "a8"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 9 > { typedef A9 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a9; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 9 > { typedef char const* type; static type call() { return "a9"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 10 > { typedef A10 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a10; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 10 > { typedef char const* type; static type call() { return "a10"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_size<hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> > : mpl::int_<11> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_is_view< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct sequence_tag<hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct sequence_tag< hpx::util::tuple11<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 7 > { typedef A7 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a7; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 7 > { typedef char const* type; static type call() { return "a7"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 8 > { typedef A8 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a8; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 8 > { typedef char const* type; static type call() { return "a8"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 9 > { typedef A9 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a9; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 9 > { typedef char const* type; static type call() { return "a9"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 10 > { typedef A10 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a10; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> , 10 > { typedef char const* type; static type call() { return "a10"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_size<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> > : mpl::int_<11> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct struct_is_view< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct sequence_tag<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10 > struct sequence_tag< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace serialization
{
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
    struct is_bitwise_serializable<
            hpx::util::tuple11<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10> >
       : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple11<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10> >
    {};
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
    struct is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10> >
      : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10> >
    {};
}}
namespace hpx { namespace util
{
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11>
    struct tuple12
    {
        typedef A0 member_type0; A0 a0; typedef A1 member_type1; A1 a1; typedef A2 member_type2; A2 a2; typedef A3 member_type3; A3 a3; typedef A4 member_type4; A4 a4; typedef A5 member_type5; A5 a5; typedef A6 member_type6; A6 a6; typedef A7 member_type7; A7 a7; typedef A8 member_type8; A8 a8; typedef A9 member_type9; A9 a9; typedef A10 member_type10; A10 a10; typedef A11 member_type11; A11 a11;
        template <int E>
        typename detail::tuple_element<E, tuple12>::rtype
        get() BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple12>::get(*this);
        }
        template <int E>
        BOOST_CONSTEXPR
        typename detail::tuple_element<E, tuple12>::crtype
        get() const BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple12>::get(*this);
        }
        tuple12() {}
        tuple12(tuple12 const& other)
          : a0(other.a0) , a1(other.a1) , a2(other.a2) , a3(other.a3) , a4(other.a4) , a5(other.a5) , a6(other.a6) , a7(other.a7) , a8(other.a8) , a9(other.a9) , a10(other.a10) , a11(other.a11)
        {}
        tuple12(BOOST_RV_REF(tuple12) other)
          : a0(detail::move_if_no_ref<A0>::call( other.a0)) , a1(detail::move_if_no_ref<A1>::call( other.a1)) , a2(detail::move_if_no_ref<A2>::call( other.a2)) , a3(detail::move_if_no_ref<A3>::call( other.a3)) , a4(detail::move_if_no_ref<A4>::call( other.a4)) , a5(detail::move_if_no_ref<A5>::call( other.a5)) , a6(detail::move_if_no_ref<A6>::call( other.a6)) , a7(detail::move_if_no_ref<A7>::call( other.a7)) , a8(detail::move_if_no_ref<A8>::call( other.a8)) , a9(detail::move_if_no_ref<A9>::call( other.a9)) , a10(detail::move_if_no_ref<A10>::call( other.a10)) , a11(detail::move_if_no_ref<A11>::call( other.a11))
        {}
        tuple12 & operator=(BOOST_COPY_ASSIGN_REF(tuple12) other)
        {
            a0 = other.a0; a1 = other.a1; a2 = other.a2; a3 = other.a3; a4 = other.a4; a5 = other.a5; a6 = other.a6; a7 = other.a7; a8 = other.a8; a9 = other.a9; a10 = other.a10; a11 = other.a11;
            return *this;
        }
        tuple12 & operator=(BOOST_RV_REF(tuple12) other)
        {
            a0 = detail::move_if_no_ref<A0>::call( other.a0); a1 = detail::move_if_no_ref<A1>::call( other.a1); a2 = detail::move_if_no_ref<A2>::call( other.a2); a3 = detail::move_if_no_ref<A3>::call( other.a3); a4 = detail::move_if_no_ref<A4>::call( other.a4); a5 = detail::move_if_no_ref<A5>::call( other.a5); a6 = detail::move_if_no_ref<A6>::call( other.a6); a7 = detail::move_if_no_ref<A7>::call( other.a7); a8 = detail::move_if_no_ref<A8>::call( other.a8); a9 = detail::move_if_no_ref<A9>::call( other.a9); a10 = detail::move_if_no_ref<A10>::call( other.a10); a11 = detail::move_if_no_ref<A11>::call( other.a11);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
        tuple12 & operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple12<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11>
            ))) other)
        {
            a0 = detail::move_if_no_ref<T0>::call( other.a0); a1 = detail::move_if_no_ref<T1>::call( other.a1); a2 = detail::move_if_no_ref<T2>::call( other.a2); a3 = detail::move_if_no_ref<T3>::call( other.a3); a4 = detail::move_if_no_ref<T4>::call( other.a4); a5 = detail::move_if_no_ref<T5>::call( other.a5); a6 = detail::move_if_no_ref<T6>::call( other.a6); a7 = detail::move_if_no_ref<T7>::call( other.a7); a8 = detail::move_if_no_ref<T8>::call( other.a8); a9 = detail::move_if_no_ref<T9>::call( other.a9); a10 = detail::move_if_no_ref<T10>::call( other.a10); a11 = detail::move_if_no_ref<T11>::call( other.a11);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11>
        tuple12(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11)
          : a0(boost::forward<Arg0>( arg0 )) , a1(boost::forward<Arg1>( arg1 )) , a2(boost::forward<Arg2>( arg2 )) , a3(boost::forward<Arg3>( arg3 )) , a4(boost::forward<Arg4>( arg4 )) , a5(boost::forward<Arg5>( arg5 )) , a6(boost::forward<Arg6>( arg6 )) , a7(boost::forward<Arg7>( arg7 )) , a8(boost::forward<Arg8>( arg8 )) , a9(boost::forward<Arg9>( arg9 )) , a10(boost::forward<Arg10>( arg10 )) , a11(boost::forward<Arg11>( arg11 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
        tuple12(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple12<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11>
                ))) other)
          : a0(detail::move_if_no_ref<T0>::call( other.a0)) , a1(detail::move_if_no_ref<T1>::call( other.a1)) , a2(detail::move_if_no_ref<T2>::call( other.a2)) , a3(detail::move_if_no_ref<T3>::call( other.a3)) , a4(detail::move_if_no_ref<T4>::call( other.a4)) , a5(detail::move_if_no_ref<T5>::call( other.a5)) , a6(detail::move_if_no_ref<T6>::call( other.a6)) , a7(detail::move_if_no_ref<T7>::call( other.a7)) , a8(detail::move_if_no_ref<T8>::call( other.a8)) , a9(detail::move_if_no_ref<T9>::call( other.a9)) , a10(detail::move_if_no_ref<T10>::call( other.a10)) , a11(detail::move_if_no_ref<T11>::call( other.a11))
        {}
        typedef boost::mpl::int_<12> size_type;
        static const int size_value = 12;
    private:
        BOOST_COPYABLE_AND_MOVABLE(tuple12);
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
    struct is_tuple<tuple12<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11> >
      : boost::mpl::true_
    {};
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11>
    BOOST_FORCEINLINE
    tuple12<typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type , typename detail::env_value_type<Arg7>::type , typename detail::env_value_type<Arg8>::type , typename detail::env_value_type<Arg9>::type , typename detail::env_value_type<Arg10>::type , typename detail::env_value_type<Arg11>::type>
    forward_as_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11) BOOST_NOEXCEPT
    {
        return tuple12<
                typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type , typename detail::env_value_type<Arg7>::type , typename detail::env_value_type<Arg8>::type , typename detail::env_value_type<Arg9>::type , typename detail::env_value_type<Arg10>::type , typename detail::env_value_type<Arg11>::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ) , boost::forward<Arg9>( arg9 ) , boost::forward<Arg10>( arg10 ) , boost::forward<Arg11>( arg11 ));
    }
    
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11>
    struct tuple<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11>
      : tuple12<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11>
    {
        typedef tuple12<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11> base_tuple;
        tuple() {}
        tuple(tuple const& other)
          : base_tuple(other)
        {}
        tuple(base_tuple const& other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(tuple) other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(base_tuple) other)
          : base_tuple(other)
        {}
        tuple& operator=(BOOST_COPY_ASSIGN_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_COPY_ASSIGN_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple12<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11>
        tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11)
          : base_tuple(boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ) , boost::forward<Arg9>( arg9 ) , boost::forward<Arg10>( arg10 ) , boost::forward<Arg11>( arg11 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11>
                ))) other)
          : base_tuple(other)
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple12<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11>
                ))) other)
          : base_tuple(other)
        {}
    };
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11>
    BOOST_FORCEINLINE tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg7>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg8>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg9>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg10>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg11>::type >::type>
    make_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11)
    {
        return tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg7>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg8>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg9>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg10>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg11>::type >::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ) , boost::forward<Arg9>( arg9 ) , boost::forward<Arg10>( arg10 ) , boost::forward<Arg11>( arg11 ));
    }
}}
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct tag_of<hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct tag_of<hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 7 > { typedef A7 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a7; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 7 > { typedef char const* type; static type call() { return "a7"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 8 > { typedef A8 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a8; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 8 > { typedef char const* type; static type call() { return "a8"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 9 > { typedef A9 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a9; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 9 > { typedef char const* type; static type call() { return "a9"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 10 > { typedef A10 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a10; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 10 > { typedef char const* type; static type call() { return "a10"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 11 > { typedef A11 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a11; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 11 > { typedef char const* type; static type call() { return "a11"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_size<hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> > : mpl::int_<12> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_is_view< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct sequence_tag<hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct sequence_tag< hpx::util::tuple12<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 7 > { typedef A7 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a7; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 7 > { typedef char const* type; static type call() { return "a7"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 8 > { typedef A8 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a8; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 8 > { typedef char const* type; static type call() { return "a8"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 9 > { typedef A9 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a9; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 9 > { typedef char const* type; static type call() { return "a9"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 10 > { typedef A10 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a10; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 10 > { typedef char const* type; static type call() { return "a10"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 11 > { typedef A11 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a11; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> , 11 > { typedef char const* type; static type call() { return "a11"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_size<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> > : mpl::int_<12> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct struct_is_view< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct sequence_tag<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11 > struct sequence_tag< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace serialization
{
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
    struct is_bitwise_serializable<
            hpx::util::tuple12<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11> >
       : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple12<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11> >
    {};
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
    struct is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11> >
      : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11> >
    {};
}}
namespace hpx { namespace util
{
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12>
    struct tuple13
    {
        typedef A0 member_type0; A0 a0; typedef A1 member_type1; A1 a1; typedef A2 member_type2; A2 a2; typedef A3 member_type3; A3 a3; typedef A4 member_type4; A4 a4; typedef A5 member_type5; A5 a5; typedef A6 member_type6; A6 a6; typedef A7 member_type7; A7 a7; typedef A8 member_type8; A8 a8; typedef A9 member_type9; A9 a9; typedef A10 member_type10; A10 a10; typedef A11 member_type11; A11 a11; typedef A12 member_type12; A12 a12;
        template <int E>
        typename detail::tuple_element<E, tuple13>::rtype
        get() BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple13>::get(*this);
        }
        template <int E>
        BOOST_CONSTEXPR
        typename detail::tuple_element<E, tuple13>::crtype
        get() const BOOST_NOEXCEPT
        {
            return detail::tuple_element<E, tuple13>::get(*this);
        }
        tuple13() {}
        tuple13(tuple13 const& other)
          : a0(other.a0) , a1(other.a1) , a2(other.a2) , a3(other.a3) , a4(other.a4) , a5(other.a5) , a6(other.a6) , a7(other.a7) , a8(other.a8) , a9(other.a9) , a10(other.a10) , a11(other.a11) , a12(other.a12)
        {}
        tuple13(BOOST_RV_REF(tuple13) other)
          : a0(detail::move_if_no_ref<A0>::call( other.a0)) , a1(detail::move_if_no_ref<A1>::call( other.a1)) , a2(detail::move_if_no_ref<A2>::call( other.a2)) , a3(detail::move_if_no_ref<A3>::call( other.a3)) , a4(detail::move_if_no_ref<A4>::call( other.a4)) , a5(detail::move_if_no_ref<A5>::call( other.a5)) , a6(detail::move_if_no_ref<A6>::call( other.a6)) , a7(detail::move_if_no_ref<A7>::call( other.a7)) , a8(detail::move_if_no_ref<A8>::call( other.a8)) , a9(detail::move_if_no_ref<A9>::call( other.a9)) , a10(detail::move_if_no_ref<A10>::call( other.a10)) , a11(detail::move_if_no_ref<A11>::call( other.a11)) , a12(detail::move_if_no_ref<A12>::call( other.a12))
        {}
        tuple13 & operator=(BOOST_COPY_ASSIGN_REF(tuple13) other)
        {
            a0 = other.a0; a1 = other.a1; a2 = other.a2; a3 = other.a3; a4 = other.a4; a5 = other.a5; a6 = other.a6; a7 = other.a7; a8 = other.a8; a9 = other.a9; a10 = other.a10; a11 = other.a11; a12 = other.a12;
            return *this;
        }
        tuple13 & operator=(BOOST_RV_REF(tuple13) other)
        {
            a0 = detail::move_if_no_ref<A0>::call( other.a0); a1 = detail::move_if_no_ref<A1>::call( other.a1); a2 = detail::move_if_no_ref<A2>::call( other.a2); a3 = detail::move_if_no_ref<A3>::call( other.a3); a4 = detail::move_if_no_ref<A4>::call( other.a4); a5 = detail::move_if_no_ref<A5>::call( other.a5); a6 = detail::move_if_no_ref<A6>::call( other.a6); a7 = detail::move_if_no_ref<A7>::call( other.a7); a8 = detail::move_if_no_ref<A8>::call( other.a8); a9 = detail::move_if_no_ref<A9>::call( other.a9); a10 = detail::move_if_no_ref<A10>::call( other.a10); a11 = detail::move_if_no_ref<A11>::call( other.a11); a12 = detail::move_if_no_ref<A12>::call( other.a12);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
        tuple13 & operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple13<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12>
            ))) other)
        {
            a0 = detail::move_if_no_ref<T0>::call( other.a0); a1 = detail::move_if_no_ref<T1>::call( other.a1); a2 = detail::move_if_no_ref<T2>::call( other.a2); a3 = detail::move_if_no_ref<T3>::call( other.a3); a4 = detail::move_if_no_ref<T4>::call( other.a4); a5 = detail::move_if_no_ref<T5>::call( other.a5); a6 = detail::move_if_no_ref<T6>::call( other.a6); a7 = detail::move_if_no_ref<T7>::call( other.a7); a8 = detail::move_if_no_ref<T8>::call( other.a8); a9 = detail::move_if_no_ref<T9>::call( other.a9); a10 = detail::move_if_no_ref<T10>::call( other.a10); a11 = detail::move_if_no_ref<T11>::call( other.a11); a12 = detail::move_if_no_ref<T12>::call( other.a12);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12>
        tuple13(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12)
          : a0(boost::forward<Arg0>( arg0 )) , a1(boost::forward<Arg1>( arg1 )) , a2(boost::forward<Arg2>( arg2 )) , a3(boost::forward<Arg3>( arg3 )) , a4(boost::forward<Arg4>( arg4 )) , a5(boost::forward<Arg5>( arg5 )) , a6(boost::forward<Arg6>( arg6 )) , a7(boost::forward<Arg7>( arg7 )) , a8(boost::forward<Arg8>( arg8 )) , a9(boost::forward<Arg9>( arg9 )) , a10(boost::forward<Arg10>( arg10 )) , a11(boost::forward<Arg11>( arg11 )) , a12(boost::forward<Arg12>( arg12 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
        tuple13(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple13<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12>
                ))) other)
          : a0(detail::move_if_no_ref<T0>::call( other.a0)) , a1(detail::move_if_no_ref<T1>::call( other.a1)) , a2(detail::move_if_no_ref<T2>::call( other.a2)) , a3(detail::move_if_no_ref<T3>::call( other.a3)) , a4(detail::move_if_no_ref<T4>::call( other.a4)) , a5(detail::move_if_no_ref<T5>::call( other.a5)) , a6(detail::move_if_no_ref<T6>::call( other.a6)) , a7(detail::move_if_no_ref<T7>::call( other.a7)) , a8(detail::move_if_no_ref<T8>::call( other.a8)) , a9(detail::move_if_no_ref<T9>::call( other.a9)) , a10(detail::move_if_no_ref<T10>::call( other.a10)) , a11(detail::move_if_no_ref<T11>::call( other.a11)) , a12(detail::move_if_no_ref<T12>::call( other.a12))
        {}
        typedef boost::mpl::int_<13> size_type;
        static const int size_value = 13;
    private:
        BOOST_COPYABLE_AND_MOVABLE(tuple13);
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
    struct is_tuple<tuple13<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12> >
      : boost::mpl::true_
    {};
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12>
    BOOST_FORCEINLINE
    tuple13<typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type , typename detail::env_value_type<Arg7>::type , typename detail::env_value_type<Arg8>::type , typename detail::env_value_type<Arg9>::type , typename detail::env_value_type<Arg10>::type , typename detail::env_value_type<Arg11>::type , typename detail::env_value_type<Arg12>::type>
    forward_as_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12) BOOST_NOEXCEPT
    {
        return tuple13<
                typename detail::env_value_type<Arg0>::type , typename detail::env_value_type<Arg1>::type , typename detail::env_value_type<Arg2>::type , typename detail::env_value_type<Arg3>::type , typename detail::env_value_type<Arg4>::type , typename detail::env_value_type<Arg5>::type , typename detail::env_value_type<Arg6>::type , typename detail::env_value_type<Arg7>::type , typename detail::env_value_type<Arg8>::type , typename detail::env_value_type<Arg9>::type , typename detail::env_value_type<Arg10>::type , typename detail::env_value_type<Arg11>::type , typename detail::env_value_type<Arg12>::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ) , boost::forward<Arg9>( arg9 ) , boost::forward<Arg10>( arg10 ) , boost::forward<Arg11>( arg11 ) , boost::forward<Arg12>( arg12 ));
    }
    
    template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12>
    struct tuple<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12>
      : tuple13<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12>
    {
        typedef tuple13<A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12> base_tuple;
        tuple() {}
        tuple(tuple const& other)
          : base_tuple(other)
        {}
        tuple(base_tuple const& other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(tuple) other)
          : base_tuple(other)
        {}
        tuple(BOOST_RV_REF(base_tuple) other)
          : base_tuple(other)
        {}
        tuple& operator=(BOOST_COPY_ASSIGN_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_COPY_ASSIGN_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        tuple& operator=(BOOST_RV_REF(base_tuple) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
        tuple& operator=(BOOST_RV_REF(HPX_UTIL_STRIP((
                tuple13<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12>
            ))) other)
        {
            this->base_tuple::operator=(other);
            return *this;
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12>
        tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12)
          : base_tuple(boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ) , boost::forward<Arg9>( arg9 ) , boost::forward<Arg10>( arg10 ) , boost::forward<Arg11>( arg11 ) , boost::forward<Arg12>( arg12 ))
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12>
                ))) other)
          : base_tuple(other)
        {}
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
        tuple(BOOST_RV_REF(HPX_UTIL_STRIP((
                    tuple13<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12>
                ))) other)
          : base_tuple(other)
        {}
    };
    
    template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12>
    BOOST_FORCEINLINE tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg7>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg8>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg9>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg10>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg11>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg12>::type >::type>
    make_tuple(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12)
    {
        return tuple<typename boost::remove_const< typename detail::remove_reference<Arg0>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg1>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg2>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg3>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg4>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg5>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg6>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg7>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg8>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg9>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg10>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg11>::type >::type , typename boost::remove_const< typename detail::remove_reference<Arg12>::type >::type>(
            boost::forward<Arg0>( arg0 ) , boost::forward<Arg1>( arg1 ) , boost::forward<Arg2>( arg2 ) , boost::forward<Arg3>( arg3 ) , boost::forward<Arg4>( arg4 ) , boost::forward<Arg5>( arg5 ) , boost::forward<Arg6>( arg6 ) , boost::forward<Arg7>( arg7 ) , boost::forward<Arg8>( arg8 ) , boost::forward<Arg9>( arg9 ) , boost::forward<Arg10>( arg10 ) , boost::forward<Arg11>( arg11 ) , boost::forward<Arg12>( arg12 ));
    }
}}
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct tag_of<hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct tag_of<hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 7 > { typedef A7 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a7; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 7 > { typedef char const* type; static type call() { return "a7"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 8 > { typedef A8 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a8; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 8 > { typedef char const* type; static type call() { return "a8"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 9 > { typedef A9 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a9; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 9 > { typedef char const* type; static type call() { return "a9"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 10 > { typedef A10 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a10; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 10 > { typedef char const* type; static type call() { return "a10"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 11 > { typedef A11 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a11; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 11 > { typedef char const* type; static type call() { return "a11"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 12 > { typedef A12 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a12; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 12 > { typedef char const* type; static type call() { return "a12"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_size<hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> > : mpl::int_<13> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_is_view< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct sequence_tag<hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct sequence_tag< hpx::util::tuple13<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace fusion { namespace traits { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> > { typedef struct_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct tag_of<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> const> { typedef struct_tag type; }; } namespace extension { template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 0 > { typedef A0 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a0; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 0 > { typedef char const* type; static type call() { return "a0"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 1 > { typedef A1 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a1; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 1 > { typedef char const* type; static type call() { return "a1"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 2 > { typedef A2 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a2; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 2 > { typedef char const* type; static type call() { return "a2"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 3 > { typedef A3 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a3; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 3 > { typedef char const* type; static type call() { return "a3"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 4 > { typedef A4 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a4; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 4 > { typedef char const* type; static type call() { return "a4"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 5 > { typedef A5 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a5; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 5 > { typedef char const* type; static type call() { return "a5"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 6 > { typedef A6 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a6; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 6 > { typedef char const* type; static type call() { return "a6"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 7 > { typedef A7 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a7; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 7 > { typedef char const* type; static type call() { return "a7"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 8 > { typedef A8 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a8; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 8 > { typedef char const* type; static type call() { return "a8"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 9 > { typedef A9 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a9; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 9 > { typedef char const* type; static type call() { return "a9"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 10 > { typedef A10 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a10; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 10 > { typedef char const* type; static type call() { return "a10"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 11 > { typedef A11 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a11; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 11 > { typedef char const* type; static type call() { return "a11"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct access::struct_member< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 12 > { typedef A12 attribute_type; BOOST_FUSION_ADAPT_STRUCT_MSVC_REDEFINE_TEMPLATE_PARAMS( (1) (A0) (A1) (A2) (A3) (A4) (A5) (A6) (A7) (A8) (A9) (A10) (A11) (A12)) typedef attribute_type type; template<typename Seq> struct apply { typedef typename add_reference< typename mpl::eval_if< is_const<Seq> , add_const<attribute_type> , mpl::identity<attribute_type> >::type >::type type; static type call(Seq& seq) { return seq. a12; } }; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_member_name< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> , 12 > { typedef char const* type; static type call() { return "a12"; } }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_size<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> > : mpl::int_<13> {}; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct struct_is_view< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> > : mpl::false_ {}; } } namespace mpl { template<typename> struct sequence_tag; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct sequence_tag<hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> > { typedef fusion::fusion_sequence_tag type; }; template< typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12 > struct sequence_tag< hpx::util::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> const > { typedef fusion::fusion_sequence_tag type; }; } }
namespace boost { namespace serialization
{
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
    struct is_bitwise_serializable<
            hpx::util::tuple13<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12> >
       : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple13<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12> >
    {};
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
    struct is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12> >
      : hpx::util::detail::sequence_is_bitwise_serializable<
            hpx::util::tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12> >
    {};
}}
