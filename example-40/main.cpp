#include <iostream>
#include "person.h"

// one line comment

/*
A number of lines with
comments
*/

// Variables : Declaration and definition

double weight{};

// double weight {};  error: redefinition of ‘double weight’

double add(double a, double b);

struct Point
{
    double m_x{};
    double m_y{};
};

/*
multiple definitions of Point in the same translation unit
error: redefinition of ‘struct Point’

struct Point {
    double m_x{};
    double m_y{};
};
*/

/*
error: redefinition of ‘class Person’

class Person {

};
*/

/*

problem for the linker - multiple definitions for person_count and Person constructor


int Person::person_count = 8;

Person::Person(const std::string &names_param, int age_param)
    : full_name{names_param}, age{age_param}
{
    ++person_count;
}
*/

int main(int argc, char **argv)
{
    // One definition rule

    std::cout << "weight: " << weight << std::endl;

    double result = add(5, 10);
    std::cout << "5+10: " << result << std::endl;
    std::cout << std::endl;

    Point p1;
    std::cout << "p1.m_x: " << p1.m_x << " p1.m_y: " << p1.m_y << std::endl;
    std::cout << std::endl;

    Person person("John Snow", 35);
    person.print_info();

    std::cout << "Program end" << std::endl;
    return 0;
}

double add(double a, double b)
{
    return a + b;
}

/* error: redefinition of ‘double add(double, double)’

double add(double a, double b)
{
    return a - b;
}

*/