#include <iostream>

// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    short short_var{-32768};
    short int short_int{455};
    signed short signed_short_int{122};
    unsigned short int unsigned_short_int{456};

    std::cout << "value short_var: " << short_var << " size short_var: " << sizeof(short_var) << std::endl;
    std::cout << "value short_int: " << short_int << " size short_int: " << sizeof(short_int) << std::endl;
    std::cout << "value signed_short_int: " << signed_short_int << " size signed_short_int: " << sizeof(signed_short_int) << std::endl;
    std::cout << "value unsigned_short_int: " << unsigned_short_int << " size unsigned_short_int: " << sizeof(unsigned_short_int) << std::endl;

    int int_var{55};
    signed signed_var{66};
    signed int signed_int{77};
    unsigned int unsigned_int{78};

    std::cout << "value int_var: " << int_var << " size int_var: " << sizeof(int_var) << std::endl;
    std::cout << "value signed_var: " << signed_var << " size signed_var: " << sizeof(signed_var) << std::endl;
    std::cout << "value signed_int: " << signed_int << " size signed_int: " << sizeof(signed_int) << std::endl;
    std::cout << "value unsigned_int: " << unsigned_int << " size unsigned_int: " << sizeof(unsigned_int) << std::endl;

    long long_var{88};
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{45};
    unsigned long int unsigned_long_int{46};

    std::cout << "value long_var: " << long_var << " size long_var: " << sizeof(long_var) << std::endl;
    std::cout << "value long_int: " << long_int << " size long_int: " << sizeof(long_int) << std::endl;
    std::cout << "value signed_long: " << signed_long << " size signed_long: " << sizeof(signed_long) << std::endl;
    std::cout << "value signed_long_int: " << signed_long_int << " size signed_long_int: " << sizeof(signed_long_int) << std::endl;
    std::cout << "value unsigned_long_int: " << unsigned_long_int << " size unsigned_long_int: " << sizeof(unsigned_long_int) << std::endl;

    long long long_long{888};
    long long int long_long_int{889};
    signed long long signed_long_long{900};
    signed long long int signed_long_long_int{901};
    unsigned long long int unsigned_long_long_int{902};

    std::cout << "value long_long: " << long_long << " size long_long: " << sizeof(long_long) << std::endl;
    std::cout << "value long_long_int: " << long_long_int << " size long_long_int: " << sizeof(long_long_int) << std::endl;
    std::cout << "value signed_long_long: " << signed_long_long << " size signed_long_long: " << sizeof(signed_long_long) << std::endl;
    std::cout << "value signed_long_long_int: " << signed_long_long_int << " size signed_long_long_int: " << sizeof(signed_long_long_int) << std::endl;
    std::cout << "value unsigned_long_long_int: " << unsigned_long_long_int << " size unsigned_long_long_int: " << sizeof(unsigned_long_long_int) << std::endl;

    return 0;
}