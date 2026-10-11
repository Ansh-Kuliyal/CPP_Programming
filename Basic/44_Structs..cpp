#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled;
};

int main()
{
    // struct = A structure that group elated variables under one name
    //          structs can contain many different data types (strings, integer, double, book, etc.)
    //          variables in a struct are known as "members"
    //          members can be access with . "CLass Member ACcess Operator"

    student student1;
    student1.name = "Sponge Bob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    std::cout<<student1.name<<'\n';
    std::cout<<student1.gpa<<'\n';
    std::cout<<student1.enrolled<<'\n';

    return 0;
}