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

/*
void Oval::Draw() const
{
    std::cout << "(Oval): draW called. Drawing: " << m_description << " with x_radius: " << m_x_radius << " y_radius: " << m_y_radius << std::endl;
}
*/

void Oval::draW() const
{
    std::cout << "(Oval): draW called. Drawing: " << m_description << " with x_radius: " << m_x_radius << " y_radius: " << m_y_radius << std::endl;
}

void Oval::draw(int color_depth, int size) const
{
    std::cout << "(Oval) draw called. Drawing: " << m_description << " color depth: " << color_depth << " size: " << size << std::endl;
}

double Oval::get_x_rad() const
{
    return this->m_x_radius;
}

double Oval::get_y_rad() const
{
    return this->m_y_radius;
}