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

    // Relational operators

    int number1{45};
    int number2{60};

    std::cout << "number1: " << number1 << std::endl;
    std::cout << "number2: " << number2 << std::endl;
    std::cout << std::endl;

    std::cout << "Comparing variables" << std::endl;
    std::cout << std::boolalpha; // Make bool show up as true/false instead of 1/0


    std::cout << "number1 < number2: " << (number1 < number2) << std::endl;
    std::cout << "number1 <= number2: " << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2: " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2: " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2: " << (number1 == number2) << std::endl;

    std::cout << "number1 != number2: " << (number1 != number2) << std::endl;

    return 0;
}