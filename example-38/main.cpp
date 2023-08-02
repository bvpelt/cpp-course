#include <iostream>
#include <cstring>

// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    // C-String manipulation  https://en.cppreference.com/w/cpp/header/cstring

    const char message1[]{"The sky is blue."};
    const char *message2{"The sky is blue."};

    // String length
    std::cout << "Checking string lengt" << std::endl;
    std::cout << "strlen(message1) ignores ending null: " << std::strlen(message1) << std::endl;
    std::cout << "sizeof(message1) includes ending null: " << sizeof(message1) << std::endl;
    std::cout << "strlen(message2) ignores ending null: " << std::strlen(message1) << std::endl;
    std::cout << "sizeof(message2) size of the pointer: " << sizeof(message2) << std::endl;
    std::cout << "sizeof(message2) size of the first char of pointer: " << sizeof(*message2) << std::endl;
    std::cout << std::endl;

    // Compare strings
    // zero if strings are equal
    // -1 if left string before right string
    // 1 if left string after right string
    //
    const char *s1{"Alabama"};
    const char *s2{"Blabama"};

    std::cout << "s1: " << s1 << " s2: " << s2 << std::endl;
    std::cout << "stdstrcmp (" << s1 << ", " << s2 << "): " << std::strcmp(s1, s2) << std::endl;

    s1 = "Alabama";
    s2 = "Alabamb";
    std::cout << "s1: " << s1 << " s2: " << s2 << std::endl;
    std::cout << "stdstrcmp (" << s1 << ", " << s2 << "): " << std::strcmp(s1, s2) << std::endl;

    s1 = "Alacama";
    s2 = "Alabama";
    std::cout << "s1: " << s1 << " s2: " << s2 << std::endl;
    std::cout << "stdstrcmp (" << s1 << ", " << s2 << "): " << std::strcmp(s1, s2) << std::endl;
    std::cout << std::endl;

    // Find first occurrence of a char in a string
    // see https://en.cppreference.com/w/cpp/string/byte/strchr
    const char *s3{"Try not. Do, or do not. There is no try."};
    char target = 'T';
    int iterations{};
    const char *result = s3;

    std::cout << "Search string: \"" << s3 << "\" target: " << target << std::endl;
    while ((result = std::strchr(result, target)) != nullptr)
    {
        std::cout << "Found: '" << target << "' starting at '" << result << "'" << std::endl;

        // increment result, otherwise the while loop won't ever end
        ++result;
        ++iterations;
    }
    std::cout << "iterations: " << iterations << std::endl;
    std::cout << std::endl;

    // find last occurrence
    // see https://en.cppreference.com/w/cpp/string/byte/strrchr
    char input[] = "/home/user/hello.cpp";
    char *output = std::strrchr(input, '/');

    std::cout << "Search string: " << input << " last char to find : /" << std::endl;
    if (output)
    {
        std::cout << output + 1 << std::endl; // +1 , past last found char
    }
    std::cout << std::endl;

    // copy string - cstring
    char d1[50] = "Hello ";
    char s4[50] = "World!";

    std::cout << "Concatenate: " << d1 << " with: " << s4 << " gives: " << std::strcat(d1, s4) << std::endl;
    
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}