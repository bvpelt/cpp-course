#include <iostream>

// one line comment

/*
A number of lines with
comments
*/
#include <iostream>
#include <memory>

#include "shape.h"
#include "ellipse.h"

int main(int argc, char **argv)
{
    // Polymorphism - with static members

    std::cout << "Polymorphism - with static members" << std::endl;
    Shape shape1("shape1");
    std::cout << "shape count: " << Shape::m_count << std::endl; // expect 1

    Shape shape2("shape2");
    std::cout << "shape count: " << Shape::m_count << std::endl; // expect 2

    Shape shape3("shape3");
    std::cout << "shape count: " << Shape::m_count << std::endl; // expect 3

    Ellipse ellipse1(10, 12, "ellipse1");
    std::cout << "shape count: " << Shape::m_count << std::endl;     // expect 4
    std::cout << "ellipse count: " << Ellipse::m_count << std::endl; // expect 1

    Shape *myshapes[]{&shape1, &ellipse1};

    for (auto &s : myshapes)
    {
        std::cout << "shape: " << s->get_description() << " count: " << s->get_count() << std::endl;
    }

    std::shared_ptr<Shape> shapes[]{
        std::make_shared<Ellipse>(10, 10, "ellipse_at_0"),
        std::make_shared<Ellipse>(12, 43, "ellipse_at_1")};

    std::cout << "shape count: " << Shape::m_count << std::endl;     // expect 6
    std::cout << "ellipse count: " << Ellipse::m_count << std::endl; // expect 3

    Shape *shape4 = new Shape("shape4");
    Ellipse *ellipse4 = new Ellipse(33, 44, "ellipse4");
    std::cout << "shape count: " << Shape::m_count << std::endl;     // expect 8
    std::cout << "ellipse count: " << Ellipse::m_count << std::endl; // expect 4

    delete shape4;
    delete ellipse4;

    std::cout << "shape count: " << Shape::m_count << std::endl;     // expect 6
    std::cout << "ellipse count: " << Ellipse::m_count << std::endl; // expect 3

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}