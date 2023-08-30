#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{

public:
    Shape();

    Shape(const std::string &description);

    virtual ~Shape();

    void draw() const;

    virtual int get_count() const;

    std::string get_description() const;
    
    static int m_count; // Associated with the class not with the instantiated object

protected:
    std::string m_description{""};
};

#endif