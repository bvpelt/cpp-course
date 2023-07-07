# cpp-course

Tot: https://youtu.be/8jLOx1hD3_o?t=11785

C++ Course

See course: https://www.youtube.com/watch?v=8jLOx1hD3_o

course code: https://github.com/rutura/The-C-20-Masterclass-Source-Code


# Environment information
C++ compiler support: https://en.cppreference.com/w/cpp/compiler_support 

GCC compiler: https://gcc.gnu.org/

Windows: gcc + clang: https://winlibs.com

Configure c++ standard: https://stackoverflow.com/questions/66975491/how-to-use-c-20-in-g

## Online compilers
- Wandbox https://wandbox.org 
- Compiler Explorer https://godbolt.org 
- Coliru https://coliru.stacked-crooked.com 
- ...

## Errors and warnings
[example-02](example-02)

There are three types errors/warnings
- compiletime errors
- runtime errors
- warnings (compiletime/runtime)

## Statements and Functions
[example-03](example-03)
- A statement is the basic unit of computation in a C++ program
- Every c++ program is a collection of statements ment to achieve some goal
- Statements end with a semicolon
- Statements are executed in order of appearance - staring at main function
- A function has input(s) and one output - the functions is the transformatione from input(s) to the output
- A functions must be defined before it is used

## Data input/output
[example-04](example-04)

There are different options

- std::cout printing data to the terminal (console - stdout)
- std::cin  reading data from the terminal (stdin)
- std::cerr printing errors the the terminal (stderr)
- std::clog printing log messages to the console
  
## C++ program execution model and memory model

In [image](images/program.jpg) a program as represented by the program area is stored on the hard drive and executed by the cpu.
See explanation on https://youtu.be/8jLOx1hD3_o?t=10346 

A C++ program is build with
- core features, datatypes, variables
- standard library, for instance iostream
- stl, standard template library with container with types, algorithms and functions


## Variables and datatypes

A number of variables are possible:
- int
- double
- float
- char, a simple character like 'a', 'b'
- bool, true or false
- void, typeless type
- auto, deduce type
- ...

A variable are number of 0/1's - a bit. The 0/1's are grouped together to make sense.

### Number systems
The computer uses a binary number system.
For instance 101 means 1x2^2 + 0x2^1 + 1x2^0.

![example using calculator](images/calculator.jpg)

n digits represents 0..2^(n-1) different numbers.

|digits|bytes|             data range| data type|
|-----:|----:|----------------------:|---------:|
|     4|    1|                  0..16|    octet |
|     8|    1|                 0..255|     byte |
|    16|    2|               0..65535|      int |
|    32|    4|         0..34359738367|     long |
|    64|    8|0..18446744073709551615|   double |

Representation of 15 in different number systems
```cpp
int n1 = 15;         // decimal
int n2 = 017;        // octal
int n3 = 0x0f;       // hexadecimal
int n4 = 0b00001111; //binary
```



