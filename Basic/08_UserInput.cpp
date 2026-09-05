#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std::string name;
    int age;

    std::cout << "Enter your full name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter you age: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}