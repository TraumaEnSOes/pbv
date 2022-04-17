#include "pbv/Validator.hpp"
#include "pbv/Validations.hpp"

#include "protos/Basic.pb.h"

#include <iostream>

VALIDATOR( InnerValidator, Test::Basic::Inner )
    inline static bool customRule1( const THISPROTO &, pbv::TracesStore & ) {
std::cout << "InnerValidator::customRule1( )" << std::endl;
        return true;
    }

    inline static bool customRule2( const THISPROTO &, pbv::TracesStore & ) {
std::cout << "InnerValidator::customRule2( )" << std::endl;
        return true;
    }

    Requisite ivalNotZero{ { pbv::NotEqual( &THISPROTO::ival, 0 ), InnerValidator::customRule1 } };
    Requisite testCustom{ pbv::AllOf( &ivalNotZero ), customRule2 };
END_VALIDATOR

VALIDATOR( Validator, Test::Basic )
    Requisite validInner{ pbv::Has( &THISPROTO::repeated_inner_message_size, 1 ) };
    // Single< InnerValidator >inner{ vengine::details::Dependency( ), &Test::Basic::has_single_inner_message, &Test::Basic::single_inner_message };
    // Repeated< InnerValidator > repeated{ 1, &Test::Basic::repeated_inner_message_size, &Test::Basic::repeated_inner_message };
END_VALIDATOR

int main( ) {
    Test::Basic_Inner *ptr = nullptr;

    auto result = InnerValidator::validate( *ptr );

    return 0;
}
