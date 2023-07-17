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

    // Compount assignment operator
    
    int value{45};

    std::cout << "value: " << value << std::endl;
    std::cout << std::endl;

    value += 5; // value = value + 5
    std::cout << "value (after +=5): " << value << std::endl;
    std::cout << std::endl;

    value -= 5; // value = value - 5
    std::cout << "value (after -=5): " << value << std::endl;
    std::cout << std::endl;

    value *= 2; // value = value * 2
    std::cout << "value (after *=2): " << value << std::endl;
    std::cout << std::endl;

    value /= 3; // value = value / 3
    std::cout << "value (after /=3): " << value << std::endl;
    std::cout << std::endl;

    value %= 11; // value = value % 11
    std::cout << "value (after %=5): " << value << std::endl;
    std::cout << std::endl;

    return 0;
}