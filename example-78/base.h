#ifndef BASE_H
#define BASE_H

class Base
{
public:
    Base();
    ~Base();

    virtual double add(double a = 3, double b = 5) const;
};

#endif