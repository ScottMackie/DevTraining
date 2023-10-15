---
id: vbs3a3s54qlxlc8qff5cisz
title: Inheritance
desc: ''
updated: 1697368481924
created: 1697282915711
---

# Inheritance

In C++ it is possible to inherit attributes and methods from one clas to another.  

There are two catagories:  
> **Derived Class** (Child) - The class that inherits from another class.  
> **Base Class** (Parent) - The class being inherited from.  

To inherit from a class we must use the `:` symbol.  

### Example

```cpp
// Base Class
class Vehicle
{
    public:
        string brand = "Ford";
        void honk()
        {
            cout << "Tout, Tout!!\n";
        }
};

// Derived Class
class Car: public Vehicle
{
    public:
        string model = "Mustang";
};

int main()
{
    Car objCar;

    objCar.honk();
    cout << objCar.brand << " " << objCar.model << endl;
}
```  

## Multi Level Inheritance  

A class can be derived from a class which has already been derived from another class.  

### Example

```cpp
// Base Class
class Vehicle
{
    public:
        string brand = "Ford";
        void honk()
        {
            cout << "Tout, Tout!!\n";
        }
};

// Derived Class
class Car: public Vehicle
{
    public:
        string model = "Mustang";
};

// Multilevel Derived Class
class Spec: public Car
{
private:
    /* data */
public:
    string spec = "Shelby";
};

int main()
{
    Spec objSpec;
    objSpec.honk();
    
    cout << objSpec.brand << " " << objSpec.model << " " << objSpec.spec << endl; 
}
```  

## Multiple Inheritance

A class can also be derived from more than one base class using a comma-separated list.

### Example

```cpp
class Base1
{
    public:
        void base1Function()
        {
            cout << "Content from Base 1 Class \n";
        }
};

class Base2
{
    public:
        void base2Function()
        {
            cout << "Content from Base 2 Class \n";
        }
};

class ChildClass: public Base1, public Base2
{

};

int main()
{
    ChildClass objMultiple;
    objMultiple.base1Function();
    objMultiple.base2Function();
}
```