#include "parent.h"

Parent::Parent() = default;

Parent::Parent(int member_var) : m_member_var(member_var)
{
}

Parent::~Parent() = default;

void Parent::print_var() const
{
    std::cout << "(Parent): The value is: " << this->m_member_var << std::endl;
}