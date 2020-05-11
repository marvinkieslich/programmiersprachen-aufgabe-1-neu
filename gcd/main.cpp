#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>


int gcd(int a, int b) {
    int divider = 1;


    for (int i = 1; i <= a && i <= b; ++i) {

        if (a % i == 0 && b % i == 0) {

            divider = i;
        }

    }

    return divider;
}

    TEST_CASE("describe_gcd", "[gcd]") {
        REQUIRE(gcd(2, 4) == 2);
        REQUIRE(gcd(9, 6) == 3);
        REQUIRE(gcd(3, 7) == 1);
    }
      
    int main(int argc, char* argv[])
    {
        return Catch::Session().run(argc, argv);
    }