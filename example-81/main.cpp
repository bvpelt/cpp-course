#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

#include "derived.h"

int main(int argc, char **argv)
{
    // Don't call virtual (polymorphic) functions from constructors & destructors

    std::cout << "Don't call virtual (polymorphic) functions from constructors & destructors" << std::endl;

    Base *b = new Derived;
    std::cout << "Value is: " << b->get_value() << std::endl; // expect 100 when derived setup is called, but base::setup is called giving 10

    b->setup();
    std::cout << "Value is: " << b->get_value() << std::endl; // expect 100 when derived setup is called

    b->clean_up();
    std::cout << "Value is: " << b->get_value() << std::endl; // expect 0 when base clean_up is called

    std::cout << std::endl;
    delete b;

    std::cout << "Program end" << std::endl;
    return 0;
}