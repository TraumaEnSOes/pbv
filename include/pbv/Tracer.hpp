#ifndef PBV_TRACER_HPP
#define PBV_TRACES_HPP

#include <string>

namespace pbv {

namespace details {

#ifdef defined( PBV_TRACES_ALL ) || defined( PBV_TRACES_SUCCESS )

template< typename MSG > static constexpr bool TraceSuccess = true;

#else

template< typename MSG > static constexpr bool TraceSuccess = false;

#endif

struct TracerBase {
    static inline void fail( const char *fieldName, std::string &buff ) {
        buff += "Field ";
        buff += fieldName;
        buff += ": fail\n";
    }

    static inline void empty( const char *fieldName, std::string &buff ) {
        buff += "Field ";
        buff += fieldName;
        buff += "is empty\n";
    }

    static inline void fail( const char *fieldName, int idx, std::string &buff ) {
        buff += "Field ";
        buff += fieldName;
        buff += '[';
        buff += std::to_string( idx );
        buff += "] fail\n";
    }
};

template< typename MSG > struct Tracer : public TracerBase {
    static inline void success( const char *fieldName, std::string &buff ) {
        if constexpr( TraceSuccess< MSG > ) {
            buff += "Field ";
            buff += fieldName;
            buff += ": success\n";
        }
    }

    static inline void success( const char *fieldName, int idx, std::string &buff ) {
        if constexpr( TraceSuccess< MSG > ) {
            buff += "Field ";
            buff += fieldName;
            buff += '[';
            buff += std::to_string( idx );
            buff += "] success\n";
        }
    }
};

} // namespace details.

} // namespace pbv.

#endif
