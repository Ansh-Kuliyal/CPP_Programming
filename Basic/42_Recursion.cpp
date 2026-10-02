#include <iostream>

int factorial(int num);

int main()
{
    // recursion = a programming technique where a function invokes itself from within
    //             break a complex concept into a repeatable single step

    // (iterative vs recursion)

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //                 slower

    std::cout << factorial(10);

    return 0;
}
int factorial(int num)
{
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}