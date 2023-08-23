#ifndef CIRCLE_H
#define CIRCLE_H

#include "oval.h"

class Circle : public Oval
{
public:
    Circle();

    Circle(double radius, const std::string &description);

    ~Circle();

    void draw() const;

    virtual void draw_shape() const;
};

#endif