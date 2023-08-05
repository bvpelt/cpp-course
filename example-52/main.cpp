#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

// Model Cylinder
// by radius and height
// - Area = pi * r^2
// - Volume = Area * height
//
const double PI{3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679};

class Cylinder
{
public: // member variables, accessible from outside the class. By default members of a class are private
    double base_radius{1.0};
    double heigth{1.0};

public: // functions
    double volume()
    {
        return heigth * area();
    }

    double area()
    {
        return PI * base_radius * base_radius;
    }
};

int main(int argc, char **argv)
{
    // Classes
    std::cout << "Classes" << std::endl;

    Cylinder c1;
    std::cout << "volume c1: " << c1.volume() << std::endl;
    std::cout << "area c1: " << c1.area() << std::endl;

    c1.base_radius = 3.0;
    c1.heigth = 2;
    std::cout << "volume c1: " << c1.volume() << std::endl;
    std::cout << "area c1: " << c1.area() << std::endl;

    Cylinder c2;
    std::cout << "volume c2: " << c2.volume() << std::endl;
    std::cout << "area c2: " << c2.area() << std::endl;

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}