#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

#include "person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"

int main(int argc, char **argv)
{
    // Inheritance - Access specifiers

    std::cout << "Inheritance - Access specifiers" << std::endl;

    Person person1("Daniel Gray", 27, "Blue Sky st 233 #56");
    std::cout << "Person: " << person1 << std::endl;
    std::cout << std::endl;

    Player player;
    std::cout << "Player: " << player << std::endl;
    player.m_full_name = "Samual Jackson";
    std::cout << "Player: " << player << std::endl;
    // player.m_age = 12;                          error: ‘int Person::m_age’ is protected within this context
    // player.m_address = "invalid";               error: ‘std::string Person::m_address’ is private within this context

    Nurse nurse;
    std::cout << "Nurse: " << nurse << std::endl;
    nurse.treat_unwell_person();
    std::cout << "Nurse: " << nurse << std::endl;

    // nurse.m_full_name = "Lucy Davos";           error: ‘std::string Person::m_full_name’ is inaccessible within this context
    // nurse.m_age = 45;                           error: ‘int Person::m_age’ is protected within this contex

    Engineer engineer;
    std::cout << "Engineer: " << engineer << std::endl;
    engineer.build_something();
    std::cout << "Engineer: " << engineer << std::endl;
    // engineer.m_full_name = "Carl Oppenheimer";  error: ‘std::string Person::m_full_name’ is inaccessible within this context
    // engineer.m_age = 53;                        error: ‘int Person::m_age’ is protected within this context

    std::cout << "Program end" << std::endl;
    return 0;
}