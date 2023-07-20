#include <iostream>

#include <iomanip>
#include <string>
#include <limits>

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
    // Loops

    // Print 10 times a text line
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << std::endl;

    // For loop
    for (unsigned int i{}; i < 10; ++i)
    {
        std::cout << "i: " << i << " I love C++" << std::endl;
    }
    std::cout << std::endl;

    size_t j{};
    std::cout << "size of j: " << sizeof(j) << std::endl;
    std::cout << "The range for size_t is from: " << std::numeric_limits<size_t>::min() << " to: " << std::numeric_limits<size_t>::max() << std::endl;

    return 0;
}