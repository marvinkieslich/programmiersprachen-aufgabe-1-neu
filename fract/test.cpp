#define CATCH_CONFIG_MAIN
#include "fract.hpp"
#include "catch.hpp"


TEST_CASE("fract is getting tested"){
    REQUIRE(fract(1.234982348) == Approx(0.234982348));
    REQUIRE(fract(1.452894289) == Approx(0.452894289));
    REQUIRE(fract(34.52349872347) == Approx(0.52349872347));

}