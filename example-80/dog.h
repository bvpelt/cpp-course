#ifndef DOG_H
#define DOG_H

#include "feline.h"

class Dog : public Feline
{
public:
    Dog() = default;

    Dog(std::string &color, std::string &description) : Feline(color, description){};

    Dog(char const *color, char const *description) : Feline(color, description){};

    virtual ~Dog()
    {
        std::cout << "(Dog) Destructor called" << std::endl;
    }

    void do_some_dog_thing()
    {
        std::cout << "Doing some dog thing..., speed: " << this->speed << std::endl;
    }

    virtual void breathes() const override
    {
        std::cout << "(Dog) breathes" << std::endl;
    }

    virtual void bark() const
    {
        std::cout << "(Dog) barks: woof!" << std::endl;
    }

    // the run method in subclasses of dog can't be overriden
    // further, derived classes are forced to use the implementation in Dog
    virtual void runs() const override
    {
        std::cout << "(Dog) runs" << std::endl;
    }

    virtual void barks() const
    {
        std::cout << "(Dog) barks" << std::endl;
    }

private:
    double speed{};
};

#endif