#include <iostream>
#include <memory>
// one line comment

/*
A number of lines with
comments
*/

// Polymorphic
#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw_shape(Shape *s)
{
    s->draw();
}

int main(int argc, char **argv)
{
    // Polymorphism

    std::cout << "Polymorphism - overriding" << std::endl;

    Shape shape("Shape");
    Oval oval(2.0, 3.5, "Oval");
    Circle circle(4.4, "Circle");

    std::cout << "Calling draw objects from a collection: dynamic binding" << std::endl;
    Shape *shape_collection[]{&shape, &oval, &circle};

    for (Shape *s : shape_collection)
    {
        s->draw();
    }

    Circle circle1(7.2, "circle1");
    Oval oval1(13.3, 1.2, "oval1");
    Circle circle2(11.2, "circle2");
    Oval oval2(31.3, 15.2, "oval2");
    Circle circle3(12.2, "circle3");
    Oval oval3(53.3, 9.2, "oval3");

    Shape shapes1[]{circle1, oval1, circle2, oval2, circle3, oval3};
    for (Shape &s : shapes1)
    {
        std::cout << "Inside array with copies, sizeof(shape): " << sizeof(s) << std::endl;
        s.draw();
        std::cout << std::endl;
    }

    Shape *shapes2[]{&circle1, &oval1, &circle2, &oval2, &circle3, &oval3};
    for (Shape *s : shapes2)
    {
        std::cout << "Inside array with references, sizeof(shape): " << sizeof(*s) << std::endl;
        s->draw();
        std::cout << std::endl;
    }

    // Using smart pointers
    std::shared_ptr<Shape> shapes3[]{std::make_shared<Circle>(44.4, "circle4"), std::make_shared<Oval>(10.0, 20.0, "oval4")};
    for (auto &s : shapes3)
    {
        std::cout << "Inside array with smart pointers, sizeof(shape): " << sizeof(*s) << std::endl;
        s->draw();
        std::cout << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;

    return 0;
}