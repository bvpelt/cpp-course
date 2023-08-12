#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person
{
    friend std::ostream &operator<<(std::ostream &out, const Person &person);

public:
    Person();

    Person(std::string &first_name_param, std::string &last_name_param);
    Person(const char *first_name_param, const char *last_name_param);

    ~Person();

    // public Getters
    std::string get_first_name() const;

    std::string get_last_name() const;

    // public Setters
    void set_first_name(std::string &first_name);

    void set_first_name(const char *first_name);

    void set_last_name(std::string &last_name);

    void set_last_name(const char *last_name);

private:
    std::string last_name{"Mysterious"};
    std::string first_name{"Person"};
};

#endif