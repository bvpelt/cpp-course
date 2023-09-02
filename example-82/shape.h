#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape // This will be an abstract class because there are pure virtual functions defined in this class
{
protected: // Prevent creation of these abstract class
    Shape() = default;

    Shape(const std::string &description) : description(description){

                                            };

public:
    virtual ~Shape() = default;

    // Pure virtual functions
    virtual double perimeter() const = 0;

    virtual double surface() const = 0;

    std::string get_description() const
    {
        return description;
    }

private:
    std::string description;
};

#endif