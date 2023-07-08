#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    // braced initialization
    int elephant;      // no initialized value - garbage data, some compilers initialize with zero
    int lion_count{};  // initializes to zero
    int dog_count{10}; // initializes 10
    int cat_count{15}; // initializes 15

    int domesticated{dog_count + cat_count};

    /*
        int narrow_conversion{2.9}; // compiler error
        int bad_init {doesnot_exist1 + doesnot_exist2}; // compiler error
    */
    std::cout << "elephant: " << elephant << std::endl;
    std::cout << "lion_count: " << lion_count << std::endl;
    std::cout << "dog_count: " << dog_count << std::endl;
    std::cout << "cat_count: " << cat_count << std::endl;
    std::cout << "domesticated: " << domesticated << std::endl;

    // functional varaible init
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    // int bad_init01(doesnot_exist1 + doesnot_exist2); compile error
    int narrow_func(2.9); // compiler error

    std::cout << "apple_count: " << apple_count << std::endl;
    std::cout << "orange_count: " << orange_count << std::endl;
    std::cout << "fruit_count: " << fruit_count << std::endl;
    // std::cout << "bad_init01: " << bad_init01 << std::endl;
    std::cout << "narrow_func: " << narrow_func << std::endl;

    // assignment initialization
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrow_assign = 2.9; // converts to 2

    std::cout << "bike_count: " << bike_count << std::endl;
    std::cout << "truck_count: " << truck_count << std::endl;
    std::cout << "vehicle_count: " << vehicle_count << std::endl;
    std::cout << "narrow_assign: " << narrow_assign << std::endl;

    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;

    return 0;
}
