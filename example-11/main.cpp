#include <iostream>
#include <iomanip>
#include <typeinfo>

// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{

    auto var1{11};
    auto var2{12.0};
    auto var3{13.0f};
    auto var4{14.0l};
    auto var5{'e'};

    auto var6{123u};  // unsigned
    auto var7{123ul}; // unsigned long
    auto var8{123ll}; // long long

    std::cout << "var1: " << var1 << " sizeof(var1): " << sizeof(var1) << " type: " << typeid(var1).name() << std::endl;
    std::cout << "var2: " << var2 << " sizeof(var2): " << sizeof(var2) << " type: " << typeid(var2).name() << std::endl;
    std::cout << "var3: " << var3 << " sizeof(var3): " << sizeof(var3) << " type: " << typeid(var3).name() << std::endl;
    std::cout << "var4: " << var4 << " sizeof(var4): " << sizeof(var4) << " type: " << typeid(var4).name() << std::endl;
    std::cout << "var5: " << var5 << " sizeof(var5): " << sizeof(var5) << " type: " << typeid(var5).name() << std::endl;
    std::cout << "var6: " << var6 << " sizeof(var6): " << sizeof(var6) << " type: " << typeid(var6).name() << std::endl;
    std::cout << "var7: " << var7 << " sizeof(var7): " << sizeof(var7) << " type: " << typeid(var7).name() << std::endl;

    // no compiler error but great value
    var6 = -22;
    std::cout << "var6: " << var6 << " sizeof(var6): " << sizeof(var6) << " type: " << typeid(var6).name() << std::endl;

    return 0;
}