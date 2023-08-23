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

CivilEngineer::CivilEngineer(const std::string &full_name, int age, const std::string &address, int contract_count, const std::string &speciality) : Engineer(full_name, age, address, contract_count), m_speciality(speciality)
{
    std::cout << "CivilEngineer custom constructor called..." << std::endl;
}

CivilEngineer::CivilEngineer(const CivilEngineer &civilEngineer) : Engineer(civilEngineer),
                                                                   m_speciality{civilEngineer.m_speciality}
{
    std::cout << "CivilEngineer copy constructor called..." << std::endl;
}

CivilEngineer::~CivilEngineer()
{
    std::cout << "CivilEngineer destructor called..." << std::endl;
}

void CivilEngineer::build_road()
{
    int result = add(10, 2);
    result = add(5, 6, 7);
}
