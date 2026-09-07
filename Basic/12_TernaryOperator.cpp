#include <iostream>

int main()
{
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    // int grade = 75;
    // grade >= 60 ? std::cout << "You Pass! " : std::cout << "You Fail!";

    // int number = 8;
    // number % 2 ? std::cout << "ODD " : std::cout << "Even ";

    bool hungry = true;
    // hungry ? std::cout << "Eat Food " : std::cout << "You are Full ";
    std::cout << (hungry ? "You are hungry" : "You are Full");

    return 0;
}