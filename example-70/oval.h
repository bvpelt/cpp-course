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

    void draw() const;

    virtual void draw_shape() const;

    double get_x_rad() const;

    double get_y_rad() const;

private:
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};

#endif