#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

// same function different parameters: function overloading
int max(int a, int b);
double max(double a, double b);
std::string max(const std::string &a, const std::string &b);

int main(int argc, char **argv)
{
    // Function overloading
    int i1{41};
    int i2{29};
    double d1{47.2};
    double d2{55.01};
    std::string s1{"Hello"};
    std::string s2{"World"};

    std::cout << "Using function overloading" << std::endl;
    std::cout << "max (" << i1 << ", " << i2 << "): " << max(i1, i2) << std::endl;
    std::cout << "max (" << 5 << ", " << 7 << "): " << max(5, 7) << std::endl;
    std::cout << "max (" << d1 << ", " << d2 << "): " << max(d1, d2) << std::endl;
    std::cout << "max (" << 5.5 << ", " << 7.99 << "): " << max(5, 7) << std::endl;
    std::cout << "max (" << s1 << ", " << s2 << "): " << max(s1, s2) << std::endl;
    std::cout << "max (dog, cat): " << max("dog", "cat") << std::endl;
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}

int max(int a, int b)
{
    std::cout << "max(int a, int b)" << std::endl;
    return (a > b) ? a : b;
}

/*
Can't overload on return type.  error: ambiguating new declaration of ‘double max(int, int)’
double max(int a, int b)
{
    return (a > b) ? a : b;
}
*/

double max(double a, double b)
{
    std::cout << "max(double a, double b)" << std::endl;
    return (a > b) ? a : b;
}

std::string max(const std::string &a, const std::string &b)
{
    std::cout << "max(const std::string &a, const std::string &b)" << std::endl;
    return (a > b) ? a : b;
}