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
    // Inheritance - Own constructurs

    std::cout << "Inheritance - Own constructors" << std::endl;

    Person  person("John Snow", 27, "Winterfell Cold 33St#75");
    std::cout << "person: " << person << std::endl;    

    Engineer engineer("Daniel Gray", 41, "Green Sky Oh Blue 33St#75", 12);
    std::cout << "engineer: " << engineer << std::endl;    

    CivilEngineer civilEngineer("John Travolta", 51, "Tiny Dog 42St#89", 31, "Road Strength");
    std::cout << "CivilEngineer: " << civilEngineer << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}