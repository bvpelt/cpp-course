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
    const int MAX_SCORES{10};
    int scores[MAX_SCORES];

    std::cout << "Reading values from scores" << std::endl;
    for (int i = 0; i < MAX_SCORES; ++i)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}