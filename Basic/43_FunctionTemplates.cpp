#include <iostream>
template <typename K, typename L>

auto max(K x, L y)
{
    return (x > y) ? x : y;
}

int main()
{
    // function template = describes what a funtion looks like.
    //                     Can be used to generate as many overloaded funtions as needed,
    //                     each using different data types

    //                     Ex. "It's like a cookie-cutter..."
    //                     "Cookies are the same shape, but the dough used can be different"

    std::cout << max(1, 2.3) << '\n';

    return 0;
}