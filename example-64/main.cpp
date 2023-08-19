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
    // Inheritance - Access specifiers

    std::cout << "Inheritance - Access specifiers" << std::endl;
    
    CivilEngineer civilEngineer;
    std::cout << "CivilEngineer: " << civilEngineer << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}