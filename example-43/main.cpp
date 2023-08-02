#include <iostream>
#include "comparisons.h"

// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    // Function declaration & Definition
    // Sometimes one wants to seperate function declaration and implementation

    int a{3};
    int b{4};

    std::cout << "Using functions" << std::endl;
    std::cout << "max(" << a <<", "<<b<<"): " << max(a,b) << std::endl;
    std::cout << "min(" << a <<", "<<b<<"): " << min(a,b) << std::endl;
    
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}