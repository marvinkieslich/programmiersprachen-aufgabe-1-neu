#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <cmath>




int crosstotal(int num) {
	int minInt = -2147483647;
	int maxInt = 2147483647;

	if (minInt < num > maxInt) {
		return NULL;
	}

	int crosstotal = 0;
	num = abs(num);
	while (num > 0) {
		crosstotal += num % 10;
		num /= 10;
	}
	return crosstotal;
}

TEST_CASE("Crosstotals are computed", "[crosstotal]") {
	REQUIRE(crosstotal(0) == 0);
	REQUIRE(crosstotal(120883) == 22);
	REQUIRE(crosstotal(15) == 6);
	REQUIRE(crosstotal(-15) == 6);
	REQUIRE(crosstotal(2147483648) == NULL);
	REQUIRE(crosstotal(-2147483648) == NULL);
}