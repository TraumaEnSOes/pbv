#ifndef PBV_VALIDATOR_HPP
#define PBV_VALIDATOR_HPP

#include "pbv/BasicRule.hpp"
#include "pbv/Dependency.hpp"
#include "pbv/ValidationResult.hpp"

#include <cstddef>
#include <functional>
#include <optional>

namespace pbv {

namespace details {

template< typename MSG > struct Validator {
    using THISPROTO = MSG;
    using Expression = std::function< bool( const MSG &, TracesStore & ) >;
    using VectorOfExpressions = std::vector< Expression >;

private:
    struct Rule : public BasicRule {
        Rule( size_t size, VectorOfExpressions &&vox ) :
            BasicRule( size ),
            m_voexps( std::move( vox ) )
        {
        }

        Rule( size_t size, Dependency &&deps, VectorOfExpressions &&vox ) :
            BasicRule( size, std::move( deps ) ),
            m_voexps( std::move( vox ) )
        {
        }

        bool validate( const MSG &msg, TracesStore &ts ) {
            bool result = BasicRule::satisfied( ) ? doValidation( m_voexps, msg, ts ) : false;

            setResult( result );

            return result;
        }

    private:
        virtual bool doValidation( const VectorOfExpressions &vox, const MSG &msg, TracesStore &ts ) = 0;

        VectorOfExpressions m_voexps;
    };

public:
    struct Requisite : public Rule {
        Requisite( Expression &&exp ) :
            Rule( sizeof( *this ), VectorOfExpressions( 1, exp ) )
        {
        }

        Requisite( Dependency &&dep, Expression &&exp ) :
            Rule( sizeof( *this ), std::move( dep ), VectorOfExpressions( 1, exp ) )
        {
        }

        Requisite( std::initializer_list< Expression > exps ) :
            Rule( sizeof( *this ), VectorOfExpressions( exps ) )
        {
        }

        Requisite( Dependency &&dep, std::initializer_list< Expression > exps ) :
            Rule( sizeof( *this ), std::move( dep ), VectorOfExpressions( exps ) )
        {
        }

    private:
        bool doValidation( const VectorOfExpressions &vox, const MSG &msg, TracesStore &ts ) override {
            bool result = true;

            for( const auto &exp : vox ) {
                result = exp( msg, ts );

                if( result == false ) {
                    break;
                }
            }

            return result;
        }
    };

    struct Sufficient : public Rule {
        Sufficient( Expression &&exp ) :
            Rule( sizeof( *this ), VectorOfExpressions( 1, exp ) )
        {
        }

        Sufficient( Dependency &&dep, Expression &&exp ) :
            Rule( sizeof( *this ), std::move( dep ), VectorOfExpressions( 1, exp ) )
        {
        }

        Sufficient( std::initializer_list< Expression > exps ) :
            Rule( sizeof( *this ), VectorOfExpressions( exps ) )
        {
        }

        Sufficient( Dependency &&dep, std::initializer_list< Expression > exps ) :
            Rule( sizeof( *this ), std::move( dep ), VectorOfExpressions( exps ) )
        {
        }

    private:
        bool doValidation( const VectorOfExpressions &vox, const MSG &msg, TracesStore &ts ) override {
            bool result = false;

            for( const auto &exp : vox ) {
                result = exp( msg, ts );

                if( result == true ) {
                    break;
                }
            }

            return result;
        }
    };

    struct Optional : public Rule {
        Optional( Expression &&exp ) :
            Rule( sizeof( *this ), VectorOfExpressions( 1, exp ) )
        {
        }

        Optional( Dependency &&dep, Expression &&exp ) :
            Rule( sizeof( *this ), std::move( dep ), VectorOfExpressions( 1, exp ) )
        {
        }

        Optional( std::initializer_list< Expression > exps ) :
            Rule( sizeof( *this ), VectorOfExpressions( exps ) )
        {
        }

        Optional( Dependency &&dep, std::initializer_list< Expression > exps ) :
            Rule( sizeof( *this ), std::move( dep ), VectorOfExpressions( exps ) )
        {
        }

    private:
        bool doValidation( const VectorOfExpressions &vox, const MSG &msg, TracesStore &ts ) override {
            for( const auto &exp : vox ) {
                exp( msg, ts );
            }

            return true;
        }
    };

    static ValidationResult validate( const MSG &msg ) {
        ValidationResult result;
        TracesStore ts( result );
        Validator< MSG > validator;

        validator.validate( msg, ts );

        return result;
    }

    bool validate( const MSG &msg, TracesStore &ts ) {
        bool result = true;
        auto ptr = static_cast< Rule * >( m_begin.nextMember( ) );

        while( !ptr->isEnd( ) ) {
            result &= ptr->validate( msg, ts );
            ptr = static_cast< Rule * >( ptr->nextMember( ) );
        }

        return result;
    }

private:
    BEGIN m_begin;
};

} // namespace details.

} // namespace pbv.

#define VALIDATOR( NAME, MSG ) struct NAME : public ::pbv::details::Validator< MSG > {
#define END_VALIDATOR private: ::pbv::details::END m_end; };

#endif
