#ifndef CIRCLE_H
#define CIRCLE_H

#include "oval.h"

class Circle : public Oval
{
public:
    Circle();

    Circle(double radius, const std::string &description);

    ~Circle();

    virtual void draw() const override;

    virtual void draw(int color_depth, int size) const override;
};

#endif