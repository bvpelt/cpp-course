#ifndef FELINE_H
#define FELINE_H

#include "animal.h"

class Feline : public Animal
{   
public:
    Feline() = default;

    Feline(std::string &color, std::string &description) : Animal(color, description){};

    Feline(char const *color, char const *description) : Animal(color, description){};

    virtual ~Feline() = default;

    virtual void breathes() const override
    {
        std::cout << "(Feline) breathes" << std::endl;
    }

    virtual void runs() const
    {
        std::cout << "(Feline) runs" << std::endl;
    }

    virtual void stream_insert(std::ostream &out) const override
    {
        out << "Feline [description:" << this->get_description() << ", color: " << this->get_color() << "]";
    }
};
#endif