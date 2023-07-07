#include <iostream>

// one line comment

/*
A number of lines with
comments
*/
int main(int argc, char **argv) {
    auto result = (10 <=> 20) > 0;

    std::cout << result << std::endl;

    return 0;
}