#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

/*
Lambda function signature:
[capture list](parameters) -> return type {
    function body
}

-> return type can be derived by the compiler

*/

auto func = []()
{
    std::cout << "Hello World!" << std::endl;
};

int main(int argc, char **argv)
{
    // Lambda Functions

    std::cout << "Using Lambda function" << std::endl;
    func();
    std::cout << std::endl;

    // Unnamed Lambda function
    // is activated by appending () after the declaration
    []()
    {
        std::cout << "Unnamed Lambda Function: Hello World!" << std::endl;
    }();
    std::cout << std::endl;

    // Lambda function with parameters
    // activated by appending (12.1, 5.7)
    [](double a, double b)
    {
        std::cout << "a + b: " << (a + b) << std::endl;
    }(12.1, 5.7);
    std::cout << std::endl;

    // return result of Lambda function
    auto result = [](double a, double b)
    {
        return (a + b);
    }(12.1, 5.7);
    std::cout << "result: " << result << std::endl;
    std::cout << std::endl;

    // print result directly
    std::cout << "direct printed result: " << [](double a, double b)
    { return (a + b); }(12.1, 5.7)
              << std::endl;
    std::cout << std::endl;

    // specify return type explicitly
    auto result1 = [](double a, double b) -> double
    {
        return (a + b);
    }(12.1, 5.7);
    std::cout << "result1: " << result1 << std::endl;
    std::cout << std::endl;

    // Capture list
    // Lambda function only has access to parameters passed in parameter list, not to global variables
    // these must be placed in the capture list
    //
    double d1{10};
    double d2{20};
    auto dfunc = [d1, d2]()
    {
        std::cout << "d1 + d2: " << d1 + d2 << std::endl;
    };
    dfunc();
    std::cout << std::endl;

    // capture by value
    int c{42};

    auto func1 = [c]() { // c will be 42!!!!!
        std::cout << "Inner value: " << c << std::endl;
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "Outer value: " << c << std::endl;
        func1();
        ++c;
    }
    std::cout << std::endl;

    // capture by value
    auto func2 = [&c]() { // c will be the current value of c and will change in the outer loop because c is passed by reference
        std::cout << "Inner value by reference 2: " << c << std::endl;
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "Outer value: " << c << std::endl;
        func2();
        ++c;
    }
    std::cout << std::endl;

    // capture everything by value
    auto func3 = [=]() { // every thing outside scope of the lambda function - capturing by value
        std::cout << "Inner value by reference 3: " << c << std::endl;
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "Outer value: " << c << std::endl;
        func3();
        ++c;
    }
    std::cout << std::endl;

    // capture everything by reference
    auto func4 = [&]() { // every thing outside scope of the lambda function - capturing by value
        std::cout << "Inner value by reference 4: " << c << std::endl;
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "Outer value: " << c << std::endl;
        func4();
        ++c;
    }
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}