#include "oval_s.h"

#include "iostream"

Oval_s::Oval_s() = default;

Oval_s::Oval_s(double x_radius, double y_radius, const std::string &description) : m_x_radius(x_radius), m_y_radius(y_radius), Shape_s(description)
{
}

Oval_s::~Oval_s() = default;

void Oval_s::draw() const
{
    std::cout << "(Oval): draw called. Drawing: " << m_description << " with x_radius: " << m_x_radius << " y_radius: " << m_y_radius << std::endl;
}

double Oval_s::get_x_rad() const
{
    return this->m_x_radius;
}

double Oval_s::get_y_rad() const
{
    return this->m_y_radius;
}