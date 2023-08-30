#ifndef FELINE_V_H
#define FELINE_V_H

#include "animal_v.h"

class Feline_v : public Animal_v
{
    friend std::ostream &operator<<(std::ostream &out, const Feline_v &feline)
    {
        out << "(Feline address: " << &feline << ") [color: " << feline.get_color() << " description: " << feline.get_description() << " ]";
        return out;
    }

public:
    Feline_v() = default;

    Feline_v(std::string &color, std::string &description) : Animal_v(color, description){};

    Feline_v(char const *color, char const *description) : Animal_v(color, description){};

    virtual ~Feline_v()
    {
        std::cout << "(Feline_v) Destructor called" << std::endl;
    }

    virtual void breathes() const override
    {
        std::cout << "(Feline_v) breathes" << std::endl;
    }

    virtual void runs() const
    {
        std::cout << "(Feline_v) runs" << std::endl;
    }

    std::string m_fur_style;
};
#endif