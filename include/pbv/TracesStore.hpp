#ifndef PBV_TRACESSTORE_HPP
#define PBV_TRACESSTORE_HPP

#include "pbv/ValidationResult.hpp"

namespace pbv {

struct TracesStore {
    TracesStore( ValidationResult &vr ) : m_validationResult( vr ) { }

    void warning( std::string msg ) { m_validationResult.m_warnings.push_back( std::move( msg ) ); }
    void error( std::string msg ) { m_validationResult.m_warnings.push_back( std::move( msg ) ); }

private:
    ValidationResult &m_validationResult;
};

} // namespace pbv.

#endif
