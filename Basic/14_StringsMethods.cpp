#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    /*if (name.length() > 12)   // name.length() = tells the sting length.
    {
        std::cout << "Your name can't be over 12 characters";
    }
    else
    {
        std::cout << "Welcome " << name;
    }*/

    /*if (name.empty())       // name.empty() = tells if string is empty.
    {
        std::cout << "You didn't enter your name";
    }
    else
    {
        std::cout << "Hello " << name;
    }*/

    // name.clear();       // name.clear() = clears the string.

    // std::cout << "Hello " << name;

    // name.append("@gmail.com");     // name.append("") = adds character in string.

    // std::cout << "Your username is now " << name;

    // std::cout << name.at(0);      // name.at(index number) = tells the character at that index number.

    // name.insert(0, "@");     // name.insert(index number, "anything") = adds the character at that index number.

    // std::cout << name;

    // std::cout << name.find(' ');   // name.find('character') = finds the index number of the character.

    // name.erase(0, 4);  // name.erase(1st index number,2nd index number) = erases the character from first index number to second index number.

    std::cout << name;

    return 0;
}