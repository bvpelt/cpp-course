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
    // Memory leaks
    int *p{new int{67}};

    int n{55}; // Stack variable

    p = &n; // The address of int{61} is no longer accessable - memory leak

    std::cout << "Program end" << std::endl;

    return 0;
}