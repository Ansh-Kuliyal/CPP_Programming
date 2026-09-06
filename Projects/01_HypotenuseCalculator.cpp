#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter Perpendicular: ";
    std::cin >> a;

    std::cout << "Enter Base: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "Hypotenuse = " << c;

    return 0;
}