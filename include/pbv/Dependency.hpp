#ifndef PBV_DEPENDENCY_HPP
#define PBV_DEPENDENCY_HPP

#include <initializer_list>
#include <vector>

namespace pbv {

namespace details {

struct BasicRule;

struct Dependency {
    enum Type {
        EMPTY = -1,
        NONE,
        ALL,
        SOME,
        ONE
    };

    Dependency( ) : m_type( Type::EMPTY ) { }

    Dependency( Type type, std::vector< const BasicRule * > deps ) :
        m_type( type ),
        m_dependencies( std::move( deps ) )
    {
    }

    bool operator()( ) const noexcept {
        return ( m_type == EMPTY ) ?
            true :
            Factories[static_cast< int >( m_type )]( m_dependencies );
    }

private:
    using Maker = bool (*)( const std::vector< const details::BasicRule * > & );

    static Maker Factories[];

    Type m_type;
    const std::vector< const details::BasicRule * > m_dependencies;
};

} // namespace details.

inline details::Dependency NoneOf( details::BasicRule * ) { return details::Dependency( ); }
inline details::Dependency NoneOf( std::initializer_list< details::BasicRule * > ) { return details::Dependency( ); }
inline details::Dependency AllOf( details::BasicRule * ) { return details::Dependency( ); }
inline details::Dependency AllOf( std::initializer_list< details::BasicRule * > ) { return details::Dependency( ); }
inline details::Dependency SomeOf( std::initializer_list< details::BasicRule * > ) { return details::Dependency( ); }
inline details::Dependency OneOf( std::initializer_list< details::BasicRule * > ) { return details::Dependency( ); }

} // namespace pbv.

#endif
