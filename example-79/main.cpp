#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

#include "animal.h"
#include "feline.h"
#include "dog.h"
#include "animal_v.h"
#include "feline_v.h"
#include "dog_v.h"

int main(int argc, char **argv)
{
    // Virtual descructors

    std::cout << "Virtual descructors" << std::endl;

    Dog dog("dark yellow", "dog"); // destructor called in order Dog, Feline, Animal
    Animal *animal = new Dog("dark yellow", "dog1");
    delete animal; // only the animal destructor is called this is not correct!!!

    Animal_v *animal_v = new Dog_v("dark yellow", "dog1");
    delete animal_v;  // destructor called in order Dog_v, Feline_v, Animal_v because destructors are defined virtual!!!

    std::cout << "Program end" << std::endl;

    return 0;
}