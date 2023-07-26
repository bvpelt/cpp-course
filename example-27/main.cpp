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
    // Array Bounds
    int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // Read beyond the bounds: Will read garbage or crash the program
    std::cout << "numbers[12]: " << numbers[12] << std::endl;
    std::cout << std::endl;

    // write beyond bounds. The compiler allows it. But you don't own
    // the memory at index 12, so other programs may modify it and your
    // program may read bogus data at a later time, or can even
    // corrupt data used by other parts of your program
    // numbers[12] = 1000;


    // best practice: only access arrays within their bounds
    return 0;
}