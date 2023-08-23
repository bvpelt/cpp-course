#include "child.h"

Child::Child() = default;

Child::Child(int member_var) : m_member_var(member_var) {}

Child::~Child() = default;

void Child::print_var() const
{
    std::cout << "(Child): The value is: " << this->m_member_var << std::endl;
}

void Child::show_values() const
{
    std::cout << "(Child): The value is: " << this->m_member_var << std::endl;
    std::cout << "(Parent): The value is: " << Parent::m_member_var << std::endl;
}