#include <iostream>

#include <iomanip>
#include <string>
#include <limits>

// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    // Dangling pointer
    // A pointer that doesn't point to a valid address
    // Resulting in undefined behaviour
    //
    // Reasons:
    // - uninitialized pointer
    // - deleted pointer
    // - multiple pointers to the same location
    //

    int *p_number; // dangling uninitialized pointer, junk address

    std::cout << "1 - uninitialized pointer " << std::endl;
    std::cout << "p_number: " << p_number << " value: " << *p_number << std::endl;
    std::cout << std::endl;

    int *p_number1{new int{67}};
    std::cout << "2 - deleted pointer" << std::endl;
    std::cout << "p_number1 (before delete): " << p_number1 << " value: " << *p_number1 << std::endl;
    delete p_number1;
    std::cout << "p_number1 (after delete): " << p_number1 << " value: " << *p_number1 << std::endl;
    std::cout << std::endl;

    int *p_number2{new int{83}};
    int *p_number3{p_number2};
    std::cout << "3 - multiple pointers to same address " << p_number << std::endl;
    std::cout << "p_number2 (before delete): " << p_number2 << " value: " << *p_number2 << std::endl;
    std::cout << "p_number3 (before delete): " << p_number3 << " value: " << *p_number3 << std::endl;
    delete p_number2;
    std::cout << "p_number2 (after delete): " << p_number2 << " value: " << *p_number2 << std::endl;
    std::cout << "p_number3 (after delete): " << p_number3 << " value: " << *p_number3 << std::endl;
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;

    return 0;
}