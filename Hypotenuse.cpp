#include <iostream>
#include <cmath>

int main() {
    double a, b, hypotenuse;

    std::cout << "Enter the length of side a: ";
    std::cin >> a;
    std::cout << "Enter the length of side b: ";
    std::cin >> b;

    hypotenuse = std::sqrt(a * a + b * b);

    std::cout << "The hypotenuse is: " << hypotenuse << std::endl;

    return 0;
}