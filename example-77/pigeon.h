#ifndef PIGEON_H
#define PIGEON_H

#include "bird.h"

class Pigeon : public Bird
{
public:
    Pigeon() = default;

    Pigeon(std::string &color, std::string &description) : Bird(color, description){};

    Pigeon(char const *color, char const *description) : Bird(color, description){};

    ~Pigeon() = default;

    virtual void breathes() const override
    {
        std::cout << "(Pigeon) breathes" << std::endl;
    }

    virtual void flies() const override
    {
        std::cout << "(Pigeon) flies" << std::endl;
    }

    virtual void coos() const
    {
        std::cout << "(Pigeon) coos" << std::endl;
    }
};
#endif