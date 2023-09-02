#ifndef POINT_H
#define POINT_H

#include "streaminsertable.h"

class Point : public StreamInsertable
{
public:
    Point() = default;

    Point(double x, double y) : x(x), y(y){};

    virtual ~Point() = default;

    virtual void stream_insert(std::ostream &out) const override
    {
        out << "Point [x:" << x << ", y: " << y << "]";
    }

private:
    double x{0.0};
    double y{0.0};
};

#endif