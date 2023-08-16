#include "person.h"

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person (" << &person << "): [ Full name: " << person.get_full_name() << ", Age: " << person.get_age() << ", Address: " << person.get_address() << " ]";
    return out;
}

Person::Person() = default;

Person::Person(const std::string &full_name, int age, const std::string &address) : m_full_name{full_name}, m_age{age}, m_address{address}
{
}

Person::~Person()
{
}

// Getters
std::string Person::get_full_name() const
{
    return this->m_full_name;
}

int Person::get_age() const
{
    return this->m_age;
}

std::string Person::get_address() const
{
    return this->m_address;
}
