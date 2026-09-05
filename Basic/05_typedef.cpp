#include <iostream>

//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main()
{
    // typedef = reserved keyword used to create an additional name (alias) for another data type.
    //           New identifier for an existing type
    //           Helps readability and reduces typos
    //           Use when there is a clear benefit
    //           Replaced with 'using' (work better w/ templetes)

    text_t firstName = "Void";
    number_t age = 18;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}