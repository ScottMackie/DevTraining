---
id: s539doght6j41cz8hheq473
title: Constructors
desc: ''
updated: 1697362938120
created: 1697282862838
---
# Constructors  

A constructor in C++ is a special method that is automatically called when an object of a class is created.  

## Example
```cpp
class ConstructorClass
{
    public:
    ConstructorClass()
    {
        cout << "Hello World Constructor!" << endl << endl;
    }
};

int main()
{
    ConstructorClass objConstructor;
    return 0;
}
```  

In this example when the `objConstructor` is initialised, `ConstructorClass()` is called.  

The Constructor function must have the same name as the class it is part of.  

You can also input Parameters into a class at initialisation, which can be used to set initial class attributes.  

## Example
```cpp
class Car
{
    public:
    string brand;
    string model;
    int year;

    Car(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};

int main()
{

    Car carObj1("Merc", "C-Class", 2020);
    Car carObj2("Mini", "Cooper", 2016);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

    return 0;
}
```