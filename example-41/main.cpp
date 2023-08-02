#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

// no input, no output
void f1()
{
}

void enter_bar(const int age)
{
    if (age > 18)
    {
        std::cout << "You are " << age << " years old. Please proceed" << std::endl;
    }
    else
    {
        std::cout << "Sorry, you are too young" << std::endl;
    }
}

int max(const int a, const int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// does not return anything
void say_hello()
{
    std::cout << "Hello" << std::endl;
    return;
}

int lucky_number()
{
    return 99;
}

// Inside the function the values of a and b are incremented
// no impact on variable which are passed
double increment_multiply(double a, double b)
{
    std::cout << "before increment a: " << a << " b: " << b << std::endl;
    double result = ((++a) * (++b));
    std::cout << "after increment  a: " << a << " b: " << b << std::endl;

    return result;
}

/*
error: ambiguating new declaration of ‘int f1()’
int f1() {
    return 1;
}
*/

int main(int argc, char **argv)
{
    // Functions

    std::cout << "Functions" << std::endl;
    f1();
    std::cout << std::endl;

    enter_bar(17);
    enter_bar(18);
    enter_bar(19);
    std::cout << std::endl;

    int result{};
    result = max(1, 10);
    std::cout << "max(1,10): " << result << std::endl;
    result = max(10, 1);
    std::cout << "max(10,1): " << result << std::endl;
    std::cout << std::endl;

    say_hello();
    std::cout << std::endl;

    std::cout << "lucky number: " << lucky_number() << std::endl;
    std::cout << std::endl;

    double a{5};
    double b{10};
    double r{};
    std::cout << "Before increment a: " << a << " b: " << b << " r: " << r << std::endl;
    r = increment_multiply(a, b);
    std::cout << "After increment  a: " << a << " b: " << b << " r: " << r << std::endl;
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}