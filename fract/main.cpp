#include "fract.hpp"
#include <iostream>

int main() {

    double num;

    std::cout << "Please enter a decimal number: " << std::endl;
    std::cin >> num;

    std::cout<< fract(num);
    
}