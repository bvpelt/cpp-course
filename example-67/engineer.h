#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"

class Engineer : public Person
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &engineer);

    using Person::Person; // Explicit define inheritance of the base constructor

public:
    Engineer();

    Engineer(const std::string &full_name, int age, const std::string &address, int contract_count);

    Engineer(const Engineer &engineer);

    ~Engineer();

    void build_something();

    int get_contract_count() const;

private:
    int contract_count{9999};
};

#endif