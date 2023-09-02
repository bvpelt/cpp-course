#ifndef CAT_H
#define CAT_H

#include "feline.h"

class Cat final : public Feline // Deriving from Cat is not longer possible
{
public:
    Cat() = default;

    Cat(std::string &color, std::string &description) : Feline(color, description){};

    Cat(char const *color, char const *description) : Feline(color, description){};

    virtual ~Cat() = default;

    virtual void breathes() const override
    {
        std::cout << "(Cat) breathes" << std::endl;
    }

    virtual void runs() const override
    {
        std::cout << "(Cat) runs" << std::endl;
    }

    virtual void miauw() const // this virtual class cannot be overridden since deriving from this class is not allowed
    {
        std::cout << "(Cat) miauw" << std::endl;
    }

     virtual void stream_insert(std::ostream &out) const override
    {
        out << "Cat [description:" << this->get_description() << ", color: " << this->get_color() << "]";
    }
};

#endif