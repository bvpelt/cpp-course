#ifndef FELINE_H
#define FELINE_H

#include "animal.h"

class Feline : public Animal
{
    friend std::ostream &operator<<(std::ostream &out, const Feline &feline)
    {
        out << "(Feline address: " << &feline << ") [color: " << feline.get_color() << " description: " << feline.get_description() << " ]";
        return out;
    }

public:
    Feline() = default;

    Feline(std::string &color, std::string &description) : Animal(color, description){};

    Feline(char const *color, char const *description) : Animal(color, description){};

    ~Feline() = default;

    virtual void breathes() const override
    {
        std::cout << "(Feline) breathes" << std::endl;
    }

    virtual void runs() const
    {
        std::cout << "(Feline) runs" << std::endl;
    }
};
#endif