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
    // Pointer to chars
    char *p_char{nullptr};
    char c{'A'};
    const char *message{"Hello World"};

    p_char = &c;

    std::cout << "The value stored in message is: " << message << std::endl;
    std::cout << std::endl;

    // *message = "B"; //compiler error
    std::cout << "The value stored in *message is: " << *message << std::endl;
    std::cout << std::endl;

    std::cout << "The value stored in p_char is: " << *p_char << std::endl;
    std::cout << std::endl;

    char c2{'C'};
    p_char = &c2;

    std::cout << "The value stored in p_char is: " << *p_char << std::endl;
    std::cout << std::endl;

    const char *p_message{"Hello World"}; // a valid c string as a character array. p_message points to first element of the array
    std::cout << "The message is: " << p_message << std::endl;
    std::cout << "The value of the message is stored at the first char of the p_message: " << *p_message << std::endl;
    std::cout << std::endl;

    char message2[]{"Hello there"};
    std::cout << "The message is: " << message2 << std::endl;
    std::cout << std::endl;

    message2[0] = 'T';
    std::cout << "The message is changed to: " << message2 << std::endl;
    return 0;
}