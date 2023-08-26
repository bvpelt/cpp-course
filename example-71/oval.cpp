#include "oval.h"

#include "iostream"

Oval::Oval() = default;

Oval::Oval(double x_radius, double y_radius, const std::string &description) : m_x_radius(x_radius), m_y_radius(y_radius), Shape(description)
{
}

Oval::~Oval() = default;

void Oval::draw() const
{
    std::cout << "(Oval): draw called. Drawing: " << m_description << " with x_radius: " << m_x_radius << " y_radius: " << m_y_radius << std::endl;
}

double Oval::get_x_rad() const
{
    return this->m_x_radius;
}

double Oval::get_y_rad() const
{
    return this->m_y_radius;
}