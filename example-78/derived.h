#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"

class Derived : public Base
{
public:
    Derived();
    ~Derived();

    virtual double add(double a = 10, double b = 15) const override; // different default parameters uses the most specific overridden function
    // virtual double add(double, double b) const override; // main.cpp - error: no matching function for call to ‘Derived::add()’ - because no default parameters available
};

#endif