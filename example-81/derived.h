#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"

class Derived : public Base
{
public:
    Derived() : Base()
    {
        std::cout << "Derived constructor called" << std::endl;
    }

    virtual ~Derived()
    {
        std::cout << "Derived destructor called" << std::endl;
    }

    virtual void setup() override
    {
        std::cout << "Derived::setup() called" << std::endl;
        this->value = 100;
    }

    virtual void clean_up() override
    {
        std::cout << "Destructor::clean_up() called" << std::endl;
    }
};
#endif