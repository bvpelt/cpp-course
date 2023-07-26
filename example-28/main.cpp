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
    // Pointers
    int var{22};
    int *p_var{&var};              // The address operator &
    int *p_number{};               // can only store an address of a variable of type int
    double *p_fractional_number{}; // can only store an address of a variable of type double
    int *p_number1{nullptr};       // explicitely initialize to nullprt
    double *p_fractional_number1{nullptr};

    std::cout << "Size of number pointer: " << sizeof(p_number) << ", size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of fractional_number pointer: " << sizeof(p_fractional_number) << ", size of double: " << sizeof(double) << std::endl;
    std::cout << "Size of number1 pointer: " << sizeof(p_number1) << ", size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of fractional_number1 pointer: " << sizeof(p_fractional_number1) << ", size of double: " << sizeof(double) << std::endl;
    std::cout << std::endl;

    int *p1, p2; // best practice declare variables on different lines
    std::cout << "Size of p1 pointer: " << sizeof(p1) << ", size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of p2: " << sizeof(p2) << ", size of int: " << sizeof(int) << std::endl;
    std::cout << std::endl;

    // Dereferencing a pointer
    std::cout << "var: " << var << " p_var: " << p_var << " value of p_var: " << *p_var << std::endl;
    std::cout << std::endl;

    return 0;
}