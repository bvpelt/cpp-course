#include "cylinder.h"
#include "constants.h"

Cylinder::Cylinder() = default; // compiler will generate default empty constructor

Cylinder::Cylinder(double radius_param, double height_param)
{ // parameters passed by value
    base_radius = radius_param;
    heigth = height_param;
}

// Getters - return the private member fields
double Cylinder::get_base_radius()
{
    return base_radius;
}

double Cylinder::get_height()
{
    return heigth;
}

// Setters - modify the private member fields
void Cylinder::set_base_radius(double radius_param)
{
    base_radius = radius_param;
}

void Cylinder::set_heigth(double height_param)
{
    heigth = height_param;
}

// Functions (methods)
double Cylinder::volume()
{
    return heigth * area();
}

double Cylinder::area()
{
    return PI * base_radius * base_radius;
}
