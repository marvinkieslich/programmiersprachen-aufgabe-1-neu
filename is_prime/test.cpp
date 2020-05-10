#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "prime.hpp"

TEST_CASE("Testing the numbers") {

    REQUIRE(prime(3) == true);
    REQUIRE(prime(4) == false);
    REQUIRE(prime(5) == true);
    REQUIRE(prime(6) == false);
    REQUIRE(prime(13) == true);
    REQUIRE(prime(14) == false);

}