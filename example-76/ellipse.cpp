#include "ellipse.h"

#include <iostream>

int Ellipse::m_count{0};

Ellipse::Ellipse() : Ellipse(0.0, 0.0, "Nodescription"){};
Ellipse::Ellipse(double x_radius, double y_radius, const std::string &description) : Shape(description), m_x_radius(x_radius), m_y_radius(y_radius)
{
    ++m_count;
};

Ellipse::~Ellipse()
{
    --m_count;
};

int Ellipse::get_count() const
{
    return this->m_count;
}