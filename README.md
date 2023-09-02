# cpp-course

Tot: https://youtu.be/8jLOx1hD3_o?t=109489
C++ Course

- See course: https://www.youtube.com/watch?v=8jLOx1hD3_o

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
- CPP insights https://cppinsights.io/
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

See also https://en.cppreference.com/w/cpp/types/numeric_limits 

### Number systems
The computer uses a binary number system.
For instance 101 means 1x2^2 + 0x2^1 + 1x2^0.

![example using calculator](images/calculator.jpg)

n digits represents 0..2^(n-1) different numbers.

unsigned range [0..2^n - 1]

signed range -2^(n-1) .. 2^(n-1)-1

| digits | bytes |              data range | data type |
| -----: | ----: | ----------------------: | --------: |
|      4 |     1 |                   0..16 |     octet |
|      8 |     1 |                  0..255 |      byte |
|     16 |     2 |                0..65535 |       int |
|     32 |     4 |          0..34359738367 |      long |
|     64 |     8 | 0..18446744073709551615 |    double |



Bron: https://en.cppreference.com/w/cpp/language/types
| Type                  | Size in bits |   Format |                                  Value range |
| --------------------- | -----------: | -------: | -------------------------------------------: |
| char                  |            8 |   signed |                                    -128..127 |
| char                  |            8 | unsigned |                                       0..255 |
| char                  |           16 |   UTF-16 |                                     0..65535 |
| char                  |           32 |   UTF-32 |                                   0..1114111 |
| int                   |           16 |   signed |                                -32768..32767 |
| int                   |           16 | unsigned |                                     0..65535 |
| int                   |           32 |   signed |                      -2147483648..2147483647 |
| int                   |           32 | unsigned |                                0..4294967295 |
| int                   |           64 |   signed |    -9223272036854775808..9223372036854775807 |
| int                   |           64 | unsigned |                      0..18446744073709551615 |
| binary floating point |           32 | IEEE-754 |                     0x1^-149..0x1.fffffe^127 |
| binary floating point |           64 | IEEE-754 |           0x1^−1074..0x1.fffffffffffff^+1023 |
| binary floating point |           80 | IEEE-754 |      0x1^−16445..0x1.fffffffffffffffe^+16383 |
| binary floating point |          128 | IEEE-754 | 0x1^−16494..0x1.ffffffffffffffffffffffffffff |
| ^+16383               |


Representation of 15 in different number systems
```cpp
int n1 = 15;         // decimal
int n2 = 017;        // octal
int n3 = 0x0f;       // hexadecimal
int n4 = 0b00001111; //binary
```

## Naming
Variables should start with a letter or an underscore.
Variable names are case sensative.
You cannot use spaces in variable names.
Format for declaration of a variable

```
typename variablename {initial value}
```

## Floating point
|        type | size | precision | comment             |
| ----------: | ---: | --------: | ------------------- |
|       float |    4 |         7 |                     |
|      double |    8 |        15 | recommended default |
| long double |   12 |  > double |                     |

## Boolean
Only two values: true or false

Booleans use 1 byte storage

## Characters

Datatype char is ASCII value. See https://en.wikipedia.org/wiki/ASCII

Unicode is out of scope for this course. See https://stackoverflow.com/questions/3010739/how-to-use-unicode-in-c


## Auto datatype
The compiler tries to deduce the type based on value.
Best practice don't use.

- See [Output numbers/string](example-4/main.cpp)
- See [Integer base dec/oct/hex](example-5/main.cpp)
- See [Declaration/initialization datatype](example-6/main.cpp)
- See [Integer datatype](example-7/main.cpp)
- See [Float datatype](example-8/main.cpp)
- See [Boolean datatype](example-9/main.cpp)
- See [Initialization](example-10/main.cpp)
- See [Initialization and automatic type](example-11/main.cpp)

## Operations
- See [Simple operators](example-12/main.cpp)

### Division
With integers you only get the hole number, not the remainder.
To get the remainder use '%' the modulo operator.

### Preference

- See https://en.cppreference.com/w/ for general language documentation
and https://en.cppreference.com/w/cpp/language/operator_precedence for operator precedence

- See [Precedence](example-13/main.cpp)

### Increment / decrement operators
- See [Increment/Decrement operators](example-14/main.cpp)

### Compound assignment operators
- See [Compound assignment operators](example-15/main.cpp)

### Relational operators
- See [Relational operators](example-16/main.cpp)

### Logical operators
- See [Logical operators](example-17/main.cpp)

### Output formatting
- See also https://en.cppreference.com/w/cpp/io/manip 

