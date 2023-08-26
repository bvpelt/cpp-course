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

    virtual void flies() const
    {
        std::cout << "(Bird) flies" << std::endl;
    }
};
#endif