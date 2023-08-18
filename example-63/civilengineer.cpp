#include "civilengineer.h"

std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilEngineer)
{
    out << "CivilEngineer (" << &civilEngineer
        << ")"
        << ": [ Full name: " << civilEngineer.get_full_name()
        << ", Age: " << civilEngineer.get_age()
        << ", Address: " << civilEngineer.get_address()
        << ", Contract count: " << civilEngineer.get_contract_count()
        << ", m_speciality: " << civilEngineer.m_speciality
        << " ]";

    return out;
}

CivilEngineer::CivilEngineer() = default;

CivilEngineer::~CivilEngineer() {}

void CivilEngineer::build_road()
{
    // std::string name = this->get_full_name();   error: ‘std::string Person::get_full_name() const’ is private within this context
    // this->m_full_name = "Daniel Gray";          error: ‘std::string Person::m_full_name’ is private within this context
    // this->m_age = 24;

    int result = add(10, 2);
    result = add(5, 6, 7);
}
