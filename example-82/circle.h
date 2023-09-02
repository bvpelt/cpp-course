#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "shape.h"



class Circle : public Shape
{
public:
    Circle() = default;

    Circle(double radius, const std::string &description) : Shape(description), radius(radius){

                                                                                };

    virtual ~Circle() {
        std::cout << "(Circle) destructor called" << std::endl;
    }

    virtual double perimeter() const override
    {
        return 2 * PI * radius;
    };

    virtual double surface() const override
    {
        return PI * radius * radius;
    };

private:
    double radius{0.0};

    inline static double PI{3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679};
};

#endif