#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "factorial.hpp"

TEST_CASE("Factorials are tested") {

    REQUIRE(factorial(5) == 120);
    REQUIRE(factorial(10) == 3628800);
    REQUIRE(factorial(7) == 5040);

}