#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "shape.h"

class Rectangle : public Shape
{
public:
    Rectangle() = default;

    Rectangle(double width, double heigth, const std::string &description) : Shape(description), width(width), heigth(heigth){

                                                                                                               };

    virtual ~Rectangle()
    {
        std::cout << "(Rectangle) destructor called" << std::endl;
    };

    virtual double perimeter() const override
    {
        return 2 * (width + heigth);
    };

    virtual double surface() const override
    {
        return (width * heigth);
    };

private:
    double width{0.0};
    double heigth{0.0};
};

#endif