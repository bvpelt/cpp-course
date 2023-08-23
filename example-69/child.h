#ifndef CHILD_H
#define CHILD_H

#include "parent.h"

class Child : public Parent
{

public:
    Child();

    Child(int member_var);

    ~Child();

    void print_var() const;

    void show_values() const;

private:
    int m_member_var{999};
};

#endif