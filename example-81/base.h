#ifndef BASE_H
#define BASE_H

#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Base constructor called" << std::endl;
        this->setup(); // Static binding kicks in here!!!!
    }

    virtual ~Base()
    {
        this->clean_up();
        std::cout << "Base destructor called" << std::endl;
    }

    virtual void setup()
    {
        std::cout << "Base::setup() called" << std::endl;
        this->value = 10;
    }

    virtual void clean_up()
    {
        std::cout << "Base::clean_up() called" << std::endl;
        this->value = 0;
    }

    int get_value()
    {
        return this->value;
    }

protected:
    int value{};
};
#endif