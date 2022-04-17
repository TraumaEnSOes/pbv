#include "pbv/Validator.hpp"
#include "pbv/Validations.hpp"

#include "protos/Basic.pb.h"

#include <iostream>

//  We define a Validator that links to the Test::Basic::Inner class (generated when compiling the .proto).
VALIDATOR( InnerValidator, Test::Basic::Inner )
    // Custom rule, to manage complicated cases.
    inline static bool customRule1( const THISPROTO &, pbv::TracesStore & ) {
std::cout << "InnerValidator::customRule1( )" << std::endl;
        return true;
    }
    // Custom rule, to manage complicated cases.
    inline static bool customRule2( const THISPROTO &, pbv::TracesStore & ) {
std::cout << "InnerValidator::customRule2( )" << std::endl;
        return true;
    }
    // AND rule: all expression must be 'true':
    // 1 - The member-function 'ival( )' must return != 0.
    // 2 - The custom funcition 'customRule1' must result != 0.
    Requisite ivalNotZero{ { pbv::NotEqual( &THISPROTO::ival, 0 ), InnerValidator::customRule1 } };
    // Dependent rule: only execute if the rule 'ivalNotZero' is 'true'.
    // 1 - The custom function 'customRule2( )'  must return true.
    Requisite testCustom{ pbv::AllOf( &ivalNotZero ), customRule2 };
END_VALIDATOR

//  We define a Validator that links to the Test::Basic class (generated when compiling the .proto).
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
