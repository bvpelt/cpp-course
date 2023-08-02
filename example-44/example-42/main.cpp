#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

// declaration
int max(const int a, const int b);
int min(const int a, const int b);

// implementation
int max(const int a, const int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int min(const int a, const int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(int argc, char **argv)
{
    // Function declaration & Definition
    // Sometimes one wants to seperate function declaration and implementation

    int a{3};
    int b{4};

    std::cout << "Using functions" << std::endl;
    std::cout << "max(" << a <<", "<<b<<"): " << max(a,b) << std::endl;
    std::cout << "min(" << a <<", "<<b<<"): " << min(a,b) << std::endl;
    
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}