#include <iostream>
int main() {
    const double PI = 3.14;
    double radius;
    
    std::cout << "Enter radius: ";
    std::cin >> radius;

    double circumference = 2 * PI * radius;
    std::cout << "Circumference: " << circumference << " cm";
    return 0;
}