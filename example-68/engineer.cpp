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
/*
Generated constructor based on Inheriting the base constructor
Engineer::Engineer(const std::string &full_name, int age, const std::string &address, int contract_count) : Person(full_name, age, address)
{
    std::cout << "Engineer generated constructor based on person..." << std::endl;
}
*/

Engineer::Engineer(const std::string &full_name, int age, const std::string &address, int contract_count) : Person(full_name, age, address), contract_count(contract_count)
{
    std::cout << "Engineer custom constructor called..." << std::endl;
}

Engineer::Engineer(const Engineer &engineer) : Person(engineer),                        // compiler gives person data
                                               contract_count{engineer.contract_count}
{
     std::cout << "Engineer copy constructor called..." << std::endl;
}

Engineer::~Engineer()
{
    std::cout << "Engineer destructor called..." << std::endl;
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