---
id: 1zcf6swvtrrktlsm2vya7vd
title: Basics
desc: ''
updated: 1697285360318
created: 1697282834450
---

C++ uses classes and object for everything.  
A real world example of this is:
> A Car is an object.  
> The Car has Attributes such as Weight and Colour.  
> The Car has Methods such as Drive and Brake.  

Classes are declared similar to `structs` in C.  
```cpp
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
```  

## Create an Object  

An object is created from a class.  
To create an object, we doing it again like `struct` in C, where we have the class definition then a name for our object.
Below is an example of an object being created from a class, then being used.  
```cpp 
#include <iostream>
#include <string>

using namespace std;

class Car
{
    public:
        string brand;
        string model;
        int year;
};

int main()
{
    

    Car carObj1;
    carObj1.brand = "Merc";
    carObj1.model = "C-Class";
    carObj1.year = 2020;

    Car carObj2;
    carObj2.brand = "Mini";
    carObj2.model = "Cooper";
    carObj2.year = 2016;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

    return 0;
}
```

As seen in the example, class attributes (`brand`, `model`, and `year`) are accessed using the syntax (`.`).