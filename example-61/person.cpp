#include "person.h"

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person (" << &person << "): [ " << person.first_name << " " << person.last_name << "]";
    return out;
}

Person::Person() {}

Person::Person(std::string &first_name_param, std::string &last_name_param) : first_name(first_name_param), last_name(last_name_param)
{
}

Person::Person(const char *first_name_param, const char *last_name_param) : first_name(first_name_param), last_name(last_name_param)
{
}

Person::~Person()
{
}

std::string Person::get_first_name() const
{
    return this->first_name;
}

std::string Person::get_last_name() const
{
    return this->last_name;
}

void Person::set_first_name(std::string &first_name)
{
    this->first_name = first_name;
}

void Person::set_first_name(const char *first_name)
{
    this->first_name = first_name;
}

void Person::set_last_name(std::string &last_name)
{
    this->last_name = last_name;
}

void Person::set_last_name(const char *last_name)
{
    this->last_name = last_name;
}