The following operators exist
- std::boolapha
- std::showbase
- std::showpoint
- std::showpos
- std::uppercase
- std::internal
- std::left
- std::right
- std::dec
- std::hex
- std::oct
- std::fixed
- std::scientific
- std::flush
- std::endl
- std::setw()
- std::setprecision()
- std::setfill()

- See [Output formatting](example-18/main.cpp)

### Limits
- See https://en.cppreference.com/w/cpp/types/numeric_limits 
- See [Limits](example-19/main.cpp)


### Math functions
- See https://en.cppreference.com/w/cpp/header/cmath
- See [Math operators](example-20/main.cpp)


### Support operators
- See [Support operators](example-21/main.cpp)

### Bit operators
- See [Bit operators](example-22/main.cpp)

### Flow control
- See [Conditional flow](example-23/main.cpp)


### Loops
- See [Loops](example-24/main.cpp)

### Arrays
- See [Array basic](example-25/main.cpp)
- See [Array](example-26/main.cpp)
- See [Array bounds](example-27/main.cpp)


### Pointers
- See [Pointers](example-28/main.cpp)
- See [Pointers to char](example-29/main.cpp)

### Memory

Memory model

Virtual memory managed by mmu Memory management unit

All Operating Systems have there own memory map

| Memory area | description                                      |
| ----------: | ------------------------------------------------ |
|       Sytem |                                                  |
|       Stack | local variables, function calls                  |
|        Heap | additional memory that can be queued at run time |
|        Data |                                                  |
|        Text | executable probram                               |
 

Comparison Stack Heap

| Stack                                                  | Heap                                                                         |
| ------------------------------------------------------ | ---------------------------------------------------------------------------- |
| memory is finit                                        | memory is finit                                                              |
| developer isn't in full control of the memory lifetime | developer is in full control when memory is allocated and when it's released |
| lifetime is controlled by the scope mechanism          | lifetime is controlled explicitly through new and delete operator            |

- See [Memory model](example-30/main.cpp)

Allocating memory 
```cpp
int *p_number1{new int};     // Dynamic memory allocated on the heap, but not initialized
int *p_number2{new int(22)}; // Dynamic memory allocated on the head using direct initialization
int *p_number3{new int{23}}; // Dynamic memory allocated on the head using uniform initialization
```

Release allocated memory
```cpp
delete p_number1;
p_number1 = nullptr;

delete p_number2;
p_number2 = nullptr;

delete p_number3;
p_number3 = nullptr;
```
*Calling delete twice on the same pointer may lead to undefined behaviour!!!!*
The compiler gives no error/warning.

- See [Memory allocation](example-31/main.cpp)

*Pointers: Best practice*
- initialize pointers
- reset pointers after delete
- for multiple pointers to the same address make sure the owner of the pointer is clear

- See [Dangling pointers](example-32/main.cpp)

### Memory allocation error
- See [Memory allocation error](example-33/main.cpp)

### Memory leaks
This occurs when you loose access to memory that was dynamically allocated
If your program runs for a long time memory leaks might lead to a crash of your program

- See [Memory leaks - Dynamic array allocation](example-34/main.cpp)

### References

- See [References](example-35/main.cpp)

Comparison between references and pointers

| References                                      | Pointers                                                                        |
| ----------------------------------------------- | ------------------------------------------------------------------------------- |
| don't use dereferencing for reading and writing | must go through dereference operator to read/write through point somewhere else |
| can't be changed to reference something else    | can be changed to point somewhere else                                          |
| must be initialized at declaration              | can be declared un-initialized (will contain garbage address)                   |

A reference can be seen as a const pointer 

```cpp
double * const p_value {&avalue};
p_value = &another_value; // gives an error at compiletime
```

### References and const

- See [References and const](example-36/main.cpp)

### String manipulations

