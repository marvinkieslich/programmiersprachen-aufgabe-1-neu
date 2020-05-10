#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "sum_multiplies.hpp"

TEST_CASE("sum_multiplies gets tested for different values", "[sum_multiplies]") {
	REQUIRE(sum_multiplies(5) == 8);
	REQUIRE(sum_multiplies(10) == 33);
	REQUIRE(sum_multiplies(-1) == NULL);
	REQUIRE(sum_multiplies(1001) == NULL);

}