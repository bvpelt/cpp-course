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

    // Precedence: mvdwoa Mijnheer Van Dalen Wacht Op Antwoord

    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};

    // implicit precedence
    int result = a + b * c - d / e - f + g; // 6 + (3*8) - (9/3) - 2 + 5 = 6 + 24 - 3 - 2 + 5 = 30
    std::cout << "result: " << result << std::endl;

    result = a / b * c + d - e + f; // 16 + 9 - 3 + 2 = 24
    std::cout << "result: " << result << std::endl;

    // explicit precedence -- best practice
    result = a + (b * c) - (d / e) - f + g; // 6 + (3*8) - (9/3) - 2 + 5 = 6 + 24 - 3 - 2 + 5 = 30
    std::cout << "result (): " << result << std::endl;

    result = (a + b) * c - (d / e) - f + g; // (6 + 3)*8 - (9/3) - 2 + 5 = 9*8-3-2+5 = 72-3-2+5 = 72
    std::cout << "result (): " << result << std::endl;

    return 0;
}