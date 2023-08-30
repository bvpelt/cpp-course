#ifndef ANIMAL_V_H
#define ANIMAL_V_H

#include <iostream>

class Animal_v
{
    friend std::ostream &operator<<(std::ostream &out, const Animal_v &animal)
    {
        out << "(Animal address: " << &animal << ") [color: " << animal.get_color() << " description: " << animal.get_description() << " ]";
        return out;
    }

public:
    Animal_v() = default;

    Animal_v(std::string &color, std::string &description)
    {
        this->color = color;
        this->description = description;
    };

    Animal_v(char const *color, char const *description)
    {
        this->color = color;
        this->description = description;
    };

    virtual ~Animal_v()
    {
        std::cout << "(Animal_v) Destructor called" << std::endl;
    }

    virtual void breathes() const
    {
        std::cout << "(Animal_v) breathes" << std::endl;
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