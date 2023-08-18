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

    Person person("Daniel Gray", 27, "Blue Sky st 233 #56");
    std::cout << "Person: " << person << std::endl;
    std::cout << std::endl;

    Engineer engineer;
    std::cout << "Engineer: " << engineer << std::endl;
    engineer.build_something();
    std::cout << "Engineer: " << engineer << std::endl;
    // engineer.m_full_name = "Carl Oppenheimer";  error: ‘std::string Person::m_full_name’ is inaccessible within this context
    // engineer.m_age = 53;                        error: ‘int Person::m_age’ is protected within this context

    CivilEngineer civilEngineer;
    std::cout << "CivilEngineer: " << civilEngineer << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}