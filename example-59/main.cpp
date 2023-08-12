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

    Player p1("Basketball");
    p1.set_first_name("John");
    p1.set_last_name("Snow");

    std::cout << "player: " << p1 << std::endl;

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}