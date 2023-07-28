#include <iostream>

#include <iomanip>
#include <string>
#include <limits>

// one line comment

/*
A number of lines with
comments
*/

int add_numbers(const int a, const int b)
{
    return a + b;
}

int main(int argc, char **argv)
{
    // Memory model
    // Virtual memory managed by mmu Memory management unit
    // All Operating Systems have there own memory map
    //
    // Sytem
    // Stack  - local variables, function calls
    // Heap   - additional memory that can be queued at run time
    // Data
    // Text   - executable probram
    //
    const int a{10};
    const int b{5};
    int c;

    std::cout << "Statement1" << std::endl;
    std::cout << "Statement2" << std::endl;
    c = add_numbers(a, b);
    std::cout << "Statement3" << std::endl;
    std::cout << "Statement4" << std::endl;
    std::cout << std::endl;

    return 0;
}