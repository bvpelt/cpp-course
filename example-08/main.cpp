#include <iostream>
#include <iomanip>
// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    float f1{1.5};
    double d1{1.6};
    long double ld1{1.7};

    std::cout << "Value of f1: " << f1 << " sizeof f1: " << sizeof(f1) << std::endl;
    std::cout << "Value of d1: " << d1 << " sizeof d1: " << sizeof(d1) << std::endl;
    std::cout << "Value of ld1: " << ld1 << " sizeof ld1: " << sizeof(ld1) << std::endl;

    f1 = 1.23456789012345678901234567890f;
    d1 = 1.23456789012345678901234567890;
    ld1 = 1.23456789012345678901234567890L;

    std::cout << std::setprecision(28);

    std::cout << "Value of f1: " << f1 << " sizeof f1: " << sizeof(f1) << std::endl;
    std::cout << "Value of d1: " << d1 << " sizeof d1: " << sizeof(d1) << std::endl;
    std::cout << "Value of ld1: " << ld1 << " sizeof ld1: " << sizeof(ld1) << std::endl;

    float n1(192400023); // maximum of 7 digits in a float - compiler issue
    n1 = n1 + 1;
    std::cout << "n1: " << n1 << std::endl;

    float n2{1.92400023e8};
    std::cout << "n1: " << n1 << " n2: " << n2 << std::endl;
    std::cout << "n1 - n2: " << n1 - n2 << std::endl;

    return 0;
}