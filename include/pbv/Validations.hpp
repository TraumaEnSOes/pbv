#ifndef PBV_VALIDATIONS_HPP
#define PBV_VALIDATIONS_HPP

#include "TracesStore.hpp"

#include <functional>

#include <iostream>

namespace pbv {

namespace details {

template< typename MSG > using Exp = std::function< bool( const MSG &, TracesStore & ) >;

template< typename MSG > bool AllwaysTrue( const MSG &, TracesStore & ) { return true; }

template< typename MSG > bool AllwaysFalse( const MSG &, TracesStore & ) { return false; }

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

template< typename MSG > details::Exp< MSG > Has( int (MSG::*counter)( ) const, int min = 1, int max = 0 ) {
    auto lambda = [counter, min, max]( const MSG &msg, TracesStore & ) {
        const MSG *pointer = &msg;
        int count = (pointer->*counter)( );

        if( count < min ) { return false; }
        if( max && ( count > max ) ) { return false; }

        return true;
    };

    return lambda;
}

template< typename MSG > details::Exp< MSG > Has( bool (MSG::*counter)( ) const, int min = 1, int max = 0 ) {
    auto lambda = [counter, min, max]( const MSG &msg, TracesStore & ) {
        const MSG *pointer = &msg;

        return (pointer->*counter)( );
    };

    return lambda;
}

template< typename VALIDATOR, typename MSG, typename INNER = typename VALIDATOR::THISPROTO > details::Exp< MSG > AllAreValid( bool (MSG::*conuter)( ) const, const INNER &(MSG::*getter)( ) const ) {
    return details::AllwaysTrue< MSG >;
}

template< typename VALIDATOR, typename MSG, typename INNER = typename VALIDATOR::THISPROTO > details::Exp< MSG > AllAreValid( int (MSG::*conuter)( ) const, const INNER &(MSG::*getter)( int ) const ) {
    return details::AllwaysTrue< MSG >;
}

template< typename VALIDATOR, typename MSG, typename INNER = typename VALIDATOR::THISPROTO > details::Exp< MSG > LeastOneIsValid( bool (MSG::*conuter)( ) const, const INNER &(MSG::*getter)( ) const ) {
    return details::AllwaysTrue< MSG >;
}

template< typename VALIDATOR, typename MSG, typename INNER = typename VALIDATOR::THISPROTO > details::Exp< MSG > LeastOneIsValid( int (MSG::*conuter)( ) const, const INNER &(MSG::*getter)( int ) const ) {
    return details::AllwaysTrue< MSG >;
}

template< typename VALIDATOR, typename MSG, typename INNER = typename VALIDATOR::THISPROTO > details::Exp< MSG > NoneIsValid( bool (MSG::*conuter)( ) const, const INNER &(MSG::*getter)( ) const ) {
    return details::AllwaysTrue< MSG >;
}

template< typename VALIDATOR, typename MSG, typename INNER = typename VALIDATOR::THISPROTO > details::Exp< MSG > NoneIsValid( int (MSG::*conuter)( ) const, const INNER &(MSG::*getter)( int ) const ) {
    return details::AllwaysTrue< MSG >;
}

} // namespace pbv.

#endif
