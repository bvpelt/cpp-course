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
    std::string get_dog_name();

    std::string get_dog_breed();

    int *get_dog_age();

    // setters
    void set_dog_name(std::string dog_name_param);

    void set_dog_breed(std::string dog_breed_param);

    void set_dog_age(int age_param);

private:
    std::string dog_name;

    std::string dog_breed;

    int *dog_age{nullptr};
};

#endif