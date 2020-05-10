#define _USE_MATH_DEFINES
#include <iostream>
#include "cylinder.hpp"
#include <cmath>

int main() {

    double radius;
    double height;

    std::cout << "Please put in your radius:" << std::endl;
    std::cin >> radius;

    std::cout << "Please put in your height:" << std::endl;
    std::cin >> height;

    double cylindersurf = cylindersurface(radius, height);

    std::cout << "Your surfacearea is " << cylindersurf << std::endl;

    double cylindervol = cylindervolume(radius, height);

    std::cout << "Your volume is " << cylindervol << std::endl;


}