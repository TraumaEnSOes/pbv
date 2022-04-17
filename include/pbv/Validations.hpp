#ifndef PBV_VALIDATIONS_HPP
#define PBV_VALIDATIONS_HPP

#include "TracesStore.hpp"

#include <functional>

#include <iostream>

namespace pbv {

namespace details {

template< typename MSG > using Exp = std::function< bool( const MSG &, TracesStore & ) >;

template< typename RETURN > struct Has;

template< > struct Has< bool > {
    static bool body( bool result, int max, int min ) {
        return true;
    }
};

template< > struct Has< int > {
    static bool body( int result, int max, int min ) {
        return true;
    }
};

} // namespace details.

template< typename TYPE, typename MSG, typename LITERAL > details::Exp< MSG > NotEqual( TYPE (MSG::*getter)( ) const, const LITERAL &value ) {
    auto lambda = [getter, value]( const MSG &msg, TracesStore &ts ) {
std::cout << "NotEqual( )\n";
        auto pointer = &msg;
        return ( (pointer->*getter)( ) ) != value;
    };

    return lambda;
}

template< typename TYPE, typename MSG, typename LITERAL > details::Exp< MSG > Equal( TYPE (MSG::*getter)( ) const, const LITERAL &value ) {
    auto lambda = [getter, value]( const MSG &msg, TracesStore &ts ) {
std::cout << "Equal( )\n";
        auto pointer = &msg;
        return ( (msg->*getter)( ) ) == value;
    };

    return lambda;
}

template< typename MSG, typename RETURN > details::Exp< MSG > Has( RETURN (MSG::*getter)( ) const, int max = 0, int min = 1 ) {
    auto lambda = [getter, max, min]( const MSG &msg, TracesStore &ts ) {
        auto pointer = &msg;
        return details::Has< RETURN >::body( (pointer->*getter)( ), max, min );
    };

    return lambda;
}

} // namespace pbv.

#endif
