#ifndef SHAPE_S_H
#define SHAPE_S_H

#include <string>

class Shape_s
{

public:
    Shape_s();
    Shape_s(const std::string &description);
    ~Shape_s();

    void draw() const;

    const std::string get_description();

protected:
    std::string m_description{""};
};

#endif