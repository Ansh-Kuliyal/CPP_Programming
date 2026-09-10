#include <iostream>

int main()
{
    // sizeof() = determines the size in bytes of a:
    //            variable, data types, class, objects, etc.

    std::string name = "Steven";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grades) / sizeof(char) << " bytes\n";

    return 0;
}