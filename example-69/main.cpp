#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

#include "parent.h"
#include "child.h"

int main(int argc, char **argv)
{
    // Symbol names and inheritance

    std::cout << "Symbol names and inheritance" << std::endl;

    Parent parent;
    std::cout << "Parent" << std::endl;
    parent.print_var();

    Child child;
    std::cout << "Child" << std::endl;
    child.print_var();
    child.Parent::print_var(); // Force calling the method with same name but from the parent

    std::cout << "Child show_values()" << std::endl;
    child.show_values();

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}