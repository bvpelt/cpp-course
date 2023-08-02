
#include "person.h"

// double weight {}; ld error: multiple definition of `weight'; /tmp/cckDCkZg.o:/home/bvpelt/Develop/cpp-course/example-40/main.cpp:13: first defined here

/*  multiple definition of `add(double, double)'; /tmp/cc0WeZZU.o:/home/bvpelt/Develop/cpp-course/example-40/main.cpp:33: first defined here

double add(double a, double b)
{
    return a - b;
}

*/

/*
Valid declaration since the declaration is in a seperate translation unit

*/
struct Point
{
    double m_x;
    double m_y;
};

int Person::person_count = 8;

Person::Person(const std::string &names_param, int age_param)
    : full_name{names_param}, age{age_param}
{
    ++person_count;
}
