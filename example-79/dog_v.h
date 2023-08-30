#ifndef DOG_V_H
#define DOG_V_H

#include "feline_v.h"

class Dog_v : public Feline_v
{
public:
    Dog_v() = default;

    Dog_v(std::string &color, std::string &description) : Feline_v(color, description){};

    Dog_v(char const *color, char const *description) : Feline_v(color, description){};

    virtual ~Dog_v()
    {
        std::cout << "(Dog_v) Destructor called" << std::endl;
    }

    virtual void breathes() const override
    {
        std::cout << "(Dog_v) breathes" << std::endl;
    }

    virtual void bark() const
    {
        std::cout << "(Dog_v) barks: woof!" << std::endl;
    }

    // the run method in subclasses of dog can't be overriden
    // further, derived classes are forced to use the implementation in Dog
    virtual void runs() const override
    {
        std::cout << "(Dog_v) runs" << std::endl;
    }

    virtual void barks() const
    {
        std::cout << "(Dog_v) barks" << std::endl;
    }
};

#endif