#include <iostream>
#include <iomanip>
#include <string>
// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{

    // Addition
    int n1{4};
    int n2{8};
    int sum01{n1 + n2};
    int sum02 = n1 + n2 + n1;

    std::cout << "Sum 01: " << sum01 << std::endl;
    std::cout << "Sum 02: " << sum02 << std::endl;

    // Subtraction
    int diff01(n1 - n2);
    int diff02 = n1 - n2 - n2;

    std::cout << "Diff 01: " << diff01 << std::endl;
    std::cout << "Diff 02: " << diff02 << std::endl;

    // Multiplication
    int prod01(n1 * n2);
    int prod02 = n1 * n2 * 2 * n2;

    std::cout << "Prod 01: " << prod01 << std::endl;
    std::cout << "Prod 02: " << prod02 << std::endl;

    // Divide
    int div01(n1 / n2);
    int div02 = n2 / n1 ;
    int div03 { n1 % n2};
    int div04 { n2 % n1};

    std::cout << "Div 01: " << div01 << std::endl;
    std::cout << "Div 02: " << div02 << std::endl;

    std::cout << "Mod 01: " << div03 << std::endl;
    std::cout << "Mod 02: " << div04 << std::endl;

    return 0;
}