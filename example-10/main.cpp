#include <iostream>
#include <iomanip>
#include <string>
// one line comment

/*
A number of lines with
comments
*/

int main(int argc, char **argv)
{
    char ch1{'a'};
    char ch2{'r'};
    char ch3{'r'};
    char ch4{'o'};
    char ch5{'w'};

    std::cout << ch1 << ch2 << ch3 << ch4 << ch5 << std::endl;

    char value = 65; // ASCII char code for 'A'
    std::cout << "value: " << value << std::endl;
    std::cout << "value(int): " << static_cast<int>(value) << std::endl;

    setlocale(LC_ALL, "");
    std::cout << "What's your name? ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Hello there, " << name << "." << std::endl;

    std::wstring name1;
    std::wcout << L"Enter your name: ";
    //std::wcin >> name1;
    std::getline(std::wcin, name1);
    std::wcout << L"Hello, " << name1 << std::endl;

    return 0;
}