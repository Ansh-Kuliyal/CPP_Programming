#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "***Temperature Coversion***" << '\n';

    std::cout << "F = Fahrenheit" << '\n';
    std::cout << "C = Celsius" << '\n';

    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        std::cout << "Temperature is " << (1.8 * temp) + 32 << "F";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        std::cout << "Temperature is " << (temp - 32) / 1.8 << "C";
    }
    else
    {
        std::cout << "Invalid Unit! please Enter in only C or F";
    }

    return 0;
}