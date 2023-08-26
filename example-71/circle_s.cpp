#include "circle_s.h"

#include <iostream>

Circle_s::Circle_s() = default;

Circle_s::Circle_s(double radius, const std::string &description) : Oval_s(radius, radius, description)
{
}

Circle_s::~Circle_s() = default;

void Circle_s::draw() const
{
    std::cout << "(Circle) draw called. Drawing: " << m_description << " with radius: " << get_x_rad() << std::endl;
}
