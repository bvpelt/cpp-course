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

CivilEngineer::CivilEngineer()
{
    std::cout << "CivilEngineer default arg constructor called..." << std::endl;
}

CivilEngineer::~CivilEngineer() {}

void CivilEngineer::build_road()
{

    int result = add(10, 2);
    result = add(5, 6, 7);
}
