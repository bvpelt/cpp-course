#ifndef PARENT_H
#define PARENT_H

#include <iostream>

class Parent
{
public:
    Parent();

    Parent(int member_var);

    ~Parent();

    void print_var() const;

protected: // it should be inherited!!!!!
    int m_member_var{100};
};

#endif