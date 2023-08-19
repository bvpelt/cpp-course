#ifndef CIVILENGINEER_H
#define CIVILENGINEER_H

#include "engineer.h"

class CivilEngineer : public Engineer
{

    friend std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilEngineer);

public:
    CivilEngineer();

    CivilEngineer(const std::string &full_name, int age, const std::string &address, int contract_count, const std::string &speciality);
    
    ~CivilEngineer();

    void build_road();

private:
    std::string m_speciality{"None"};
};
#endif