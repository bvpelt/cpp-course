#include "circle.h"

#include <iostream>

Circle::Circle() = default;

Circle::Circle(double radius, const std::string &description) : Oval(radius, radius, description)
{
}

Circle::~Circle() = default;

void Circle::draw() const
{
    std::cout << "(Circle) draw called. Drawing: " << m_description << " with radius: " << get_x_rad() << std::endl;
}

void Circle::draw(int color_depth, int size) const
{
    std::cout << "(Circle) draw called. Drawing: " << m_description << " color depth: " << color_depth << " size: " << size << std::endl;
}