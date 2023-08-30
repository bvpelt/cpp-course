#ifndef CROW_H
#define CROW_H

#include "bird.h"

class Crow : public Bird
{
public:
    Crow() = default;

    Crow(std::string &color, std::string &description) : Bird(color, description){};

    Crow(char const *color, char const *description) : Bird(color, description){};

    ~Crow() = default;
    
    virtual void breathes() const override
    {
        std::cout << "(Crow) breathes" << std::endl;
    }

    virtual void flies() const override
    {
        std::cout << "(Crow) flies" << std::endl;
    }

    virtual void caws() const
    {
        std::cout << "(Crow) caws" << std::endl;
    }
};
#endif