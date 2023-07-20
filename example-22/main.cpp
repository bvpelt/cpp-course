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
    // bit shift operators
    short int var1{10}; // 2 bytes
    short int var2{20};

    char var3{40}; // 1 byte
    char var4{50};

    std::cout << "Size of var1: " << sizeof(var1) << std::endl;
    std::cout << "Size of var2: " << sizeof(var2) << std::endl;
    std::cout << "Size of var3: " << sizeof(var3) << std::endl;
    std::cout << "Size of var4: " << sizeof(var4) << std::endl;
    std::cout << std::endl;

    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    // The compiler only support additions with 4 bytes
    std::cout << "Size of result1: " << sizeof(result1) << std::endl;
    std::cout << "Size of result2: " << sizeof(result2) << std::endl;

    return 0;
}