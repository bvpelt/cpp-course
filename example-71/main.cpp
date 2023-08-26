#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

// Polymorphic
#include "shape.h"
#include "oval.h"
#include "circle.h"
// Static
#include "shape_s.h"
#include "oval_s.h"
#include "circle_s.h"

void draw_shape(Shape *s)
{
    s->draw();
}

void draw_shape_s(Shape_s *s)
{
    s->draw();
}

int main(int argc, char **argv)
{
    // Polymorphism

    std::cout << "Polymorphism - sizes" << std::endl;

    // Polymorphic
    Shape shape("Shape");
    Oval oval(2.0, 3.5, "Oval");
    Circle circle(4.4, "Circle");

    // Static
    Shape_s shape_s("Shape_s");
    Oval_s oval_s(2.0, 3.5, "Oval_s");
    Circle_s circle_s(4.4, "Circle_s");

    std::cout << "Calling draw objects from a collection: dynamic binding" << std::endl;
    Shape *shape_collection[]{&shape, &oval, &circle};
    Shape_s *shape_s_collection[]{&shape_s, &oval_s, &circle_s};

    for (Shape_s *s : shape_s_collection)
    {
        s->draw();
    }

    for (Shape *s : shape_collection)
    {
        s->draw();
    }

    // Sizeof and polymophism
    std::cout << "sizeof(Shape_s): " << sizeof(Shape_s) << " sizeof(Shape): " << sizeof(Shape) << std::endl;
    std::cout << "sizeof(Oval_s): " << sizeof(Oval_s) << " sizeof(Oval): " << sizeof(Oval) << std::endl;
    std::cout << "sizeof(Circle_s): " << sizeof(Circle_s) << " sizeof(Circle): " << sizeof(Circle) << std::endl;

    // Slicing
    Shape shape_slice = circle;
    Shape_s shape_s_slice = circle_s;
    std::cout << "sizeof(shape_s_slice): " << sizeof(shape_s_slice) << " sizeof(shape_slice): " << sizeof(shape_slice) << std::endl;

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;

    return 0;
}