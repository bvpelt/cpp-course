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

    // Increment / Decrement
    int value{5};

    value = value + 1;
    std::cout << "value: " << value << std::endl;

    value = 5;

    value = value - 1;
    std::cout << "value: " << value << std::endl;

    // Post and prefix increment/decrement
    value = 5;
    std::cout << "value before (post incrementing): " << value++ << std::endl;
    std::cout << "value after (post increment): " << value << std::endl;
    std::cout << std::endl;

    value = 5;
    std::cout << "value before (post decrementing): " << value-- << std::endl;
    std::cout << "value after (post decrement): " << value << std::endl;
    std::cout << std::endl;

    value = 5;
    std::cout << "value before (pre incrementing): " << --value << std::endl;
    std::cout << "value after (pre increment): " << value << std::endl;
    std::cout << std::endl;

    value = 5;
    std::cout << "value before (pre decrementing): " << --value << std::endl;
    std::cout << "value after (pre decrement): " << value << std::endl;
    std::cout << std::endl;

    value = 5;
    std::cout << "value before (pre decrementing post increment): " << (--value)++ << std::endl;
    std::cout << "value after (pre decrement): " << value << std::endl;
    std::cout << std::endl;

    /* compiler error
    value = 5;
    std::cout << "value before (pre decrementing post increment): " << --(value++) << std::endl;
    std::cout << "value after (pre decrement): " << value << std::endl;
    std::cout << std::endl;
    */

   
    return 0;
}