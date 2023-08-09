
#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{

public: // functions
    // Constructors
    Cylinder();

    Cylinder(double radius_param, double height_param);

    // Getters - return the private member fields
    double get_base_radius();

    double get_height();

    // Setters - modify the private member fields
    void set_base_radius(double radius_param);

    void set_heigth(double height_param);

    // Functions (methods)
    double volume();

    double area();

private: // member variables, not accessible from outside the class. By default members of a class are private
    double base_radius{1.0};
    double heigth{1.0};
};

#endif
