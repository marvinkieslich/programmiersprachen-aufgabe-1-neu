#define _USE_MATH_DEFINES
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "cylinder.hpp"
#include <cmath>


TEST_CASE("Bla") {

	REQUIRE(cylindersurface(2, 4) == Approx(75.398));
	REQUIRE(cylindersurface(3, 6) == Approx(169.646));
	REQUIRE(cylindervolume(2, 4) == Approx(50.265));
	REQUIRE(cylindervolume(3, 6) == Approx(169.646));

 
}