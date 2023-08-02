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
    // References and const
    // Non const reference
    int age{27};
    int &ref_age{age};

    std::cout << "age: " << age << std::endl;
    std::cout << "ref_age: " << ref_age << std::endl;
    std::cout << std::endl;

    std::cout << "Modify age throug reference ref_age++ " << std::endl;
    ref_age++;
    std::cout << "age: " << age << std::endl;
    std::cout << "ref_age: " << ref_age << std::endl;
    std::cout << std::endl;

    ref_age = 99;
    std::cout << "age: " << age << std::endl;
    std::cout << "ref_age: " << ref_age << std::endl;
    std::cout << std::endl;

    // Const reference
    const int &const_ref_age{age};
    std::cout << "Assiging const reference " << std::endl;
    std::cout << "age: " << age << std::endl;
    std::cout << "ref_age: " << ref_age << std::endl;
    std::cout << "const_ref_age: " << const_ref_age << std::endl;
    std::cout << std::endl;

    // const_ref_age = 12; compiler error --  error: assignment of read-only reference ‘const_ref_age’
    const int *const const_ptr_to_const_age{&age};
    std::cout << "Assiging const pointer to const age " << std::endl;
    std::cout << "age: " << age << std::endl;
    std::cout << "ref_age: " << ref_age << std::endl;
    std::cout << "const_ref_age: " << const_ref_age << std::endl;
    std::cout << "const_ptr_to_const_age: " << *const_ptr_to_const_age << std::endl;
    std::cout << std::endl;

    // *const_ptr_to_const_age = 11; compiler error -- error: assignment of read-only location ‘*(const int*)const_ptr_to_const_age’

    std::cout << "Program end" << std::endl;
    return 0;
}