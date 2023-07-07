#include <iostream>

// one line comment

/*
A number of lines with
comments
*/
int main(int argc, char **argv)
{

    std::cout << "output message to cout" << std::endl;

    int age{21};
    std::string name;

    std::cout << "age: " << age << std::endl;

    std::cerr << "output message to cerr" << std::endl;

    std::clog << "output message to clog" << std::endl;

    std::cout << "Please give name: " << std::endl;
    std::cin >> name;

    std::cout << "Please give age: " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;

    std::cout << "Please type in name and age, seperated by spaces: ";
    std::cin >> name >> age;
    std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;

    std::cout << "Please give name for getline: " << std::endl;
    std::getline(std::cin, name);
    std::cout << "Name from getline " << name << std::endl;

    return 0;
}