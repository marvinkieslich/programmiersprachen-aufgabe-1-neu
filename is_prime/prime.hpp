#include <iostream>

bool prime(int num) {


    for (int i = 2; i < num; ++i){
        if (num % i == 0) {
            std::cout << "Not a prime!";
            return false;
        }

    }

    std::cout << "Prime!";
    return true;
}