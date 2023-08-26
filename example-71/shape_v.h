#ifndef SHAPE_S_H
#define SHAPE_S_H

#include <string>

class Shape_v
{

public:
    Shape_v();
    Shape_v(const std::string &description);
    ~Shape_v();

    void draw() const;

    virtual void draw_shape() const;

    const std::string get_description();

protected:
    std::string m_description{""};
};

#endif