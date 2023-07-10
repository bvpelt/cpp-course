#include <iostream>
#include <iomanip>
// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{

    bool red_light{true};
    bool green_light{false};

    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;

    if (red_light == true)
    {
        std::cout << "Stop!" << std::endl;
    }
    else
    {
        std::cout << "Go through" << std::endl;
    }

    if (green_light)
    {
        std::cout << "The light is green!" << std::endl;
    }
    else
    {
        std::cout << "The light is NOT green!" << std::endl;
    }

    // Printout true and false
    std::cout << std::boolalpha;  // forces the output format to true/false
    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;

    std::cout << "size of red_light: " << sizeof(red_light) << std::endl;
    
    return 0;
}