#include "nurse.h"

std::ostream &operator<<(std::ostream &out, const Nurse &nurse)
{
    out << "Nurse (" << &nurse << "): [ Full name: "
        << nurse.get_full_name() << ", Age: " << nurse.get_age()
        << ", Address: " << nurse.get_address()
        << ", Practice certificate id: " << nurse.practice_certificate_id << " ]";
    return out;
}

Nurse::Nurse() = default;

Nurse::~Nurse(){};

void Nurse::treat_unwell_person()
{
    this->m_full_name = "Florance Nightingale";
    this->m_age = 45;
    this->practice_certificate_id = 2013;
    //m_address = "Invalid";     error: ‘std::string Person::m_address’ is private within this context
}