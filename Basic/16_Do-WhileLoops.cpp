#include <iostream>

int main()
{
    // do while loop = do some block of code first,
    //                 Then repeat again if condition is true

    int num;

    do
    {
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    } while (num < 0);

    std::cout << "The number is " << num;

    return 0;
}