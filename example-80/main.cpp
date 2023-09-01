#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

#include "dog.h"

void do_something_with_animal_ptr(Animal *animal)
{
    std::cout << "In function taking base pointer..." << std::endl;
    Feline *feline_ptr = dynamic_cast<Feline *>(animal);

    if (feline_ptr)
    {
        feline_ptr->do_some_feline_thing();
    }
    else
    {
        std::cout << "Couldn't cast to Feline pointer, Sorry." << std::endl;
    }
}

void do_something_with_animal_ref(Animal &animal)
{
    std::cout << "In function taking base reference..." << std::endl;
    Feline *feline_ptr = dynamic_cast<Feline *>(&animal);

    if (feline_ptr)
    {
        feline_ptr->do_some_feline_thing();
    }
    else
    {
        std::cout << "Couldn't cast to Feline reference, Sorry." << std::endl;
    }
}

int main(int argc, char **argv)
{
    // Dynamic_cast

    std::cout << "Dynamic_cast" << std::endl;

    // base class pointer
    Animal *animal1 = new Feline("stripes", "feline1");
    Animal *animal2 = new Dog("stripes", "dog1");

    // animal1->do_some_feline_thing(); // error: ‘class Animal’ has no member named ‘do_some_feline_thing’

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
    feline_ref.do_some_feline_thing();
    feline_ref.breathes();
    feline_ref.runs();

    //
    // Using references by converting them to pointers
    // preferred way to get type checking by converting to a pointer when using references
    //
    Feline *feline_ptr_0{dynamic_cast<Feline *>(&animal_ref)};
    if (feline_ptr_0)
    {
        feline_ptr_0->do_some_feline_thing();
        feline_ptr_0->breathes();
        feline_ptr_0->runs();
    }
    else
    {
        std::cout << "Couldn't cast to Feline pointer: feline_ptr_0" << std::endl;
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
        feline_ptr->do_some_feline_thing();
        feline_ptr->breathes();
        feline_ptr->runs();
    }
    else
    {
        std::cout << "Couldn't cast to Feline pointer: feline_ptr" << std::endl;
    }

    feline_ptr = dynamic_cast<Dog *>(animal1);
    if (feline_ptr)
    {
        feline_ptr->do_some_feline_thing();
        feline_ptr->breathes();
        feline_ptr->runs();
    }
    else
    {
        std::cout << "Couldn't cast to Dog pointer: feline_ptr" << std::endl;
    }

    std::cout << "Dynamic_cast from Dog using pointer of Animal * type to Feline *" << std::endl;
    feline_ptr = dynamic_cast<Feline *>(animal2);

    if (feline_ptr)
    {
        feline_ptr->do_some_feline_thing();
        feline_ptr->breathes();
        feline_ptr->runs();
    }
    else
    {
        std::cout << "Couldn't cast to Feline pointer: feline_ptr" << std::endl;
    }

    std::cout << "Dynamic_cast from Dog using pointer of Animal * type to Dog *" << std::endl;
    Dog *dog_ptr_0 = dynamic_cast<Dog *>(animal1);

    // dog_ptr_0->do_some_dog_thing();               // generates core dump
    //  to do this in a safe way, check the pointer
    if (dog_ptr_0)
    {
        dog_ptr_0->do_some_dog_thing();
    }
    else
    {
        std::cout << "Couldn't cast to Dog pointer: dog_ptr_0" << std::endl;
    }

    Dog *dog_ptr = dynamic_cast<Dog *>(animal2);
    if (dog_ptr)
    {
        dog_ptr->breathes();
        dog_ptr->runs();
        dog_ptr->barks();
    }
    else
    {
        std::cout << "Couldn't cast to Dog pointer: dog_ptr" << std::endl;
    }

    std::cout << "-------------------" << std::endl;
    do_something_with_animal_ptr(animal1);
    do_something_with_animal_ref(animal_ref);

    int data{45};
    // only use dynamic_cast in context of polymorphic hierarchy, otherwise compile error
    // std::string data_str = dynamic_cast<std::string>(data); error: cannot ‘dynamic_cast’ ‘data’ (of type ‘int’) to type ‘std::string’ {aka ‘class std::__cxx11::basic_string<char>’} (target is not pointer or reference)

    int * data_ptr = &data;
    // std::string * data_str = dynamic_cast<std::string *>(data_ptr);  error: cannot ‘dynamic_cast’ ‘data_ptr’ (of type ‘int*’) to type ‘std::string*’ {aka ‘class std::__cxx11::basic_string<char>*’} (source is not a pointer to class)


    std::cout << std::endl;

    delete animal1;
    delete animal2;

    std::cout << "Program end" << std::endl;
    return 0;
}