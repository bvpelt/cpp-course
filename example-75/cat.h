#ifndef CAT_H
#define CAT_H

#include "feline.h"

class Cat : public Feline
{
public:
    Cat() = default;

    Cat(std::string &color, std::string &description) : Feline(color, description){};

    Cat(char const *color, char const *description) : Feline(color, description){};

    ~Cat() = default;

    virtual void breathes() const override
    {
        std::cout << "(Cat) breathes" << std::endl;
    }

    virtual void runs() const override
    {
        std::cout << "(Cat) runs" << std::endl;
    }

    virtual void miauw() const
    {
        std::cout << "(Cat) miauw" << std::endl;
    }
};

#endif