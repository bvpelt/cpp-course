#include "civilengineer.h"

std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilEngineer)
{
    out << "CivilEngineer (" << &civilEngineer
        << ")"
        //   << ": [ Full name: " << civilEngineer.get_full_name()     error: ‘std::string Person::get_full_name() const’ is private within this context
        //   << ", Age: " << civilEngineer.get_age()                   error: ‘int Person::get_age() const’ is private within this context
        //   << ", Address: " << civilEngineer.get_address() << " ]";  error: ‘std::string Person::get_address() const’ is private within this context
        ;
    return out;
}

CivilEngineer::CivilEngineer() = default;

CivilEngineer::~CivilEngineer() {}

void CivilEngineer::build_road()
{
    // std::string name = this->get_full_name();   error: ‘std::string Person::get_full_name() const’ is private within this context
    // this->m_full_name = "Daniel Gray";          error: ‘std::string Person::m_full_name’ is private within this context
    this->m_age = 24;
}
