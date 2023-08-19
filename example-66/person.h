#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person
{
    friend std::ostream &operator<<(std::ostream &out, const Person &person);

public:
    Person();

    Person(const std::string &full_name, int age, const std::string &address);

    Person(const Person& person);

    ~Person();

    // Getters
    std::string get_full_name() const;

    int get_age() const;

    std::string get_address() const;

    int add(int a, int b) const;

    int add(int a, int b, int c) const;

    void do_something() const;

public:
    std::string m_full_name{"None"};

protected:
    int m_age{0};

private:
    std::string m_address{"None"};
};

#endif