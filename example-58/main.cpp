#include <iostream>
#include <cstring>

// one line comment

/*
A number of lines with
comments
*/

class Wrapper
{
public:
    void do_something() // not counted by size of object
    {
    }

    void print_infO() // not counted by size of object
    {
        std::cout << "var1: " << m_var1 << std::endl;
        std::cout << "var2: " << m_var2 << std::endl;
        std::cout << "name: " << m_name << std::endl;
    }

private:
    int m_var1{};                                         // 4 bytes
    int m_var2{};                                         // 4 bytes
    std::string m_name{"Lorem ipsum dolor sit amet ..."}; // size of pointer or length of the string
};

class Dog
{
public:
    Dog() = default;

private:
    size_t leg_count;
};

class Dog1
{
public:
    Dog1() = default;

    void print_info()
    {
    }

    void do_something()
    {
    }

private:
    size_t leg_count;
    size_t arm_count;
};

class Dog2
{
public:
    Dog2() = default;

    void print_info()
    {
    }

    void do_something()
    {
    }

private:
    size_t leg_count; // 8
    size_t arm_count; // 8
    int *p_age;       // 8
};

int main(int argc, char **argv)
{
    // Size of class object

    std::cout << "Size of class object" << std::endl;
    Dog dog;
    std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;
    std::cout << "sizeof(Dog): " << sizeof(Dog) << std::endl;

    Dog1 dog1;
    std::cout << "sizeof(Dog1): " << sizeof(Dog1) << std::endl;
    std::cout << "sizeof(dog1): " << sizeof(dog1) << std::endl;

    Dog2 dog2;
    std::cout << "sizeof(int *): " << sizeof(int *) << std::endl;
    std::cout << "sizeof(Dog2): " << sizeof(Dog2) << std::endl;
    std::cout << "sizeof(dog2): " << sizeof(dog2) << std::endl;

    std::string name{"Hello World!"};
    std::cout << "sizeof(name): " << sizeof(name) << " strlen(name): " << std::strlen(name.c_str()) << " name: " << name << std::endl;
    name = "I am the king of the universe";
    std::cout << "sizeof(name): " << sizeof(name) << " strlen(name): " << std::strlen(name.c_str()) << " name: " << name << std::endl;

    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}