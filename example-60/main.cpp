#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

#include "player.h"

int main(int argc, char **argv)
{
    // Inheritance

    std::cout << "Inheritance" << std::endl;

    std::string sport("Football");
    Player p1("Basketball");
    Player p2(sport);
    Player p3("Hockey", "Pieter", "van der Zand");
    p3.first_name("Karel");

    std::cout << "player p1: " << p1 << std::endl;
    std::cout << "player p2: " << p2 << std::endl;
    std::cout << "player p3: " << p3 << std::endl;

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}