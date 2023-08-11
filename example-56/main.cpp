#include <iostream>

#include "dog.h"

// one line comment

/*
A number of lines with
comments
*/


int main(int argc, char **argv)
{
    // The This pointer
 
    std::cout << "This pointer" << std::endl;
    Dog d("Jip", "Bouvier", 10);

    Dog * p_dog = new Dog("Milou", "Shepherd", 3);
    p_dog->print_info();

    // chaining calls using this pointer
    p_dog->set_name("Mario")->set_breed("Fox Terrier")->set_age(5);
    p_dog->print_info();
    delete p_dog;
   
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}