#include <iostream>

#include <iomanip>
#include <string>
#include <cmath>
// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    // Math
    double weight{7.7};
    double savings{-5000};

    // floor
    std::cout << "Rounded weight: " << std::floor(weight) << std::endl;
    // ceil
    std::cout << "Rounded weight: " << std::ceil(weight) << std::endl;
    std::cout << std::endl;

    std::cout << "Abs weight: " << std::abs(weight) << std::endl;
    std::cout << "Abs savings: " << std::abs(savings) << std::endl;

    // expression: f(x) = e ^ x, where e=2.71828
    double exp = std::exp(10);
    std::cout << "e^10: " << exp << std::endl;

    // pow
    std::cout << "3 ^ 4: " << std::pow(3,4) << std::endl;
    std::cout << "9 ^ 3: " << std::pow(9,3) << std::endl;

    // log
    std::cout << "log(54.59): " << std::log(54.59) << std::endl;
    std::cout << "log(1000): " << std::log(1000) << std::endl;
    std::cout << "log10(1000): " << std::log10(1000) << std::endl;

    // sqrt
    std::cout << "square root of 81: " << std::sqrt(81) << std::endl;    
    std::cout << "square root of 81: " << std::sqrt(-81) << std::endl;

    // round, halfway point are rounded to above 0.5 -> 1
    std::cout << "0.5 rounded: " << std::round(0.5) << std::endl;    
    
    return 0;
}