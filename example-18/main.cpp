#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
// one line comment

/*
A number of lines with

comments
*/

int main(int argc, char **argv)
{

    // Output formatting

    std::cout << "Hello";
    std::cout << "World";
    std::cout << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;
    std::cout << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "Hello\n";
    std::cout << "World\n";
    std::cout << std::endl;

    // std::flush send output from buffer to output

    // std::width -- set width
    std::cout << "Unformatted table" << std::endl;
    std::cout << "Daniel"
              << " "
              << "Gray"
              << " 25" << std::endl;
    std::cout << "Stanley"
              << " "
              << "Woods"
              << " 33" << std::endl;
    std::cout << "Jordan"
              << " "
              << "Parker"
              << " 45" << std::endl;
    std::cout << "Joe"
              << " "
              << "Ball"
              << " 21" << std::endl;
    std::cout << std::endl;

    std::cout << "Formatted table" << std::endl;
    std::cout << std::setw(10) << "Firstname" << std::setw(10) << "Lastname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << " 25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << " 33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << " 45" << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << " 21" << std::endl;
    std::cout << std::endl;

    int col_width = 20;

    std::cout << std::right;
    std::cout << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << " 25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width) << " 33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width) << " 45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << " 21" << std::endl;
    std::cout << std::endl;

    // example internal justified
    std::cout << "Internal justified" << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    // example set fill char
    std::cout << "Set fill char" << std::endl;
    std::cout << std::left;
    std::cout << std::setfill('_');
    std::cout << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << " 25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width) << " 33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width) << " 45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << " 21" << std::endl;
    std::cout << std::endl;

    // example booleans
    bool condition{true};
    bool other_condition{false};

    std::cout << "Show boolean" << std::endl;
    std::cout << "condition: " << condition << std::endl;
    std::cout << "other_condition: " << other_condition << std::endl;
    std::cout << std::endl;

    std::cout << std::boolalpha;
    std::cout << "condition: " << condition << std::endl;
    std::cout << "other_condition: " << other_condition << std::endl;
    std::cout << std::endl;

    std::cout << std::noboolalpha;
    std::cout << "condition: " << condition << std::endl;
    std::cout << "other_condition: " << other_condition << std::endl;
    std::cout << std::endl;

    // showpos: show + or - for numbers
    int pos{34};
    int neg{-45};

    std::cout << "pos: " << pos << std::endl;
    std::cout << "neg: " << neg << std::endl;
    std::cout << std::endl;

    std::cout << std::showpos;
    std::cout << "pos: " << pos << std::endl;
    std::cout << "neg: " << neg << std::endl;
    std::cout << std::endl;

    std::cout << std::noshowpos;
    std::cout << "pos: " << pos << std::endl;
    std::cout << "neg: " << neg << std::endl;
    std::cout << std::endl;

    // showbase of number dec, oct or hex
    pos = 717171;
    neg = -473747;
    double doub{498.33};

    std::cout << "pos in different bases" << std::endl;
    std::cout << "pos (dec): " << std::dec << pos << std::endl;
    std::cout << "pos (oct): " << std::oct << pos << std::endl;
    std::cout << "pos (hex): " << std::hex << pos << std::endl;
    std::cout << std::endl;

    std::cout << "neg in different bases" << std::endl;
    std::cout << "neg (dec): " << std::dec << neg << std::endl;
    std::cout << "neg (oct): " << std::oct << neg << std::endl;
    std::cout << "neg (hex): " << std::hex << neg << std::endl;
    std::cout << std::endl;

    std::cout << "doub in different bases" << std::endl;
    std::cout << "doub (dec): " << std::dec << doub << std::endl;
    std::cout << "doub (oct): " << std::oct << doub << std::endl;
    std::cout << "doub (hex): " << std::hex << doub << std::endl;
    std::cout << std::endl;

    std::cout << std::uppercase;
    std::cout << std::showbase; // show base dec nothing, hex 0x prefix, oct 0 prefix
    std::cout << "pos (dec): " << std::dec << pos << std::endl;
    std::cout << "pos (oct): " << std::oct << pos << std::endl;
    std::cout << "pos (hex): " << std::hex << pos << std::endl;
    std::cout << std::endl;

    std::cout << "neg in different bases" << std::endl;
    std::cout << "neg (dec): " << std::dec << neg << std::endl;
    std::cout << "neg (oct): " << std::oct << neg << std::endl;
    std::cout << "neg (hex): " << std::hex << neg << std::endl;
    std::cout << std::endl;

    std::cout << "doub in different bases" << std::endl;
    std::cout << "doub (dec): " << std::dec << doub << std::endl;
    std::cout << "doub (oct): " << std::oct << doub << std::endl;
    std::cout << "doub (hex): " << std::hex << doub << std::endl;
    std::cout << std::endl;

    // show floats
    double a{3.1415926535897949234058234823452345};
    double b{2006.0};
    double c{1.34e-10};

    std::cout << "double values" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << std::endl;

    std::cout << "double values fixed" << std::endl;
    std::cout << std::fixed; // if number < precision value is 0, applies to c
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << std::endl;

    std::cout << "double values scientific" << std::endl;
    std::cout << std::scientific;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << std::endl;

    std::cout << "double values reset format" << std::endl;
    //std::cout.unsetf(std::ios::scientific | std::ios::fixed | std::ios::uppercase);
    std::cout << std::resetiosflags(std::ios_base::scientific |std::ios_base::fixed |std::ios_base::uppercase );
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << std::endl;

    std::cout << "double values setprecision" << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a: " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a: " << a << std::endl;
    std::cout << std::setprecision(30);
    std::cout << "a: " << a << std::endl;
    std::cout << std::setprecision(6);    
    std::cout << std::endl;


    return 0;
}