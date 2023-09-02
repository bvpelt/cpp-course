#ifndef DOG_H
#define DOG_H

#include "feline.h"

class Dog : public Feline
{
public:
    Dog() = default;

    Dog(std::string &color, std::string &description) : Feline(color, description){};

    Dog(char const *color, char const *description) : Feline(color, description){};

    virtual ~Dog() = default;

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
    virtual void runs() const override final
    {
        std::cout << "(Dog) runs" << std::endl;
    }

    virtual void barks() const
    {
        std::cout << "(Dog) barks" << std::endl;
    }

    virtual void stream_insert(std::ostream &out) const override
    {
        out << "Dog [description:" << this->get_description() << ", color: " << this->get_color() << "]";
    }
};

#endif