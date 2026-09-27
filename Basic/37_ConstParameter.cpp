#include <iostream>

void printInfo(const std::string &name, const int &age);

int main()
{
    // const parameter = parameter that is effectively read-only code is
    //                   more secure & conveys intent useful for references
    //                   and pointers

    std::string name = "Void";
    int age = 18;

    printInfo(name, age);

    return 0;
}
void printInfo(const std::string &name, const int &age)
{
    std::cout << "Your name is " << name << '\n';
    std::cout << "You are " << age << " years old";
}