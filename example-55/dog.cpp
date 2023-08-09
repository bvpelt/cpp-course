#include "dog.h"

Dog::Dog() = default;

Dog::Dog(std::string name_param, std::string breed_param, int age_param) {
    dog_name = name_param;
    dog_breed = breed_param;
    dog_age = new int(age_param);
}

Dog::~Dog() { // Destructor declared
    delete dog_age;
}

// getters
std::string Dog::get_dog_name() {
    return dog_name;
}

std::string Dog::get_dog_breed() {
    return dog_breed;
}

int *Dog::get_dog_age() {
    return dog_age;
}

// setters
void Dog::set_dog_name(std::string dog_name_param) {
    dog_name = dog_name_param;
}

void Dog::set_dog_breed(std::string dog_breed_param) {
    dog_breed = dog_breed_param;
}

void Dog::set_dog_age(int age_param) {
    if (dog_age) {
        delete dog_age;
    }
    dog_age = new int(age_param);
}