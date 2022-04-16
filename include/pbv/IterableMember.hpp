#ifndef ITERABLEMEMBER_HPP
#define ITERABLEMEMBER_HPP

#include <cstddef>

namespace pbv {

namespace details {

struct IterableMember {
    virtual ~IterableMember( ) = default;

    IterableMember( size_t size ) : m_size( size ) { }

    bool isEnd( ) const noexcept { return m_size == 0; }

    IterableMember *nextMember( ) noexcept {
        char *ptr = reinterpret_cast< char * >( this );
        ptr += m_size;
        return reinterpret_cast< IterableMember * >( ptr );
    }

    const IterableMember *nextMember( ) const noexcept {
        const char *ptr = reinterpret_cast< const char * >( this );
        ptr += m_size;
        return reinterpret_cast< const IterableMember * >( ptr );
    }

    const IterableMember *cnextMember( ) const noexcept { return nextMember( ); }

private:
    const size_t m_size;
};

struct BEGIN : public IterableMember {
    BEGIN( ) : IterableMember( sizeof( *this ) ) { }

    using IterableMember::nextMember;
};

struct END : public IterableMember {
    END( ) : IterableMember( 0 ) { }
};

} // namespace details.

} // namespace pbv.

#endif
