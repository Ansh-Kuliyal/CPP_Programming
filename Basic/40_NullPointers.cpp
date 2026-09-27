#include <iostream>

int main()
{
    // Null value = a special value that means something has no value.
    //              When a pointers is holding a null value,
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = a keyword represent a null pointer literal

    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "Address was not assigned!\n";
    }
    else
    {
        std::cout << "Adress was assigned!\n";
        std::cout << *pointer;
    }

    return 0;
}