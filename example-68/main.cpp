#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main(int argc, char **argv)
{
    // Inheritance with destructors

    std::cout << "Inheritance with destructors" << std::endl;

    std::cout << std::endl;

    CivilEngineer civilEngineer;

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;

    return 0;
}