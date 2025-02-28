#include <iostream>
#include "utils.hpp"

int main() {
    int a = 10;
    int b = 5;

    std::cout << "сложение: " << add(a, b) << std::endl;
    std::cout << "вычитание: " << subtract(a, b) << std::endl;

    return 0;
}