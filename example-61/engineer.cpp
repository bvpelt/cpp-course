#include "engineer.h"

std::ostream &operator<<(std::ostream &out, const Engineer &engineer)
{
    out << "Engineer (" << &engineer << "): [ Full name: "
        << engineer.get_full_name() << ", Age: " << engineer.get_age()
        << ", Address: " << engineer.get_address()
        << ", Contract count: " << engineer.contract_count << " ]";
    return out;
}

Engineer::Engineer() = default;

Engineer::~Engineer()
{
}

void Engineer::build_something()
{
    this->m_full_name = "David Einstein";
    this->m_age = 73;
    // m_address = "Invalid";     error: ‘std::string Person::m_address’ is private within this context
    this->contract_count = 23;
}