#ifndef OVAL_S_H
#define OVAL_S_H

#include <string>
#include "shape_s.h"

class Oval_s : public Shape_s
{
public:
    Oval_s();

    Oval_s(double x_radius, double y_radius, const std::string &description);

    ~Oval_s();

    void draw() const;

    double get_x_rad() const;

    double get_y_rad() const;

private:
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};

#endif