#ifndef BASICRULE_HPP
#define BASICRULE_HPP

#include "pbv/Dependency.hpp"
#include "pbv/IterableMember.hpp"

#include <optional>
#include <stdexcept>

namespace pbv {

namespace details {

struct BasicRule : public IterableMember {
protected:
    BasicRule( size_t size ) : IterableMember( size ) { }
    BasicRule( size_t size, Dependency &&deps ) :
        IterableMember( size ),
        m_dependency( std::move( deps ) )
    {
    }

    bool result( ) const noexcept {
        if( !m_result.has_value( ) ) {
            throw std::logic_error( "Result of the rule accessed before being evaluated" );
        }
    }

    void setResult( bool r ) noexcept { m_result = r; }

    bool satisfied( ) const noexcept { return m_dependency( ); }

private:
    Dependency m_dependency;
    std::optional< bool > m_result;
};

} // namespace details.

} // namespace pbv.

#endif
