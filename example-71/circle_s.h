#ifndef CIRCLE_S_H
#define CIRCLE_S_H

#include "oval_s.h"

class Circle_s : public Oval_s
{
public:
    Circle_s();

    Circle_s(double radius, const std::string &description);

    ~Circle_s();

    void draw() const;

};

#endif