#ifndef NURSE_H
#define NURSE_H

#include "person.h"

class Nurse : protected Person
{
    friend std::ostream &operator<<(std::ostream &cout, const Nurse &nurse);

public:
    Nurse();
    ~Nurse();

    void treat_unwell_person();

private:
    int practice_certificate_id{0};
};

#endif