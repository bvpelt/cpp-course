#include <iostream>

#include "cylinder.h"
#include "dog.h"

// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    // Managing Class Objects Throug Pointers

    std::cout << "Managing Class Objects Throug Pointers" << std::endl;

    // Stack object . notation
    Cylinder c1(10, 2);
    std::cout << "radius c4: " << c1.get_base_radius() << std::endl;
    std::cout << "height c4: " << c1.get_height() << std::endl;
    std::cout << "volume c4: " << c1.volume() << std::endl;
    std::cout << "area   c4: " << c1.area() << std::endl;

    c1.set_base_radius(10);
    c1.set_heigth(10);
    std::cout << "radius c4: " << c1.get_base_radius() << std::endl;
    std::cout << "height c4: " << c1.get_height() << std::endl;
    std::cout << "volume c4: " << c1.volume() << std::endl;
    std::cout << "area   c4: " << c1.area() << std::endl;

    // Heap object dereference and . notation and -> notation
    Cylinder *c2 = new Cylinder(11, 20);
    std::cout << "radius c4: " << (*c2).get_base_radius() << std::endl;
    std::cout << "height c4: " << c2->get_height() << std::endl;
    std::cout << "volume c4: " << c2->volume() << std::endl;
    std::cout << "area   c4: " << c2->area() << std::endl;
    std::cout << std::endl;

    delete c2;

    Dog *d = new Dog("Jip", "Bouvier", 2);
    std::cout << "Dog name: " << d->get_dog_name() << " breed: " << d->get_dog_breed() << " age: " << *d->get_dog_age() << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}