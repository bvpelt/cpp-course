#include <iostream>

// one line comment

/*
A number of lines with
comments
*/
#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw_shape(Shape *s)
{
    s->draw_shape();
}

int main(int argc, char **argv)
{
    // Polymorphism

    std::cout << "Polymorphism" << std::endl;

    Shape shape("Shape");
    Oval oval(2.0, 3.5, "Oval");
    Circle circle(4.4, "Circle");

    std::cout << "Calling methods from objects" << std::endl;
    shape.draw();
    oval.draw();
    circle.draw();

    std::cout << "Calling methods through pointers: static binding" << std::endl;

    Shape *shape_ptr = &shape;
    shape_ptr->draw();

    shape_ptr = &oval;
    shape_ptr->draw();

    shape_ptr = &circle;
    shape_ptr->draw();

    std::cout << "Calling methods through pointers: dynamic binding" << std::endl;
    shape_ptr = &shape;
    shape_ptr->draw_shape();

    shape_ptr = &oval;
    shape_ptr->draw_shape();

    shape_ptr = &circle;
    shape_ptr->draw_shape();

    std::cout << "Calling objects from common function: dynamic binding" << std::endl;
    draw_shape(&shape);
    draw_shape(&oval);
    draw_shape(&circle);

    std::cout << "Calling draw objects from a collection: dynamic binding" << std::endl;
    Shape *shape_collection[]{&shape, &oval, &circle};

    for (Shape *s : shape_collection)
    {
        s->draw_shape();
    }

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;

    return 0;
}