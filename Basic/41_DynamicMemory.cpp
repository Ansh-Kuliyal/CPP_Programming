#include <iostream>

int main()
{
    // dynamic memory = Memory that is allocated after the program is alreday compiled & running.
    //                  Use the 'new' operator to allocate memory in the heap rather than the stack

    //                  Useful when we don't know how much memory we will need.
    //                  Makes our program more flexible,especially ehen accepting user input

    char *pGrades = NULL;
    int size;

    std::cout << "Enter many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter Grade No " << i + 1 << ": ";
        std::cin >> pGrades[i];
    }
    for (int j = 0; j < size; j++)
    {
        std::cout << pGrades[j] << " ";
    }
    delete[] pGrades;

    return 0;
}