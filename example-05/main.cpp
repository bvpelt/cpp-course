#include <iostream>

// one line comment

/*
A number of lines with
comments
*/
int main(int argc, char **argv) {
    int n1 = 15; // dec
    int n2 = 017; // oct
    int n3 = 0x0f; //hex
    int n4 = 0b00001111; //binary

    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    std::cout << "n3: " << n3 << std::endl;
    std::cout << "n4: " << n4 << std::endl;
    return 0;
}