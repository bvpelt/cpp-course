#include <iostream>
#include <iomanip>
#include <string>
// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{

    // Logical operators

    bool b1{true};
    bool b2{false};

    std::cout << std::boolalpha;
    std::cout << "b1: " << b1 << std::endl;
    std::cout << "b2: " << b2 << std::endl;
    std::cout << std::endl;

    std::cout << "Comparing variables" << std::endl;
    std::cout << std::boolalpha;

    std::cout << "b1 && b2: " << (b1 && b2) << std::endl;
    std::cout << "b1 || b2: " << (b1 || b2) << std::endl;
    std::cout << "!b1: " << !b1 << " b2: " << !b2 << std::endl;

    return 0;
}