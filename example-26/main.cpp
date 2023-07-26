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
    // Arrays
    char message[]{'H', 'e', 'l', 'l', 'o'};
    char message1[]{'H', 'e', 'l', 'l', 'o', 0};
    char message2[6]{'H', 'e', 'l', 'l', 'o'}; // 6th char is initialized to 0
    char message3[]{'H', 'e', 'l', 'l', 'o'};  // not a valid c string, since not terminated with 0
    char message4[]{"Hello"};                  // An implicit 0 is appended to make this a valid c string
    char message5[]{"Hello  World     "};      // An implicit 0 is appended to make this a valid c string, after all the trailing spaces
    int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    std::cout << "message: ";
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "message1: " << message1 << std::endl;
    std::cout << "size: " << std::size(message1) << std::endl;
    std::cout << std::endl;

    std::cout << "message2: " << message2 << std::endl;
    std::cout << "size: " << std::size(message2) << std::endl;
    std::cout << std::endl;

    std::cout << "message3: " << message3 << std::endl;
    std::cout << "size: " << std::size(message3) << std::endl;
    std::cout << std::endl;

    std::cout << "message4: " << message4 << std::endl;
    std::cout << "size: " << std::size(message4) << std::endl;
    std::cout << std::endl;

    std::cout << "message5: " << message5 << std::endl;
    std::cout << "size: " << std::size(message5) << std::endl;
    std::cout << std::endl;

    std::cout << "numbers: ";
    for (auto n : numbers)
    {
        std::cout << n;
    }
    std::cout << std::endl;
    std::cout << "size: " << std::size(numbers) << std::endl;
    std::cout << std::endl;

    return 0;
}