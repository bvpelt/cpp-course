#include "base.h"

#include <iostream>

Base::Base() = default;

Base::~Base() = default;

double Base::add(double a, double b) const
{
    std::cout << "Base add() called: " ;
    return (a + b);
}