#include <iostream>

#include <iomanip>
#include <string>

// one line comment

/*
A number of lines with
comments
*/

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main(int argc, char **argv)
{
    // Conditional programming

    int tool{Ellipse};

    if (tool == Pen)
    {
        std::cout << "Active tool is Pen " << std::endl;
    }
    else if (tool == Marker)
    {
        std::cout << "Active tool is Marker " << std::endl;
    }
    else if (tool == Eraser)
    {
        std::cout << "Active tool is Eraser " << std::endl;
    }
    else if (tool == Rectangle)
    {
        std::cout << "Active tool is Rectangle " << std::endl;
    }
    else if (tool == Circle)
    {
        std::cout << "Active tool is Circle " << std::endl;
    }
    else if (tool == Ellipse)
    {
        std::cout << "Active tool is Ellipse " << std::endl;
    }
    std::cout << std::endl;

    // Switch
    switch (tool)
    {
    case Pen:
        std::cout << "Active tool is Pen " << std::endl;
        break;
    case Marker:
        std::cout << "Active tool is Marker " << std::endl;
        break;
    case Eraser:
        std::cout << "Active tool is Eraser " << std::endl;
        break;
    case Rectangle:
        std::cout << "Active tool is Rectangle " << std::endl;
        break;
    case Circle:
        std::cout << "Active tool is Circle " << std::endl;
        break;
    case Ellipse:
        std::cout << "Active tool is Ellipse " << std::endl;
        break;
    default:
        std::cout << "Active tool is unknown " << std::endl;
        break;
    }
    std::cout << std::endl;

    // Ternairy operator
    int max{};
    int a{35};
    int b{20};
    int min_speed{a < b ? a : b};
    auto min_val{(a < b) ? a : 22.5434534f};

    max = (a > b) ? a : b;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "max: " << max << std::endl;
    std::cout << "min_speed: " << min_speed << std::endl;
    std::cout << "min_val: " << min_val << " sizeof min_val: " << sizeof(min_val) << std::endl; // conversion int -> float
    min_val = (a < b) ? a : 22.5434534f;
    std::cout << "min_val: " << min_val << " sizeof min_val: " << sizeof(min_val) << std::endl; // conversion int -> float
    std::cout << std::endl;

    return 0;
}