#include <iostream>
#include "dog.h"

Dog::Dog() = default;

Dog::Dog(std::string name_param, std::string breed_param, int age_param)
{
    this->name = name_param;
    this->breed = breed_param;
    this->age = new int(age_param);
    std::cout << "Dog (" << this << ") constructor for: " << name <<  std::endl;
}

Dog::~Dog()
{ // Destructor declared
    std::cout << "Dog (" << this << ") destructor for: " << name << std::endl;
    delete this->age;
    this->age = nullptr;
}

// getters
std::string Dog::get_name()
{
    return this->name;
}

std::string Dog::get_breed()
{
    return this->breed;
}

int *Dog::get_age()
{
    return this->age;
}

// setters
Dog * Dog::set_name(std::string name_param)
{
    this->name = name_param;
    return this;
}

Dog * Dog::set_breed(std::string breed_param)
{
    this->breed = breed_param;
    return this;
}

Dog * Dog::set_age(int age_param)
{
    if (this->age)
    {
        delete this->age;
    }
    this->age = new int(age_param);
    return this;
}

void Dog::print_info() {
    std::cout << "Dog (" << this << "): [ name: " << this->name << " breed: " << this->breed << " age: " << *this->age << " ]" << std::endl;
}