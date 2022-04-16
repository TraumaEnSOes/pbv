#include "pbv/Dependency.hpp"

#include <stdexcept>

static bool doNone( const std::vector< const pbv::details::BasicRule * > & ) {
    throw std::runtime_error( "NoneOf not implemented yet" );
}

static bool doAll( const std::vector< const pbv::details::BasicRule * > & ) {
    throw std::runtime_error( "AllOf not implemented yet" );
}

static bool doSome( const std::vector< const pbv::details::BasicRule * > & ) {
    throw std::runtime_error( "SomeOf not implemented yet" );
}

static bool doOne( const std::vector< const pbv::details::BasicRule * > & ) {
    throw std::runtime_error( "OneOf not implemented yet" );
}

namespace pbv::details {

Dependency::Maker Dependency::Factories[] = {
    doNone,
    doAll,
    doSome,
    doOne
};

} // namespace pbv::details.
