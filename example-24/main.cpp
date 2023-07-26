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
    for (j; j < 10; ++j)
    {
        std::cout << "value of j, local scope: " << j << std::endl;
    }
    std::cout << "value of j, global scope: " << j << std::endl;
    std::cout << std::endl;

    for (size_t i{0}; i < 10; ++i)
    {
        std::cout << "I: " << i << ". Double that and you get: " << 2 * i << std::endl;
    }
    std::cout << std::endl;

    // best practice: define maximum number of iterations in a variable
    const size_t COUNT{10};
    for (size_t j{0}; j < COUNT; ++j) // initialize, condition, increment
    {
        std::cout << "The value of j: " << j << std::endl;
    }
    std::cout << std::endl;

    // While loop

    unsigned int k{0}; // initialize
    while (k < COUNT)  // condition
    {
        std::cout << "The value of k: " << k << std::endl;
        ++k; // increment
    }
    std::cout << std::endl;

    // Do while loop

    unsigned int m{5};
    do
    {
        std::cout << "The value of m: " << m << std::endl;
        ++m;
    } while (m < COUNT);
    std::cout << std::endl;

    return 0;
}