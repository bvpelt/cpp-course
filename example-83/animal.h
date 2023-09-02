#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "streaminsertable.h"

class Animal : public StreamInsertable
{
 public:
    Animal() = default;

    Animal(std::string &color, std::string &description)
    {
        this->color = color;
        this->description = description;
    };

    Animal(char const *color, char const *description)
    {
        this->color = color;
        this->description = description;
    };

    virtual ~Animal()
    {
        std::cout << "(Animal) Destructor called" << std::endl;
    }

    virtual void breathes() const
    {
        std::cout << "(Animal) breathes" << std::endl;
    }

    virtual void stream_insert(std::ostream &out) const override
    {
        out << "Animal [description:" << description << ", color: " << color << "]";
    }

    std::string get_color() const
    {
        return this->color;
    }

    std::string get_description() const
    {
        return this->description;
    }

private:
    std::string color{""};
    std::string description{""};
};

#endif