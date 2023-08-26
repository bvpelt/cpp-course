#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{

public:
    Shape();
    Shape(const std::string &description);
    ~Shape();

    virtual void draw() const;

    virtual void draw(int color_depth) const;

    virtual void draw(int color_depth, int size) const;

    const std::string get_description();

protected:
    std::string m_description{""};
};

#endif