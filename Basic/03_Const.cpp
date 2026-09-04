#include <iostream>

int main()
{
    // The const keyword specifies that a variable's value is constant 
    // tells the compiler to prevent anything from modifying it
    // (real only)

    const double pi = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 2 ;

    std::cout<<pi<<"cm"<<'\n';
    std::cout<<LIGHT_SPEED<<"m/s"<<'\n';
    std::cout<<WIDTH<<"cm"<<'\n';

    return 0;
}