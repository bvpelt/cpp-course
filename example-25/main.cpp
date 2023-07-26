#include <iostream>

#include <iomanip>
#include <string>
#include <limits>

// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    // Arrays, index starts at 0 and store elements of the same type
    const int MAX_SCORES{10};
    int scores[MAX_SCORES];

    // reading/writing outside array limits is possible, but undefined possibly bad data
    std::cout << "Reading values from scores (uninitialized)" << std::endl;
    std::cout << "sizeof scores: " << sizeof(scores) / sizeof(int) << std::endl; // number of elements in the array
    std::cout << "sizeof scores: " << std::size(scores)  << std::endl; // number of elements in the array
    for (int i = 0; i < MAX_SCORES + 3; ++i)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < MAX_SCORES; ++i)
    {
        scores[i] = i * 2 + 3;
    }

    std::cout << "Reading assinged values from scores" << std::endl;
    for (int i = 0; i < MAX_SCORES; ++i)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }
    std::cout << std::endl;

    const int MAX_SALARIES{5};
    double salaries[MAX_SALARIES]{12.7, 7.5, 13.2, 8.1, 9.3};

    std::cout << "sizeof salaries: " << sizeof(salaries) / sizeof(double) << std::endl; // number of elements in the array
    std::cout << "sizeof salaries: " << std::size(salaries)  << std::endl; // number of elements in the array
    for (size_t i{0}; i < MAX_SALARIES; ++i)
    {
        std::cout << "salary[" << i << "]: " << salaries[i] << std::endl;
    }
    std::cout << std::endl;

    int families[5]{12, 6, 7}; // partial initialization of array -> values [3,4] are uninitialized
    for (size_t i{0}; i < 5; ++i)
    {
        std::cout << "families[" << i << "]: " << families[i] << std::endl;
    }
    std::cout << std::endl;

    // range based loop
    int class_sizes[]{10, 12, 15, 11, 18, 17};
    for (auto value : class_sizes) // range based for loop
    {
        std::cout << "value: " << value << std::endl;
    }
    std::cout << std::endl;

    const int multipliers[]{22, 30, 15};
    // multipliers[1] = 20;                   --- compiler error

    int sum{0};
    for (int element : scores)
    {
        sum += element;
    }
    std::cout << "Sum of scores: " << sum << std::endl;
    std::cout << std::endl;

    return 0;
}