#include <catch2/catch_test_macros.hpp>
#include "MathProcessor.hpp"

TEST_CASE( "square", "[MathProcessor]" ) {
    REQUIRE( processing::ComputeSquare(12) == 144 );
}