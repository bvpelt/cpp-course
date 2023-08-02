#include <iostream>
#include <cctype>

// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    // String manipulations
    // see https://en.cppreference.com/w/cpp/header/cctype

    // check if char is alphanumeric
    std::cout << "std::isalnum" << std::endl;
    std::cout << "C is alphanumeric: " << std::isalnum('C') << std::endl;
    std::cout << "^ is alphanumeric: " << std::isalnum('^') << std::endl;
    std::cout << std::endl;

    // using this as a test
    char c{'*'};
    if (std::isalnum(c))
    {
        std::cout << c << " is alphanumeric: " << std::isalnum('C') << std::endl;
    }
    else
    {
        std::cout << c << " is not alphanumeric: " << std::isalnum('C') << std::endl;
    }

    // check if char is alphabetic
    std::cout << "std::isalpha" << std::endl;
    std::cout << "C is alphabetic: " << std::isalpha('C') << std::endl;
    std::cout << "^ is alphabetic: " << std::isalpha('^') << std::endl;
    std::cout << "7 is alphabetic: " << std::isalpha('^') << std::endl;
    std::cout << std::endl;

    // check if char is blank
    char message[]{"Hello there. How are you doing? The sun is shining."};
    std::cout << "Check for blanks in the message" << std::endl;
    std::cout << "message: " << message << " message size: " << std::size(message) << std::endl;
    int blank_count{};
    for (size_t i{}; i < std::size(message) - 1; ++i)
    {
        std::cout << "message [" << i << "]: " << message[i] << " is blank: " << std::isblank(message[i]) << std::endl;
        if (std::isblank(message[i]))
        {
            blank_count++;
        }
    }
    std::cout << "Total blanks found: " << blank_count << std::endl;
    std::cout << std::endl;

    char thought[]{"The C++ Programming Language is one of the most used on the Planet"};
    int lowcase_count{};
    int uppercase_count{};

    std::cout << "Check for lower/upper case in the thought" << std::endl;
    std::cout << "thought: " << thought << " thought size: " << std::size(thought) << std::endl;

    int index{};
    for (auto c : thought)
    {
        index++;
        std::cout << "c at:" << index << " " << c << " is lower: " << std::islower(c) << " is upper: " << std::isupper(c) << std::endl;
        if (std::islower(c))
        {
            lowcase_count++;
        }
        if (std::isupper(c))
        {
            uppercase_count++;
        }
    }
    std::cout << "Total chars: " << index << " lowercase: " << lowcase_count << " uppercase: " << uppercase_count << std::endl;
    std::cout << std::endl;

    // Convert string to upper case
    char original[]{"Home. The feeling of belonging"};
    char destination[std::size(original)];

    for (size_t i{}; i < std::size(original); ++i)
    {
        destination[i] = std::toupper(original[i]);
    }
    std::cout << "Original: " << original << std::endl;
    std::cout << "Destination: " << destination << std::endl;
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}
