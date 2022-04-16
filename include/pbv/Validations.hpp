#ifndef PBV_VALIDATIONS_HPP
#define PBV_VALIDATIONS_HPP

#include "TracesStore.hpp"

#include <functional>

#include <iostream>

namespace pbv {

namespace details {

template< typename MSG > using Exp = std::function< bool( const MSG &, TracesStore & ) >;

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

template< typename MSG > details::Exp< MSG > Repeated( int (MSG::*counter)( ) const, int min, int max = 0 ) {
    auto lambda = [counter,min,max]( const MSG &msg, TracesStore &ts ) {
std::cout << "Repeated( )\n";
        auto pointer = &msg;
        auto count = (pointer->*counter)( );
        return ( max == 0 ) ?
            ( count >= min ) :
            ( ( count >= min ) && ( count <= max ) );
    };

    return lambda;
}

} // namespace pbv.

#endif
