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

private: // member variables, not accessible from outside the class. By default members of a class are private
    double base_radius{1.0};
    double heigth{1.0};
};

class Cylinder_2
{

public: // functions
    // Constructors
    Cylinder_2() = default; // compiler will generate default empty constructor

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

private: // member variables, not accessible from outside the class. By default members of a class are private
    double base_radius{1.0};
    double heigth{1.0};
};

class Cylinder_3
{

public: // functions
    // Constructors
    Cylinder_3() = default; // compiler will generate default empty constructor

    Cylinder_3(double radius_param, double height_param)
    { // parameters passed by value
        base_radius = radius_param;
        heigth = height_param;
    }

    // Getters - return the private member fields
    double get_base_radius()
    {
        return base_radius;
    }

    double get_height()
    {
        return heigth;
    }

    // Setters - modify the private member fields
    void set_base_radius(double radius_param)
    {
        base_radius = radius_param;
    }

    void set_heigth(double height_param)
    {
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

private: // member variables, not accessible from outside the class. By default members of a class are private
    double base_radius{1.0};
    double heigth{1.0};
};

int main(int argc, char **argv)
{
    // Constructors

    std::cout << "Classes - constructors" << std::endl;

    Cylinder c1;
    std::cout << "volume c1: " << c1.volume() << std::endl;
    std::cout << "area   c1: " << c1.area() << std::endl;

    Cylinder c2(10, 4);
    std::cout << "volume c2: " << c2.volume() << std::endl;
    std::cout << "area   c2: " << c2.area() << std::endl;

    Cylinder_2 c3;
    std::cout << "volume c3: " << c3.volume() << std::endl;
    std::cout << "area   c3: " << c3.area() << std::endl;

    Cylinder_3 c4(2,3);
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