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

    int get_contract_count() const;

public:
    using Person::add; // all the overloads redefine only based on name not on function signature

protected: // override access level of Person for functions
    using Person::get_address;
    using Person::get_age;
    using Person::get_full_name;
    // using Person::m_address;    error: ‘std::string Person::m_address’ is private within this context
    using Person::do_something;

public:
    using Person::m_full_name;

    // using Person::add_numbers;

protected:
    int contract_count{0};
};

#endif