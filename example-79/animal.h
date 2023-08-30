#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
    friend std::ostream &operator<<(std::ostream &out, const Animal &animal)
    {
        out << "(Animal address: " << &animal << ") [color: " << animal.get_color() << " description: " << animal.get_description() << " ]";
        return out;
    }

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

    ~Animal() {
        std::cout << "(Animal) Destructor called" << std::endl;
    }

    virtual void breathes() const
    {
        std::cout << "(Animal) breathes" << std::endl;
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