#ifndef OVAL_H
#define OVAL_H

#include <string>
#include "shape.h"

class Oval : public Shape
{
public:
    Oval();

    Oval(double x_radius, double y_radius, const std::string &description);

    ~Oval();

    virtual void draW() const;  // no compiler error, because a new virtual function can be created here

    // virtual void Draw() const override; //  error: ‘virtual void Oval::Draw() const’ marked ‘override’, but does not override  

    virtual void draw() const override; // protection from errors in polymorphic hierarchy

    double get_x_rad() const;

    double get_y_rad() const;

private:
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};

#endif