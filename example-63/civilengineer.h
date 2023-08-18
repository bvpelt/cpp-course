#ifndef CIVILENGINEER_H
#define CIVILENGINEER_H

#include "engineer.h"

class CivilEngineer : public Engineer
{

    friend std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilEngineer);

public:
    CivilEngineer();
    ~CivilEngineer();

    void build_road();

public:
    //using Person::do_something; error: ‘class Person Person::Person’ is private within this context

private:
    std::string m_speciality{"None"};
};
#endif