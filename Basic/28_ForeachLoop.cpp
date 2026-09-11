#include <iostream>

int main()
{
    // foreach loop = loop that eases the transversal over an iterable data set

    int marks[] = {70, 80, 67, 69, 100};

    for (int mark : marks)
    {
        std::cout << mark << '\n';
    }

    return 0;
}