#include <iostream>

int main()
{
    // && = check if two conditions are true;
    // || = check if at least one of two conditions is
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    /*if (temp > 0 && temp < 30)
    {
        std::cout << "The temperature is GOOD!";
    }
    else
    {
        std::cout << "The temperature is BAD!";
    }*/

    if (temp <= 0 || temp >= 30)
    {
        std::cout << "The temperature is BAD!"<<'\n';
    }
    else
    {
        std::cout << "The temperature is GOOD!"<<'\n';
    }

    if (!sunny)
    {
        std::cout << "It is sunny outside";
    }
    else
    {
        std::cout << "It is cloudy outside";
    }

    return 0;
}