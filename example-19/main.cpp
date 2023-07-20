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

    // Limits
    std::cout << "The range for short is from: " << std::numeric_limits<short>::min() << " to: " <<std::numeric_limits<short>::max() << std::endl;
    std::cout << "The range for unsigned short is from: " << std::numeric_limits<unsigned short>::min() << " to: " <<std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "The range for int is from: " << std::numeric_limits<int>::min() << " to: " <<std::numeric_limits<int>::max() << std::endl;
    std::cout << "The range for unsigned int is from: " << std::numeric_limits<unsigned int>::min() << " to: " <<std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "The range for long is from: " << std::numeric_limits<long>::min() << " to: " <<std::numeric_limits<long>::max() << std::endl;
    std::cout << "The range for float is from: " << std::numeric_limits<float>::min() << " to: " <<std::numeric_limits<float>::max() << std::endl;
    std::cout << "The range for double is from: " << std::numeric_limits<double>::min() << " to: " <<std::numeric_limits<double>::max() << std::endl;  
    std::cout << "The range for long double is from: " << std::numeric_limits<long double>::min() << " to: " <<std::numeric_limits<long double>::max() << std::endl;  
    
    std::cout << std::endl;


    std::cout << "int is signed: " << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "int number digits: " << std::numeric_limits<int>::digits << std::endl;
    std::cout << std::endl;

    return 0;
}