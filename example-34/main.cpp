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
    // Memory leaks - Dynamic allocated arrays

    const size_t size{10};
    double *p_salaries{new double[size]};                             // salaries array will contain garbage values
    int *p_students{new (std::nothrow) int[size]{}};                  // All values are initialized to 0
    double *p_scores{new (std::nothrow) double[size]{1, 2, 3, 4, 5}}; // Allocating memory space for array of size double vars. First 5 values initialized, rest will be 0's

    if (p_salaries)
    {
        for (size_t i{}; i < size; i++)
        {
            std::cout << "[" << i << "]: "
                      << "salarie: " << p_salaries[i] << ": " << *(p_salaries + i) << std::endl;
        }
        std::cout << std::endl;
    }

    if (p_students)
    {
        for (size_t i{}; i < size; i++)
        {
            std::cout << "[" << i << "]: "
                      << "students: " << p_students[i] << ": " << *(p_students + i) << std::endl;
        }
        std::cout << std::endl;
    }

    if (p_scores)
    {
        for (size_t i{}; i < size; i++)
        {
            std::cout << "[" << i << "]: "
                      << "scores: " << p_scores[i] << ": " << *(p_scores + i) << std::endl;
        }
        std::cout << std::endl;
    }

    // Release dynamic allocated memory
    delete[] p_salaries;
    p_salaries = nullptr;

    delete[] p_students;
    p_students = nullptr;

    delete[] p_scores;
    p_scores = nullptr;

    int scores[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "scores size: " << std::size(scores) << std::endl;
    for (auto s : scores)
    {
        std::cout << "value: " << s << std::endl;
    }
    std::cout << "Program end" << std::endl;

    return 0;
}