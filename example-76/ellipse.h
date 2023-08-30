#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse : public Shape
{
public:
    Ellipse();
    Ellipse(double x_radius, double y_radius, const std::string &description);

    ~Ellipse();

    virtual int get_count() const override;

    static int m_count;

private:
    double m_x_radius;
    double m_y_radius;
};

#endif