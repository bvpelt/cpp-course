#include <iostream>
#include <string>

// one line comment

/*
A number of lines with
comments
*/

// Members private by default
class Dog
{
public:
    std::string name{"None"};
};

// Members public by default
struct Cat
{
public:
    Cat(const std::string &name)
    {
        this->name = name;
    }

public:
    std::string name{"Quinten"};
};

// Common use for struct
struct Point
{
    double x;
    double y;
};

int main(int argc, char **argv)
{
    // Structs

    std::cout << "Structs" << std::endl;
    Dog d;
    Cat c("Quinten");

    std::cout << "dog: " << d.name << std::endl;
    std::cout << "cat: " << c.name << std::endl;

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}