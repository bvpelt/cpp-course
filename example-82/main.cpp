#include <iostream>

// one line comment

/*
A number of lines with
comments
*/
#include "shape.h"
#include "rectangle.h"
#include "circle.h"

int main(int argc, char **argv)
{
    // Pure virtual functions and abstract classes

    std::cout << "Pure virtual functions and abstract classes" << std::endl;

    const Shape *shape_rect = new Rectangle(10, 10, "rect1");
    std::cout << "The surface of shape rect: " << shape_rect->get_description() << " is: " << shape_rect->surface() << std::endl;
    std::cout << "dynamic type of shape_rect is: " << typeid(*shape_rect).name() << std::endl;

    const Shape *shape_circle = new Circle(10, "circle1");
    std::cout << "The surface of shape circle " << shape_circle->get_description() << " is: " << shape_circle->surface() << std::endl;
    std::cout << "dynamic type of shape_circle is: " << typeid(*shape_circle).name() << std::endl;

    std::cout << std::endl;

    delete shape_rect;
    delete shape_circle;

    std::cout << "Program end" << std::endl;
    return 0;
}