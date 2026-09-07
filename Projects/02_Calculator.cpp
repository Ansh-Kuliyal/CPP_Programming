#include <iostream>

int main()
{
    double x;
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    char op;
    std::cout << "Enter the operator (+, -, *, /): ";
    std::cin >> op;

    double y;
    std::cout << "Enter the value of y: ";
    std::cin >> y;

    switch (op)
    {
    case '+':
        std::cout << "Addition = " << x + y;
        break;
    case '-':
        std::cout << "Subtraction = " << x - y;
        break;
    case '*':
        std::cout << "Multiplication = " << x * y;
        break;
    case '/':
        std::cout << "Division = " << x / y;
        break;
    default:
        std::cout << "Invalid Operator";
        break;
    }

    return 0;
}