#include <iostream>
#include <cstddef>
#include <concepts>
// one line comment

/*
A number of lines with
comments
*/

template <typename T>
void print_number(T n)
{
    static_assert(std::is_integral<T>::value, "Must pass in an integral argument");

    std::cout << "n: " << n << std::endl;
}

template <typename T>
    requires std::integral<T> // specify concept
T add(T a, T b)
{
    return a + b;
}

template <std::integral T>
T sub(T a, T b)
{
    return a - b;
}

// compile checks concept in parameter list
auto mul(std::integral auto a, std::integral auto b)
{
    return a * b;
}

template <typename T>
T mod(T a, T b)
    requires std::integral<T>
{
    return a % b;
}

// Custom concepts
// examples

template <typename T>
concept MyItegral = std::is_integral_v<T>; // requirements for the concept enforce only integral is accepted

template <typename T>
concept Multipliable = requires(T a, T b) { // requires clause specifies parameters and syntax
    a *b;                                   // Makes sure the syntax is valid, or operation is allowed
};

template <typename T>
concept Incrementable = requires(T a) { // defines different syntax to implement incrementable
    a += 1;
    ++a;
    a++;
};

// using custom concepts
template <typename T>
    requires MyItegral<T>
T add_1(T a, T b)
{
    return a + b;
}

template <MyItegral T>
T add_2(T a, T b)
{
    return a + b;
}

auto add_3(MyItegral auto a, MyItegral auto b)
{
    return a + b;
}

template <typename T>
    requires Multipliable<T>
T mul_1(T a, T b)
{
    return a / b; // different operation from concept, but current operation '/' is executed for datatypes that can do this operation
}

// Requirements

// simple requirements
template <typename T>
concept TinyType = requires(T t) {
    sizeof(T) <= 4; // only checks syntax!!!!
};

// nested requirement - enforce expressions
template <typename T>
concept TinyType_1 = requires(T t) {
    sizeof(T) <= 4;          // only checks syntax!!!!
    requires sizeof(T) <= 4; // nested requirement: check the expression
};

// compound requirement
template <typename T>
concept Addable = requires(T a, T b) {
    // noexcept is optional and checks if an exception is thrown
    {
        a + b
    } noexcept -> std::convertible_to<int>; // compound requirement
    // checks if 'a + b' is valid syntax, doesn't throw exceptions(optional), and the result is convertible to int(optional)
};

TinyType auto add_4(TinyType auto a, TinyType auto b)
{
    return a + b;
}

TinyType_1 auto add_5(TinyType_1 auto a, TinyType_1 auto b)
{
    return a + b;
}

Addable auto add_6(Addable auto a, Addable auto b)
{
    return a + b;
}

int main(int argc, char **argv)
{
    // Concepts -- in c++ 20

    std::cout << "Concepts" << std::endl;
    char x{65};
    char y{56};

    int a{5};
    double b{34.5};
    std::string s{"Dit is een string"};

    print_number(a);
    //    print_number(b); error: static assertion failed: Must pass in an integral argument static_assert(std::is_integral<T>::value, "Must pass in an integral argument");

    auto result = add(a, a);
    // result = add(b,b); compiler error based on concept: note: constraints not satisfied In substitution of ‘template<class T>  requires  integral<T> T add(T, T) [with T = double]’:

    auto s1 = sub(a, a);
    std::cout << "s1: " << s1 << std::endl;
    auto m1 = mul(a, a);
    std::cout << "m1: " << m1 << std::endl;
    auto mod1 = mod(a, a);
    std::cout << "mod1: " << mod1 << std::endl;
    std::cout << std::endl;

    // Custom concepts
    result = add_1(a, a);
    std::cout << "result add_1: " << result << std::endl;

    result = add_2(a, a);
    std::cout << "result add_2: " << result << std::endl;

    result = add_3(a, a);
    std::cout << "result add_3: " << result << std::endl;

    result = mul_1(a, a);
    std::cout << "result mul_1: " << result << std::endl;

    result = mul_1(b, b);
    std::cout << "result mul_1: " << result << std::endl;

    /* Compiler complains:
    error: no matching function for call to ‘mul_1(std::string&, std::string&)’
    note: candidate: ‘template<class T>  requires  Multipliable<T> T mul_1(T, T)’
    note: the required expression ‘(a * b)’ is invalid
    In substitution of ‘template<class auto:17, class auto:18>  requires (TinyType_1<auto:17>) && (TinyType_1<auto:18>) auto [requires ::TinyType_1<<placeholder>, >] add_5(auto:17, auto:18) [with auto:17 = double; auto:18 = double]’:
    note: nested requirement ‘(sizeof (T) <= 4)’ is not satisfied

    result = mul_1(s, s);
    std::cout << "result mul_1: " << result << std::endl;
    */

    result = add_4(x, y);
    std::cout << "result add_4: " << result << std::endl;

    result = add_4(b, b); // for double syntax is valid, expression is not checked!!!!
    std::cout << "result add_4: " << result << std::endl;

    result = add_5(x, y);
    std::cout << "result add_5: " << result << std::endl;

    /*
    Compiler error:
     note: candidate: ‘template<class auto:17, class auto:18>  requires (TinyType_1<auto:17>) && (TinyType_1<auto:18>) auto [requires ::TinyType_1<<placeholder>, >] add_5(auto:17, auto:18)’
     note:   template argument deduction/substitution failed:
     note: constraints not satisfied
        result = add_5(b, b);
        std::cout << "result add_5: " << result << std::endl;
    */

    result = add_6(x, y);
    std::cout << "result add_6: " << result << std::endl;

    result = add_6(b, b);
    std::cout << "result add_6: " << result << std::endl;

    /*
        Compiler error
        In function ‘int main(int, char**)’:
        error: no matching function for call to ‘add_6(std::string&, std::string&)’
        note: candidate: ‘template<class auto:19, class auto:20>  requires (Addable<auto:19>) && (Addable<auto:20>) auto [requires ::Addable<<placeholder>, >] add_6(auto:19, auto:20)’
        note:   template argument deduction/substitution failed:
        note: constraints not satisfied
        note: ‘(a + b)’ does not satisfy return-type-requirement


        result = add_6(s, s);
        std::cout << "result add_6: " << result << std::endl;
    */

    std::cout << "Program end" << std::endl;
    return 0;
}