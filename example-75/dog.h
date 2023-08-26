#ifndef DOG_H
#define DOG_H

#include "feline.h"

class Dog : public Feline
{
public:
    Dog() = default;

    Dog(std::string &color, std::string &description) : Feline(color, description){};

    Dog(char const *color, char const *description) : Feline(color, description){};

    ~Dog() = default;

    virtual void breathes() const override
    {
        std::cout << "(Dog) breathes" << std::endl;
    }

    virtual void runs() const override
    {
        std::cout << "(Dog) runs" << std::endl;
    }

    virtual void barks() const
    {
        std::cout << "(Dog) barks" << std::endl;
    }
};

#endif