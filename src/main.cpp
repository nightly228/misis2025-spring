#include <iostream>
#include "utils.hpp"

int main() {
    int a = 10;
    int b = 5;

    std::cout << "the sum: " << add(a, b) << std::endl;
    std::cout << "вычитание: " << subtract(a, b) << std::endl;
    std::cout << "the prod: " << multiply(a, b) << std::endl;

    return 0;
}