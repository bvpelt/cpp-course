#include "engineer.h"

std::ostream &operator<<(std::ostream &out, const Engineer &engineer)
{
    out << "Engineer (" << &engineer << "): [ Full name: "
        << engineer.get_full_name()
        << ", Age: " << engineer.get_age()
        << ", Address: " << engineer.get_address()
        << ", Contract count: " << engineer.contract_count << " ]";
    return out;
}

Engineer::Engineer()
{
    std::cout << "Engineer default arg constructor called..." << std::endl;
}

Engineer::Engineer(const std::string &full_name, int age, const std::string &address, int contract_count) :
Person(full_name, age, address), contract_count(contract_count)
/*
only member fields of this class may be initialized on this way
m_full_name(full_name), m_age(age), m_address(address), contract_count(contract_count)  error: class ‘Engineer’ does not have any field named ‘m_full_name’
*/
{
    // Person member field initialization might work, but not for the private fields
    /*
    this->m_full_name = full_name;
    this->m_age = age;
    this->m_address = address;    error: ‘std::string Person::m_address’ is private within this context
    */
   std::cout << "Engineer custom constructor called..." << std::endl;
}

Engineer::~Engineer()
{
}

int Engineer::get_contract_count() const
{
    return this->contract_count;
}

void Engineer::build_something()
{
    this->m_full_name = "David Einstein";
    this->m_age = 73;

    this->contract_count = 23;
}