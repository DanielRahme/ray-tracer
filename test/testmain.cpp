#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include <functions.hpp>


unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

TEST_CASE( "Factorials are computed") {
    CHECK( Factorial(1) == 1 );
    CHECK( Factorial(2) == 2 );
    CHECK( Factorial(3) == 6 );
    CHECK( Factorial(10) == 3628800 );
}

TEST_CASE( "Squares are computed") {
    CHECK( func::square(1) == 1 );
    CHECK( func::square(2) == 4 );
    CHECK( func::square(9) == 81 );
    CHECK( func::square(12) == 144 );
}
