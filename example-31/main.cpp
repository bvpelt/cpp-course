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
    //
    // Dynamic memory allocation
    // Allocate memory from the heap
    //

    int *p_number{nullptr};
    p_number = new int; // Allocate dynamic memory on the heap

    *p_number = 77; // write to dynamic allocated memory

    std::cout << "*p_number: " << *p_number << std::endl;
    std::cout << std::endl;

    // Best practice
    delete p_number;    // After usage explicitly release allocated heap memory
    p_number = nullptr; // And give the pointer an explicit null value

    int *p_number1{new int};     // Dynamic memory allocated on the heap, but not initialized
    int *p_number2{new int(22)}; // Dynamic memory allocated on the head using direct initialization
    int *p_number3{new int{23}}; // Dynamic memory allocated on the head using uniform initialization
    std::cout << "*p_number1: " << *p_number1 << std::endl;
    std::cout << "*p_number2: " << *p_number2 << std::endl;
    std::cout << "*p_number3: " << *p_number3 << std::endl;
    std::cout << std::endl;

    delete p_number1;
    p_number1 = nullptr;

    delete p_number2;
    p_number2 = nullptr;

    delete p_number3;
    p_number3 = nullptr;

    std::cout << "Program end" << std::endl;

    return 0;
}