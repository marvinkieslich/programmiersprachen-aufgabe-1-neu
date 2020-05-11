#include "mile_to_km.hpp"
#include <iostream>

int main() {

    double mile;

    std::cout << "Please enter your miles you want to convert to kilometers: " << std::endl;
    std::cin >> mile;

    std::cout << "Your " << mile << "Miles are " << mile_to_km(mile) << " kilometers.";

}