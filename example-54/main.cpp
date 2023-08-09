#include <iostream>

#include "cylinder.h"

// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
   // C++ Code over multiple files

    std::cout << "C++ Code over multiple files" << std::endl;

   
    Cylinder c4(2,3);
    std::cout << "radius c4: " << c4.get_base_radius() << std::endl;
    std::cout << "height c4: " << c4.get_height() << std::endl;
    std::cout << "volume c4: " << c4.volume() << std::endl;
    std::cout << "area   c4: " << c4.area() << std::endl;

    c4.set_base_radius(10);
    c4.set_heigth(10);
    std::cout << "radius c4: " << c4.get_base_radius() << std::endl;
    std::cout << "height c4: " << c4.get_height() << std::endl;
    std::cout << "volume c4: " << c4.volume() << std::endl;
    std::cout << "area   c4: " << c4.area() << std::endl;

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}