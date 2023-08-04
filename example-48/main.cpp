#include <iostream>
#include <string>
#include <cstring>

// one line comment

/*
A number of lines with
comments
*/

/*
General syntax

template <typename T>
T maximum(T a, T b) {
    return (a>b)?a:b;
}
*/

// pass parameters by value
template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

// pass parameters by reference
template <typename T>
T multiply(const T &a, const T &b)
{
    return (a * b);
}

// Template specialization
// Specialization of generic template definition
template <>
const char *maximum<const char *>(const char *a, const char *b)
{
    return (std::strcmp(a, b) > 0) ? a : b;
}

int main(int argc, char **argv)
{
    // Function templates

    int a{10};
    int b{23};

    double c{34.7};
    double d{23.4};

    std::string e{"hello"};
    std::string f{"world"};    

    std::cout << "Using function templates" << std::endl;
    std::cout << "max(int)    of a: " << a << " b: " << b << ": " << maximum(a, b) << std::endl;
    std::cout << "max(double) of c: " << c << " d: " << d << ": " << maximum(c, d) << std::endl;
    std::cout << "max(string) of e: " << e << " f: " << f << ": " << maximum(e, f) << std::endl;
    std::cout << std::endl;

    std::cout << "multiply(int) of a: " << a << " b: " << b << ": " << multiply(a, b) << std::endl;
    std::cout << "multiply(double) of c: " << c << " d: " << d << ": " << multiply(c, d) << std::endl;
    /*
    std::cout << "multiply(string) of e: " << e << " f: " << f << ": " << multiply(e, f) << std::endl; error: no match for ‘operator*’ (operand types are ‘std::__cxx11::basic_string<char>’ and ‘std::__cxx11::basic_string
    */

    // works through explicit typing
    std::cout << "<double>max()    of a: " << a << " c: " << c << ": " << maximum<double>(a, c) << std::endl;
    std::cout << std::endl;
    /*
    maximum(a,c);  error: no matching function for call to ‘maximum(int&, double&)’
    */

    auto result = maximum(a, b);

    const char *g{"wild"};
    const char *h{"animal"};
    std::cout << "max(string) of g: " << g << " h: " << h << ": " << maximum(g, h) << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}
