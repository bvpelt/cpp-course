#include "shape.h"

#include <iostream>

Shape::Shape() = default;

Shape::Shape(const std::string &description) : m_description(description) {}

Shape::~Shape() = default;

void Shape::draw() const
{
    std::cout << "(Shape) draw called. Drawing: " << m_description << std::endl;
}

const std::string Shape::get_description()
{
    return this->m_description;
}