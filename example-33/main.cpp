#include <iostream>

#include <iomanip>
#include <string>
#include <limits>

#define MAX_INTS 100000000000000000
#define PACK 1000000000
// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    // New fails
    // In some rare cases

    std::cout << "Try to allocate 1: " << sizeof(int) * MAX_INTS << " bytes of memory" << std::endl;

    try
    {
        // simulate allocation a huge array
        int *lot_of_ints{new int[MAX_INTS]};
    }
    catch (std::exception &ex)
    {
        std::cout << "Caught exception 1: " << ex.what() << std::endl;
    }
    std::cout << std::endl;

    
    const double ROUNDS{100};
    double sum{};
    double lot_size{sizeof(int) * PACK};

    for (size_t i{}; i < ROUNDS; i++)
    {
        try
        {
            int *lot_of_ints_1{new int[PACK]};
        }
        catch (std::exception &ex)
        {
            std::cout << "Caught exception 2: " << ex.what() << std::endl;
            i = ROUNDS;
        }
        sum += lot_size;
        std::cout << "[" << i << "]: allocated: " << lot_size << " of bytes, total allocated: " << sum << std::endl;
    }
    std::cout << std::endl;
    

    std::cout << "Try to allocate 2: " << sizeof(int) * MAX_INTS << " bytes of memory" << std::endl;

    try
    {
        int *lot_of_ints_2{new (std::nothrow) int[MAX_INTS]};
        std::cout << "After try to allocate 2 - lot_of_ints_2 pointer: " << lot_of_ints_2  << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cout << "Caught exception 3: " << ex.what() << std::endl;
    }

    std::cout << "Program end" << std::endl;
    return 0;
}