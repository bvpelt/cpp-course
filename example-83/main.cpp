#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

#include <memory>
#include "point.h"
#include "bird.h"
#include "cat.h"
#include "dog.h"

int main(int argc, char **argv)
{
    // Abstract classes as interfaces

    std::cout << "Abstract classes as interfaces" << std::endl;

    Point point(1.1, 2.2);
    Bird bird("green", "bird1");
    Cat cat("Red", "cat1");

    std::unique_ptr<Animal> animal0 = std::make_unique<Dog>("stripes", "dog1");
    std::unique_ptr<Animal> animal1 = std::make_unique<Bird>("white", "bird1");

    std::cout << point << std::endl;
    std::cout << bird << std::endl;
    std::cout << cat << std::endl;
    std::cout << *animal0 << std::endl;

    std::cout << std::endl;

    operator<<(std::cout, point);
    std::cout << std::endl;
    std::cout << "----------------------" << std::endl;

    std::shared_ptr<Animal> animals[]{
        std::make_shared<Dog>("stripes", "dog2"),
        std::make_shared<Cat>("stripes", "cat2"),
        std::make_shared<Bird>("stripes", "bird2"),
        std::make_shared<Dog>("stripes", "dog3")};

    for (const auto &a : animals)
    {
        std::cout << *a << std::endl;
    }

    std::cout << "Program end" << std::endl;
    return 0;
}