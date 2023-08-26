#include "shape.h"

#include <iostream>

Shape::Shape() = default;

Shape::Shape(const std::string &description) : m_description(description) {}

Shape::~Shape() = default;

void Shape::draw() const
{
    std::cout << "(Shape) draw called. Drawing: " << m_description << std::endl;
}

void Shape::draw(int color_depth) const
{
    std::cout << "(Shape) draw called. Drawing: " << m_description << " color depth: " << color_depth << std::endl;
}

void Shape::draw(int color_depth, int size) const
{
    std::cout << "(Shape) draw called. Drawing: " << m_description << " color depth: " << color_depth << " size: " << size << std::endl;
}

const std::string Shape::get_description()
{
    return this->m_description;
}