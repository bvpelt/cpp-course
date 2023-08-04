#include <iostream>
#include <cstddef>
#include <concepts>
// one line comment

/*
A number of lines with
comments
*/

template <typename T>
void print_number(T n)
{
    static_assert(std::is_integral<T>::value, "Must pass in an integral argument");

    std::cout << "n: " << n << std::endl;
}

template <typename T>
    requires std::integral<T> // specify concept
T add(T a, T b)
{
    return a + b;
}

template <std::integral T>
T sub(T a, T b)
{
    return a - b;
}

// compile checks concept in parameter list
auto mul(std::integral auto a, std::integral auto b)
{
    return a * b;
}

template <typename T>
T mod(T a, T b)
    requires std::integral<T>
{
    return a % b;
}

int main(int argc, char **argv)
{
    // Concepts -- in c++ 20

    std::cout << "Concepts" << std::endl;
    int a{5};
    double b{34.5};

    print_number(a);
    //    print_number(b); error: static assertion failed: Must pass in an integral argument static_assert(std::is_integral<T>::value, "Must pass in an integral argument");

    auto result = add(a, a);
    // result = add(b,b); compiler error based on concept: note: constraints not satisfied In substitution of ‘template<class T>  requires  integral<T> T add(T, T) [with T = double]’:

    auto s1 = sub(a, a);
    std::cout << "s1: " << s1 << std::endl;
    auto m1 = mul(a, a);
    std::cout << "m1: " << m1 << std::endl;
    auto mod1 = mod(a, a);
    std::cout << "mod1: " << mod1 << std::endl;
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}