These consist of c-string facilities: (see https://en.cppreference.com/w/cpp/header/cctype )
- length
- concatenate
- copy
- search...
- is alphanumeric
- is alphabetic
- is blank
- is lower/upper case
- is digit
- changing case

and cstring (see https://en.cppreference.com/w/cpp/header/cstring )
- check length of a string


c-strings are not save or convenient. std::string is a better alternative

- See [String manipulations](example-37/main.cpp)
- See [C-String manipulations](example-38/main.cpp)
- See [std::string](example-39/main.cpp)

### One definition rule
In the context of a program there is only meaning for declarations
- free standing variables (in their scope) 
- functions
- classes
- class member functions
- class static member variables


- See [One definition rule](example-40)

### Functions

A function takes input(s) (0..n) and produces an output
A function may only be defined once and is unique by its function signature.
The function signature is function name + function parameters

Function declaration and implementation can be split using .h (declaration - prototype) and .cpp (implementation) files.
The prototype needs to be known before the implementation

- See [Functions](example-41/main.cpp)
- See [Function declaration and Definition](example-42/main.cpp)

The compiler uses different phases:
- preprocessing reading definitions generate translation units
- compiling translation units to generate objects
- linking objects to generate an exacutable
  
- See [Function declaration and Definition in multiple files](example-43)

### Pass by value / pointer /reference

- Although both passing parameters by pointer and by reference gives you the possibility to change the input parameter.
- Input parameters should not be modifiable. Use the const keyword.

*The best practice is to pass by reference.*

- See [Pass by value / pointer / reference](example-44/main.cpp)

### Return values

In modern compilers, return by value is commonly optimized out by the compiler when possible and modified to return by reference avoiding unnecessary copies!

- See [Returning values](example-45/main.cpp)


### Function overloading

With function overloading the parameters may differ by:
- order
- number
- type


- See [Function overloading](example-46/main.cpp)

### Lambda Functions

Lambda functions is a mechanism to setup anonymous functions (without names).
Once set up, we can either give them names and call them, or get the lambda functions to do things directly.

- See [Lambda Functions](example-47/main.cpp)

### Function Templates

Instead of rewriting simular functions let the compiler help and generate them on the fly for you. 
Task no code repetition.

- function templates are just blueprints, not real C++ code consumed by the compiler. The compiler generates real C++ code
- The real C++ function generated by the compiler is called a template instance
- A template instance will be reused when a simular function call is issued. No duplicates are generated by the compiler
- Real function declarations and definitions are created when you call the function with arguments
- if the template parameters are of the same type (T,T) then the arguments you call the function with must also match. Otherwise you get a compiler error.
- template instances won't always do what you expect. A good example is when you call a function with pointers DISASTER
- there are tools like cppinsights.io that can show you template instantiations. You can even use the debugger to infer that information
- the arguments passed to a function template must support the operations that are done in the body of the function

- See https://en.cppreference.com/w/cpp/language/templates 
- See [Function Templates](example-48/main.cpp)

When declaring a template with same name but passing variable by value and another passing parameters by reference the compile won't know what to use

```cpp
template <typename T> T maximum(T a, T b) { return (a>b)?a:b; }
template <typename T> const T& maximum(const T& a, const T& b) { return (a>b)?a:b; }

int main(int argc, char **argv) {
    double a{23.5};
    double b{51.2};

    double max1 = maximum(a,b); // By value or by reference? Compiler error

    return 0;
}
```
### Concepts

- See https://en.cppreference.com/w/cpp/concepts

There are standard builtin concepts but you can also create your own concepts
Some built in concepts are
- same_as
- derived_from
- convertible_to
- common_reference_with
- common_with
- integral
- signed_integral
- unsigned_integral
- floating_point

Concepts are a mechanism to place constraints on your template type parameters

Requires clause
- simple requirements
- nested requirements
- compound requirements
- type requirements

- See [Concepts](example-49/main.cpp)
- See [Combining Concepts](example-50/main.cpp)
- See [Concepts and auto](example-51/main.cpp)

### Classes

A class is a blueprint (model) for a realworld object.

- class member variables can either be raw stack variables or pointers
- members can't be references
- classes have function (methods) that let them do things
- class methods have access to the member variables, regardless of whether they are public or private
- private members of classes (variables and functions) aren't accessible from outside the class definition

*Constructors* a special kind of method that is called when an instance of a class is created
- no return type
- same name as the class
- can have (0..n) parameters
- usually used to initialized member variables of a class

When you create your own constructur (without a default constructor) the compiler will nog generate a default constructor, without a parameter list. Resulting in a compilation error.


- See [Classes](example-52/main.cpp)
- See [Constructors](example-53/main.cpp)


### Classes across multiple files

- See [Classes across multiple files](example-54)

### Managing Class Objects Throug Pointers

There are special methods that are called when an object dies. They are needed when the object needs to release some dynamic memory, or for some other kind of clean up.

When are destructor called
- in weird places that may not be obvious
  - when an object is passed by value to a function
  - when a local object is returned from a function (some compilers)
- obvious cases are
  - when a local stack object goes out of scope (dies)
  - when a heap object is released with delete

When calling constructors for objects o1..o4 in a specific context the order of destructor calls are o4..o1

- See [Managing Class Objects Throug Pointers](example-55)

### This pointer

The this pointer points to the current object.

It can be used to chain calls. Which is also possible by using references 

example for using setters in chained calls using this pointer

```cpp
Dog * Dog::set_dog_name(std::string dog_name_param)
{
    dog_name = dog_name_param;
    return this;
}

Dog * Dog::set_dog_breed(std::string dog_breed_param)
{
    dog_breed = dog_breed_param;
    return this;
}

Dog * Dog::set_dog_age(int age_param)
{
    if (dog_age)
    {
        delete dog_age;
    }
    dog_age = new int(age_param);
    return this;
}

p_dog->set_dog_name("Mario")->set_dog_breed("Fox Terrier")->set_dog_age(5);
```

example for using setters in chained calls using references
```cpp
Dog & Dog::set_dog_name(std::string dog_name_param)
{
    dog_name = dog_name_param;
    return *this;
}

Dog & Dog::set_dog_breed(std::string dog_breed_param)
{
    dog_breed = dog_breed_param;
    return *this;
}

Dog & Dog::set_dog_age(int age_param)
{
    if (dog_age)
    {
        delete dog_age;
    }
    dog_age = new int(age_param);
    return *this;
}

p_dog->set_dog_name("Mario").set_dog_breed("Fox Terrier").set_dog_age(5);
```

- See [This pointer](example-56)

### Structs

- See [This pointer](example-57/main.cpp)

### Size of class objects

In general: the size of a class object is the sum of the size of each member variable.

- See [Size of class objects](example-58/main.cpp)

### Inheritance

- A defining feature of Object Oriented Programming in C++
- Building types on top of other types
- Inheritance hierarchies can be set up to suit your needs
- Code reuse is improved

Inheritance hierarchie
- The most fundamental class on the top
- The most specialized class on the bottom

Public inheritance
- derived classes can access and use public members of the base class. But the derived class can't directly access private members
- the same applies to friends of the derived class. They have access to private members of the derived class, but don't have access to the base class

#### Public inheritance
```cpp
class Player: public Person
```

<table>
<tr><th>Base class: Person</th><th>Derived class: Player</th></tr>
<tr>
<td>

| Level           | Name   |
| --------------- | ------ |
| class           | Person |
| public field    | m_1    |
| protected field | m_2    |
| private field   | m_3    |

</td>
<td>

| Level           | Name   |
| --------------- | ------ |
| class           | Player |
| public field    | m_1    |
| protected field | m_2    |
| private field   | m_3    |

</td>
</tr>
</table>

#### Protected inheritance
```cpp
class Player: protected Person
```

<table>
<tr><th>Base class: Person</th><th>Derived class: Player</th></tr>
<tr>
<td>

| Level           | Name   |
| --------------- | ------ |
| class           | Person |
| public field    | m_1    |
| protected field | m_2    |
| private field   | m_3    |

</td>
<td>

| Level           | Name   |
| --------------- | ------ |
| class           | Player |
| protected field | m_1    |
| protected field | m_2    |
| private field   | m_3    |

</td>
</tr>
</table>


#### Private inheritance
```cpp
class Player: private Person
```

<table>
<tr><th>Base class: Person</th><th>Derived class: Player</th></tr>
<tr>
<td>

| Level           | Name   |
| --------------- | ------ |
| class           | Person |
| public field    | m_1    |
| protected field | m_2    |
| private field   | m_3    |

</td>
<td>

| Level         | Name   |
| ------------- | ------ |
| class         | Player |
| private field | m_1    |
| private field | m_2    |
| private field | m_3    |

</td>
</tr>
</table>

- Through the  base class access specifiers we can control how relexed or constrained the access of base class members to the derived class is.
- Regardless of the access specifier, private members of a base class are never accessible from a derived class
- A friend function within a derived class may access public/protected members from the base class!!!

- See [Inheritance - public](example-59)
- See [Inheritance - protected](example-60)
- See [Inheritance - base class access specifiers](example-61)

When inheriting from a class that is derived from a base class with private inheritance, none of the inherited members can be accessed.

Example:

```cpp
class Person {
    public:
    int m_1;
    protected:
    int m_2;
    private:
    int m_3:
};

class Engineer: private Person {
    // m1 private access
    // m2 private access
    // m3 private access
};

Class CivilEngineer: public Engineer {
    // m1 private access
    // m2 private access
    // m3 private access    
}
```
- See [Inheritance - private](example-62)

Although there are workarounds, *it's not a good idea* to use these workarounds.
Code gets unclear - what is the access level of a field.

- See [Inheritance - private with workaround](example-63)

Best practice: Always provide a default constructor for your classes, especially if they will be part of an inheritance hierarchy.

Constructors are called from the most basic to the most specilized class in the hierarchy.

- See [Inheritance - Default arg constructor](example-64)

- See [Inheritance - Custom constructors](example-65)

The compiler will create a default copy constructor which will work assumed there is no dynamic memory allocation used in member fields.

- See [Inheritance - Copy constructors](example-66)

Base constructors are not inherited by default.
You can use a construct to explicit define inheritance of the base constructor. This causes the compiler to generate a default constructor as result of the inheritance.

The access identifier (public, protected, private) of the base class constructor will be used for the generated derived class constructor.

Some facts about Inheritance of Base constructors
- Copy constructors are not inherited. But you won't usually notice this as the compiler will insert an automatic copy constructor
- Inherited constructor are base constructors. They have no knowledge of the derived class. Any member from the derived class will just contain junk or whatever default value it's initialized with
- Constructors are inherited with whatever access specifier they had in the base class
- On top of derived constructors, you can add your own that possibly properly initialize derived member variables
- Inheriting constructors adds a level of confusion to you code, it's not clear which constructor is building your object. It is recommended to avoid them an only use this feature if no other option is available


- See [Inheritance - Base constructors](example-67)

In the example the class hierarchie consists of:

Person <- Engineer: public Person <- CivilEngineer: public Engineer

If a CivilEngineer object is instantiated the order in which constructors is called is:
- Person
- Engineer
- CivilEngineer

If the CivilEngineer object is destroyed the order in which destructors is called is:
- CivilEngineer
- Engineer
- Person

- See [Inheritance - Destructors](example-68)

In the inherited (child) class member variables or methods can have the same name as in the base class.

The behaviour of C++ is to hide/override the base class members/methods with the same name.

- See [Inheritance - Reuse symbols](example-69)

Polymorphism: a number of derived classes have a common base class. From within the derived class a different implementation of a base class member function is accessible.

Static binding: The compiler just looks at the pointer to decide with member function version to call. It sees base class * and calls base class.member function.

- See [Polymorphism](example-70)

Polymorphism with virtual member methods will have impact on memory claims.

The references to virtual memberfunctions are stored in a virtual table.

- See [Polymorphism - size of objects and slicing](example-71)

- See [Polymorphism - objects in collections](example-72)

The override keyword protects you for overwriting methods in the inheritance hierarchy

- See [Polymorphism - override](example-73)

If you overload a virtual method, you should also implement that overloaded function in all derived classes.

- See [Polymorphism - overriding and hiding](example-74)

- See [Polymorphism - at different levels](example-75)

Using static member variables combined with inheritance 
- See [Polymorphism - with static members](example-76)

With final you can
- restrict how you override methods in derived classes
- restrict how you can derive from a base class

- See [Final](example-77)

Functions with default aguments
- default arguments are handled at compile time
- virtual functions are called at run time with polymorphism
- if you use default arguments with virtual functions, you migth get weird (unexpected) results with polymorphism

Best practice: do not use default parameters with virtual functions!

- See [Virtual functions with default arguments](example-78)

Best practice: always define virtual destructors

- See [Virtual Destructors](example-79)

Dynamic cast gives functionality
- transform from base class pointer or reference to derived class pointer or reference at run time
- make it possible to call non polymorphic methods on derived objects

Typecasts are done to make code more robust.
Usually in functions which accept a base type but need functionality for a derived type.

Overusing down casts is a sign of bad design. If you are doing a lot of polymorphic function calls on derived object, you should make that function polymorphic in the first place.

- See [Dynamic_cast](example-80)

Reasons not to call virtual functions from constructors & destructors:
- you won't get polymorphic results, but static binding since derived object is not yet instantiated when in base constructor a virtual function is called.

Best practice: Never call virtual functions from a constructor or destructor.

- See [Don't call virtual (polymorphic) functions from constructors & destructors](example-81)

Pure virtual functions
- if a class has at least one pure virtual function, it becomes an abstract class
- you can't create objects of an abstract class, if you do, you'll get a compiler error
- derived classes from an abstract class must explicitly override all the pure virtual functions from the abstract parent class. It they don't they themselves become abstract
- pure virtual functions don't have an implementation in the abstract class. They are ment to be implemented by the derived class(es)
- you can't call the pure virtual functions from the constructor of the abstract class
- the constructor of the abstract class is used by deriving class to build up the base part of the object

- See [Pure virtual functions and abstract classes](example-82)

Abstract classes as interfaces
- an abstract class with only pure virtual functions and no member variables can be uses to model what is called an interface in OO programming
- an interface is a specification of something that will be fully implemented in a derived class, but the specification itself resides in an abstract class
- an interface is something one can attach to a class to implement functionality
  
- See [Abstract classes as interfaces](example-83)