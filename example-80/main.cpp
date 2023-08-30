#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

#include "animal.h"
#include "feline.h"
#include "dog.h"

int main(int argc, char **argv)
{
    // Dynamic_cast

    std::cout << "Dynamic_cast" << std::endl;
    // base class pointer
    Animal *animal1 = new Feline("stripes", "feline1");
    Animal *animal2 = new Dog("stripes", "dog1");

    // references
    Feline feline2("stripes", "feline2");
    Animal &animal_ref = feline2;

    std::cout << "Dynamic_cast from Feline using references" << std::endl;

    // We don't have a nullptr equivalence test for references
    // there is no way to directly check the return value like with pointers
    //
    // Best practice don't use this!!!!!
    //

    Feline &feline_ref{dynamic_cast<Feline &>(animal_ref)};
    feline_ref.breathes();
    feline_ref.runs();

    Feline *feline_ptr_0{dynamic_cast<Feline *>(&animal_ref)};
    if (feline_ptr_0)
    {
        feline_ptr_0->breathes();
        feline_ptr_0->runs();
    }
    else
    {
        std::cout << "Couldn't cast to Feline pointer" << std::endl;
    }

    // explicitly specify the class of the derived class;
    // if the cast succeeds, we get a valid pointer back,
    // if the cast fails, we get a nullptr. So we can check before
    // calling stuff on the returned pointer
    //
    std::cout << "Dynamic_cast from Feline using pointers" << std::endl;
    Feline *feline_ptr = dynamic_cast<Feline *>(animal1);

    if (feline_ptr)
    {
        feline_ptr->breathes();
        feline_ptr->runs();
    }
    else
    {
        std::cout << "Couldn't cast to Feline pointer" << std::endl;
    }

    feline_ptr = dynamic_cast<Dog *>(animal1);
    if (feline_ptr)
    {
        feline_ptr->breathes();
        feline_ptr->runs();
    }
    else
    {
        std::cout << "Couldn't cast to Dog pointer" << std::endl;
    }

    std::cout << "Dynamic_cast from Dog using pointer of Animal * type to Feline *" << std::endl;
    feline_ptr = dynamic_cast<Feline *>(animal2);

    if (feline_ptr)
    {
        feline_ptr->breathes();
        feline_ptr->runs();
    }
    else
    {
        std::cout << "Couldn't cast to Feline pointer" << std::endl;
    }

    std::cout << "Dynamic_cast from Dog using pointer of Animal * type to Dog *" << std::endl;

    Dog *dog_ptr = dynamic_cast<Dog *>(animal2);
    if (dog_ptr)
    {
        dog_ptr->breathes();
        dog_ptr->runs();
        dog_ptr->barks();
    }
    else
    {
        std::cout << "Couldn't cast to Dog pointer" << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}