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
    // no arithmetic operations
    char c1{40};
    char c2{50};
    short int i{10};
    short int j{20};

    std::cout << "Size of c1: " << sizeof(c1) << std::endl;
    std::cout << "Size of c2: " << sizeof(c2) << std::endl;
    std::cout << "Size of i: " << sizeof(i) << std::endl;
    std::cout << "Size of j: " << sizeof(j) << std::endl;
    std::cout << std::endl;

    auto c3 = c1 + c2;
    auto k = i + j;

    std::cout << "Size of c3: " << sizeof(c3) << std::endl;
    std::cout << "Size of k: " << sizeof(k) << std::endl;

    return 0;
}