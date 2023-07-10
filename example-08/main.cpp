#include <iostream>
#include <iomanip>
// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    float f1{1.5f};
    double d1{1.6};
    long double ld1{1.7L};

    std::cout << "Value of f1: " << f1 << " sizeof f1: " << sizeof(f1) << std::endl;     //  7 digits
    std::cout << "Value of d1: " << d1 << " sizeof d1: " << sizeof(d1) << std::endl;     // 15'ish digits
    std::cout << "Value of ld1: " << ld1 << " sizeof ld1: " << sizeof(ld1) << std::endl; // 15+ digits

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

    f1 = 10.01f;
    float r1;

    r1 = f1 / 0.0f;
    std::cout << "f1: " << f1 << " f1/0.0f: " << r1 << std::endl;

    f1 = 0.0f;
    r1 = f1 / 0.0f;
    std::cout << "f1: " << f1 << " f1/0.0f: " << r1 << std::endl;

    double n10{5.6};
    double n11{}; // initialized to 0
    double n12{}; // initialized to 0

    // Positive Infinity
    std::cout << "Positive infinity" << std::endl;
    double result{n10 / n11};
    std::cout << n10 << "/" << n11 << " yields: " << result << std::endl;
    std::cout << result << " + " << n10 << " yields: " << result + n10 << std::endl;

    // Negative Infinity
    std::cout << "Negative infinity" << std::endl;
    n10 = -5.6;
    result= n10 / n11;
    std::cout << n10 << "/" << n11 << " yields: " << result << std::endl;
    std::cout << result << " + " << n10 << " yields: " << result + n10 << std::endl;

    // Nan
    result = n11 / n12;
    std::cout << n11 << "/" << n12 << " yields: " << result << std::endl;
    std::cout << result << " + " << n10 << " yields: " << result + n10 << std::endl;

    return 0;
}