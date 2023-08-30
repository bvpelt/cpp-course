#include "shape.h"

#include <iostream>

int Shape::m_count = 0;

Shape::Shape() : Shape("Nodescription"){};

Shape::Shape(const std::string &description) : m_description(description)
{
    ++m_count;
};

std::string Shape::get_description() const
{
    return this->m_description;
}

Shape::~Shape()
{
    --m_count;
}

void Shape::draw() const
{
    std::cout << "(Shape) draw() called for: " << m_description << std::endl;
}

int Shape::get_count() const
{
    return this->m_count;
}