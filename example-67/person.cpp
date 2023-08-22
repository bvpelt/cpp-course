#include "person.h"

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person (" << &person << "): [ Full name: " << person.get_full_name() << ", Age: " << person.get_age() << ", Address: " << person.get_address() << " ]";
    return out;
}

Person::Person(){
    std::cout << "Person default arg constructor called..." << std::endl;
}

Person::Person(const std::string &full_name, int age, const std::string &address) : m_full_name{full_name}, m_age{age}, m_address{address}
{
    std::cout << "Person custom constructor called..." << std::endl;
}

Person::Person(const Person& person) :
m_full_name{person.m_full_name}, m_age{person.m_age}, m_address{person.m_address}
{
 std::cout << "Person copy constructor called..." << std::endl;
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

int Person::add(int a, int b) const
{
    return a + b;
}

int Person::add(int a, int b, int c) const
{
    return a + b + c;
}

void Person::do_something() const
{
    std::cout << "Hello" << std::endl;
}