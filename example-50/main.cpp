#include <iostream>
#include <concepts>

// one line comment

/*
A number of lines with
comments
*/

template <typename T>
concept TinyType = requires(T t) {
    sizeof(T) <= 4;
    requires sizeof(T) <= 4; // nested requirement
};

template <typename T>
    requires std::integral<T> || std::floating_point<T>
T func_1(T t)
{
    std::cout << "func_1 value: " << t << std::endl;
    return (2 * t);
};

// Best practice
template <typename T>
    requires std::integral<T> && TinyType<T>
T func_2(T t)
{
    std::cout << "func_2 value: " << t << std::endl;
    return (2 * t);
}

// Ugly declarations
template <typename T>
    requires std::integral<T> && requires(T t) {
        sizeof(T) <= 4;
        requires sizeof(T) <= 4;
    }
T func_3(T t)
{
    std::cout << "func_3 value: " << t << std::endl;
    return (2 * t);
}

int main(int argc, char **argv)
{
    // Combination of conceps
    int i{20};
    double d{35};
    float f{1.2345f};

    std::cout << "Combining concepts" << std::endl;
    func_1(i);
    func_1(d);
    func_1(f);

    func_2(i);
    // func_2(d); compiler error double is to long
    // func_2(f); compiler error float is not allowed
    func_3(i);
    // func_3(d); compiler error double is to long
    // func_3(f); compiler error
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}