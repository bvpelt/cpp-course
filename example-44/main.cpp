#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

// pass by value - does not change value
void say_age(int age);

// pass by pointer - changes pointer value
void say_length(int *length);

// pass by reference - changes parameter value
void say_weight(int &weight);

int main(int argc, char **argv)
{
    // Pass by value

    int age{23};
    int length{180};
    int weight{78};

    std::cout << "age - before: " << age << std::endl;
    say_age(age);
    std::cout << "age - after : " << age << std::endl;
    std::cout << std::endl;

    std::cout << "length - before: " << length << std::endl;
    say_length(&length);
    std::cout << "length - after : " << length << std::endl;
    std::cout << std::endl;

    std::cout << "weight - before: " << weight << std::endl;
    say_weight(weight);
    std::cout << "weight - after : " << weight << std::endl;
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}

// pass variable by value
void say_age(int age)
{

    ++age; // changing the copy. Outside age is not affected
    std::cout << "Hello! You are: " << age << " years old." << std::endl;

    return;
}

// pass by pointer
void say_length(int *length)
{
    ++(*length); // This will change the content of the variable where the pointer points to
    std::cout << "Hello! You are: " << *length << " cm long" << std::endl;
    return;
}

// pass by reference
void say_weight(int &weight)
{
    ++weight;
    std::cout << "Hello! You weigh: " << weight << " kg" << std::endl;
    return;
}