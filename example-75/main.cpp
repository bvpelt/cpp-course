#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

#include "animal.h"
#include "feline.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "pigeon.h"
#include "crow.h"

int main(int argc, char **argv)
{
    // Polymorphism at different levels

    std::cout << "Polymorphism - at different levels" << std::endl;

    Dog dog("dark gray", "dog");
    Cat cat("black stripes", "cat");
    Pigeon pigeon("white", "pigeon");
    Crow crow("black", "crow");

    Animal *animals[]{&dog, &cat, &pigeon, &crow};

    for (const auto &animal : animals)
    {
        animal->breathes();
        std::cout << *animal << std::endl;
    }

    Feline *felines[]{&dog, &cat};
    for (const auto &feline : felines)
    {
        feline->runs();
        std::cout << *feline << std::endl;
    }

    Bird *birds[]{&pigeon, &crow};
    for (const auto &bird : birds)
    {
        bird->flies();
        std::cout << *bird << std::endl;
    }

    std::cout << "Program end" << std::endl;

    return 0;
}