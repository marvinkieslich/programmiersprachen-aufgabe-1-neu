#include "factorial.hpp"
#include <iostream>


int main() {

    int num;

    std::cout << "Please enter your factorial number: " << std::endl;
    std::cin >> num;

    factorial(num);

    std::cout << factorial(num);

}