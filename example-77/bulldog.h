#ifndef BULLDOG_H
#define BULLDOG_H

#include "dog.h"

class Bulldog : public Dog
{
public:
    Bulldog() = default;

    Bulldog(std::string &color, std::string &description) : Dog(color, description){};

    Bulldog(char const *color, char const *description) : Dog(color, description){};

    ~Bulldog() = default;

    virtual void breathes() const override
    {
        std::cout << "(Bulldog) breathes" << std::endl;
    }

    virtual void bark() const
    {
        std::cout << "(Bulldog) barks: wrooff!" << std::endl;
    }

    /*
    // the run method in subclasses of dog can't be overriden
    // further, derived classes are forced to use the implementation in Dog
    // error: virtual function ‘virtual void Bulldog::runs() const’ overriding final function
    virtual void runs() const override
    {
        std::cout << "(Dog) runs" << std::endl;
    }
    */

    virtual void barks() const
    {
        std::cout << "(Dog) barks" << std::endl;
    }
};

#endif