#include <iostream>
#include <string>

// one line comment

/*
A number of lines with
comments
*/

void max_str(const std::string input1, const std::string input2, std::string &output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}

void max_int(int input1, int input2, int &output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}

void max_double(double input1, double input2, double *output)
{
    if (input1 > input2)
    {
        *output = input1;
    }
    else
    {
        *output = input2;
    }
}

// returning result by default is by value
int sum(int a, int b)
{
    int result = a + b;
    std::cout << "result: " << result << std::endl;

    return result;
}

// return result - compiler optimized by reference
std::string add_string(std::string str1, std::string str2)
{
    std::string result = str1 + str2;
    std::cout << "result: " << result << " address: " << &result << std::endl;

    return result;
}

int main(int argc, char **argv)
{
    // Returning values
    std::string s1("Alabama");
    std::string s2("Bellevue");
    std::string s3;

    int i1{45};
    int i2{23};
    int i3{};

    double d1{45};
    double d2{23};
    double d3{};

    std::cout << "String comparison" << std::endl;
    std::cout << "before s1: " << s1 << " s2: " << s2 << " s3: " << s3 << std::endl;
    max_str(s1, s2, s3);
    std::cout << "after  s1: " << s1 << " s2: " << s2 << " s3: " << s3 << std::endl;
    std::cout << std::endl;

    std::cout << "Int comparison" << std::endl;
    std::cout << "before i1: " << i1 << " i2: " << i2 << " i3: " << i3 << std::endl;
    max_int(i1, i2, i3);
    std::cout << "after  i1: " << i1 << " i2: " << i2 << " i3: " << i3 << std::endl;
    std::cout << std::endl;

    std::cout << "Double comparison" << std::endl;
    std::cout << "before d1: " << d1 << " d2: " << d2 << " d3: " << d3 << std::endl;
    max_double(d1, d2, &d3);
    std::cout << "after  d1: " << d1 << " d2: " << d2 << " d3: " << d3 << std::endl;
    std::cout << std::endl;

    std::cout << "Function result sum" << std::endl;
    std::cout << "before i1: " << i1 << " i2: " << i2 << " i3: " << i3 << std::endl;
    i3 = sum(i1, i2);
    std::cout << "after  i1: " << i1 << " i2: " << i2 << " i3: " << i3 << std::endl;
    std::cout << std::endl;

    std::cout << "Function result add_string" << std::endl;
    std::cout << "before s1: " << s1 << " s2: " << s2 << " address s3: " << &s3 << " s3: " << s3 << std::endl;
    s3 = add_string(s1, s2);
    std::cout << "after  s1: " << s1 << " s2: " << s2 << " address s3: " << &s3 << " s3: " << s3 << std::endl;
    std::cout << std::endl;

    std::cout << "Program end" << std::endl;
    return 0;
}