#include <iostream>
#include <concepts>

// one line comment

/*
A number of lines with
comments
*/

std::integral auto add(std::integral auto a, std::integral auto b)
{
    return a + b;
}

int main(int argc, char **argv)
{
    // Arrays

    int a{7};
    int b{13};

    std::cout << "Concepts and auto" << std::endl;
    std::cout << "add(" << a << ", " << b << "): " << add(a, b) << std::endl;
    std::integral auto x = add(a, b);
    std::cout << "add(" << a << ", " << b << "): " << x << std::endl;

    // Compiler error overriding return type to floating point
    // std::floating_point auto y = add(a,b);

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}