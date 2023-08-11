#ifndef DOG_H
#define DOG_H

#include <string>

class Dog
{
public:
    Dog();

    Dog(std::string name_param, std::string breed_param, int age_param);

    ~Dog(); // Destructor declared

    // getters
    std::string get_name();

    std::string get_breed();

    int *get_age();

    // setters
    Dog * set_name(std::string dog_name_param);

    Dog * set_breed(std::string dog_breed_param);

    Dog * set_age(int age_param);

    void print_info();

private:
    std::string name;

    std::string breed;

    int *age{nullptr};
};

#endif