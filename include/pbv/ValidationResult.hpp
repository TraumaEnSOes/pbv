#ifndef PBV_VALIDATIONRESULT_HPP
#define PBV_VALIDATIONRESULT_HPP

#include <string>
#include <vector>

namespace pbv {

struct TracesStore;

struct ValidationResult {
    friend class TracesStore;

    operator bool( ) const noexcept { return m_errors.empty( ); }
    bool operator!( ) const noexcept { return !m_errors.empty( ); }

    const std::vector< std::string > &warnings( ) const noexcept { return m_warnings; }
    const std::vector< std::string > &errors( ) const noexcept { return m_errors; }

private:
    std::vector< std::string > m_warnings;
    std::vector< std::string > m_errors;
};

} // namespace pbv.

#endif
