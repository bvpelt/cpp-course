#include <iostream>
#include <string>

// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    // std::string, hi level implementation of a string
    // simular operations like on c-strings

    std::string full_name; // empty string
    std::string planet{"Earth. Where the sky is blue"};
    std::string prefered_planet{planet};
    std::string message{"Hello there", 5}; // Initialize with 5 chars of the supplied string - "Hello"
    std::string weird_message(4, 'e');     // Initialize with 4 copies of char 'e' - "eeee"
    std::string greeting{"Hello World"};
    std::string saying_hello{greeting, 6, 5}; // initialize with greeting starting a index 6, taking 5 chars "World"

    std::cout << "full_name: " << full_name << std::endl;
    std::cout << "planet: " << planet << std::endl;
    std::cout << "prefered_planet: " << prefered_planet << std::endl;
    std::cout << "message: " << message << std::endl;
    std::cout << "weird_message: " << weird_message << std::endl;
    std::cout << "greeting: " << greeting << std::endl;
    std::cout << "saying_hello: " << saying_hello << std::endl;
    std::cout << std::endl;

    // std::string expands the storage for the string
    planet = "The planet is a very long string exceeding the length of the original value of the planet";
    std::cout << "planet: " << planet << std::endl;
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}