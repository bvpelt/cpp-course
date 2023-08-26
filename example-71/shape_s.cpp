#include "shape_s.h"

#include <iostream>

Shape_s::Shape_s() = default;

Shape_s::Shape_s(const std::string &description) : m_description(description) {}

Shape_s::~Shape_s() = default;

void Shape_s::draw() const
{
    std::cout << "(Shape) draw called. Drawing: " << m_description << std::endl;
}

const std::string Shape_s::get_description()
{
    return this->m_description;
}