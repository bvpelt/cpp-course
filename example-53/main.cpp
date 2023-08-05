#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

const double PI{3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679};

class Cylinder
{

public: // functions
    // Constructors
    Cylinder() // default constructor, called when instantiating a variable without parameters
    {
        base_radius = 2.0;
        heigth = 2.0;
    }

    Cylinder(double radius_param, double height_param)
    { // parameters passed by value
        base_radius = radius_param;
        heigth = height_param;
    }

    // Functions (methods)
    double volume()
    {
        return heigth * area();
    }

    double area()
    {
        return PI * base_radius * base_radius;
    }

private: // member variables, accessible from outside the class. By default members of a class are private
    double base_radius{1.0};
    double heigth{1.0};
};

class Cylinder_2
{

public: // functions
    // Constructors
    Cylinder_2() = default; // compiler will generate code

    Cylinder_2(double radius_param, double height_param)
    { // parameters passed by value
        base_radius = radius_param;
        heigth = height_param;
    }

    // Functions (methods)
    double volume()
    {
        return heigth * area();
    }

    double area()
    {
        return PI * base_radius * base_radius;
    }

private: // member variables, accessible from outside the class. By default members of a class are private
    double base_radius{1.0};
    double heigth{1.0};
};

int main(int argc, char **argv)
{
    // Constructors

    std::cout << "Classes - constructors" << std::endl;

    Cylinder c1;
    std::cout << "volume c1: " << c1.volume() << std::endl;
    std::cout << "area c1: " << c1.area() << std::endl;

    Cylinder c2(10, 4);
    std::cout << "volume c2: " << c2.volume() << std::endl;
    std::cout << "area c2: " << c2.area() << std::endl;

    Cylinder_2 c3;
    std::cout << "volume c3: " << c3.volume() << std::endl;
    std::cout << "area c3: " << c3.area() << std::endl;

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}