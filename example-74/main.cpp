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

void draw_shape(Shape *s)
{
    s->draw();
}

int main(int argc, char **argv)
{
    // Polymorphism

    std::cout << "Polymorphism - overriding and hiding" << std::endl;

    Shape shape("Shape");
    Oval oval(2.0, 3.5, "Oval");
    Circle circle(4.4, "Circle");

    shape.draw();
    shape.draw(44);
    shape.draw(44, 55);
    oval.draw();
    //oval.draw(44); //if not overwritten error: no matching function for call to ‘Oval::draw(int)’
    oval.draw(44, 55);
    circle.draw();
    //circle.draw(44); //if not overwritten error: no matching function for call to ‘Circle::draw(int)’
    circle.draw(44, 55);

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;

    return 0;
}