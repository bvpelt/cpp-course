#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"

class Engineer : public Person
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &engineer);

public:
    Engineer();
    ~Engineer();

    void build_something();

    int get_contract_count() const;

private:
    int contract_count{0};
};

#endif