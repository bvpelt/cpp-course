#include "derived.h"

#include <iostream>

Derived::Derived() = default;

Derived::~Derived() = default;

double Derived::add(double a, double b) const 
{
    return (a + b + 100);
}