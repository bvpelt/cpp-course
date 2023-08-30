#ifndef BIRD_H
#define BIRD_H

#include "animal.h"

class Bird : public Animal
{
public:
    Bird() = default;

    Bird(std::string &color, std::string &description) : Animal(color, description){};

    Bird(char const *color, char const *description) : Animal(color, description){};

    ~Bird() = default;

    virtual void breathes() const override
    {
        std::cout << "(Bird) breathes" << std::endl;
    }

    virtual void flies() const // final is contradictory here because virtual allows overrides of this member function, but final blocks this
                               // pigeon.h:22:18: error: virtual function ‘virtual void Pigeon::flies() const’ overriding final function
    {
        std::cout << "(Bird) flies" << std::endl;
    }
};
#endif