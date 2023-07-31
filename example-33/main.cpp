#include <iostream>

#include <iomanip>
#include <string>
#include <limits>

#define MAX_INTS 100000000000000000
#define PACK     100000000000000
// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    // New fails
    // In some rare cases



    std::cout << "Try to allocate " << sizeof(int) * MAX_INTS << " bytes of memory" << std::endl;

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

    
    const double ROUNDS{1000;
    double sum{};
    double lot_size{sizeof(int) * PACK};

    for (size_t i{}; i < ROUNDS; i++)
    {
        try
        {
            int *lot_ints{new int[PACK]};
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

    return 0;
}