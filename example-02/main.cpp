#include <iostream>

// one line comment

/*
A number of lines with
comments
*/
int main(int argc, char **argv) {
    auto result = (10 <=> 20) > 0;

    // compile time error - remove ';' at end of next line
    std::cout << result << std::endl;

    // runtime error
    int value = 7/0;
    std::cout << "value: " << value << std::endl;

    return 0;
}