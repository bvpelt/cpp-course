#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

int addNumbers(int p1, int p2)
{
    int sum = p1 + p2;
    return sum;
}

int main(int argc, char **argv)
{
    int first = 12;
    int second = 9;

    int sum = first + second;

    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The sum is: " << addNumbers(8, 12) << std::endl;
    std::cout << "The sum is: " << addNumbers(first, second) << std::endl;

    return 0;
}