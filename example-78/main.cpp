#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

#include <iostream>

#include "base.h"
#include "derived.h"

int main(int argc, char **argv)
{
    // Virtual functions with default arguments

    std::cout << "Virtual functions with default arguments" << std::endl;

    Base base;
    Derived derived;
    Base &base_ref = derived;
    Base *base_ptr = new Derived;
    Base base_slice = derived;

    std::cout << "Base add: " << base.add() << std::endl;
    std::cout << "Base ptr: " << base_ptr->add() << std::endl;
    std::cout << "Base ref add: " << base_ref.add() << std::endl;
    std::cout << "Base slice add: " << base_slice.add() << std::endl;
    std::cout << "Derived add: " << derived.add() << std::endl;

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}