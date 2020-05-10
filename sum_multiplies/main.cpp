#include <iostream>
#include <cmath>
#include "sum_multiplies.hpp"





int main() {

	int num;

	std::cout << "Please put in a positive number: " << std::endl;
	std::cin >> num;

	int sum = sum_multiplies(num);

	std::cout << sum;

}
