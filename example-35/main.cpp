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
    // Declare and use References
    int var{33};
    double dvar{33.65};

    int &ref_var{var};  // int& some_ref; is invalid initialization is required!!!!
    int &ref_var2 = var;
    double &ref_dvar{dvar};

    std::cout << "var: " << var << std::endl;
    std::cout << "dvar: " << dvar << std::endl;
    std::cout << "ref_var: " << ref_var << std::endl;
    std::cout << "ref_var2: " << ref_var2 << std::endl;
    std::cout << "ref_dvar: " << ref_dvar << std::endl;
    std::cout << "&var: " << &var << std::endl;
    std::cout << "&dvar: " << &dvar << std::endl;
    std::cout << "&ref_var: " << &ref_var << std::endl;
    std::cout << "&ref_var2: " << &ref_var2 << std::endl;
    std::cout << "&ref_dvar: " << &ref_dvar << std::endl;

    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(int&): " << sizeof(int&) << std::endl;
    std::cout << "sizeof(ref_var): " << sizeof(ref_var) << std::endl;

    ref_var = 55;
    ref_dvar = 9.99;

    std::cout << "var: " << var << std::endl;
    std::cout << "dvar: " << dvar << std::endl;
    std::cout << "ref_var: " << ref_var << std::endl;
    std::cout << "ref_var2: " << ref_var2 << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}