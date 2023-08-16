#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"

class Engineer : private Person
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &engineer);

public:
    Engineer();
    ~Engineer();

    void build_something();

private:
    int contract_count{0};
};

#endif