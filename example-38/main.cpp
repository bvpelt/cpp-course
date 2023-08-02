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

    // concatenate string - cstring
    // see https://en.cppreference.com/w/cpp/string/byte/strcat
    char d1[50] = "Hello ";
    char s4[50] = "World!";

    std::cout << "Concatenate: " << d1 << " with: " << s4 << " gives: " << std::strcat(d1, s4) << std::endl;
    std::cout << std::endl;

    char *d5 = new char[30]{'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0'};
    char *s5 = new char[30]{',', ' ', 'T', 'h', 'e', ' ', 'P', 'h', 'e', 'n', 'i', 'x', ' ', 'K', 'i', 'n', 'g', '!', '\0'};

    std::cout << "d5: " << d5 << " s5: " << s5 << std::endl;
    std::cout << "std::strlen(d5) " << std::strlen(d5) << std::endl;
    std::cout << "std::strlen(s5) " << std::strlen(s5) << std::endl;
    std::strcat(d5, s5);
    std::cout << "d5: " << d5 << " s5: " << s5 << std::endl;
    std::cout << "std::strlen(d5) " << std::strlen(d5) << std::endl;
    std::cout << std::endl;

    delete[] d5;
    d5 = nullptr;

    delete[] s5;
    s5 = nullptr;

    char d6[50]{"Hello"};
    char s6[50]{" There is a bird on my window"};
    std::cout << "Partial concatenation strncat(d6,s6,6) -- append 6 chars from source to destination" << std::endl;
    std::cout << "d6: " << d6 << " s6: " << s6 << std::endl;
    std::cout << std::strncat(d6, s6, 6) << std::endl;
    std::cout << std::endl;

    // Copy strings
    const char *s7 = "C++ is a multipurpose programming language.";
    char *d7 = new char[std::strlen(s7) + 1]{'\0'}; // +1 to account for trailing '\0' from the s7
    std::cout << "Before string copy from s7 to d7" << std::endl;
    std::cout << "d7: " << d7 << " s7: " << s7 << std::endl;
    std::strcpy(d7, s7);
    std::cout << "d7: " << d7 << " s7: " << s7 << std::endl;
    std::cout << std::endl;

    delete[] d7;
    d7 = nullptr;

    const char *s8 = "Hello World!";
    char d8[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
    std::cout << "Before partial string copy -5 chars- from s8 to d8 overwriting existing content" << std::endl;
    std::cout << "d8: " << d8 << " s8: " << s8 << std::endl;
    std::strncpy(d8, s8, 5);
    std::cout << "d8: " << d8 << " s8: " << s8 << std::endl;
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}