---
id: wzy9ngr3jqz02wcn4a67gj3
title: Methods
desc: ''
updated: 1697361482035
created: 1697282939934
---

# Methods  

Methods are functions that belong to a class.  
These Methods can be created inside and outside of the class body.

## Inside
Just like creating any function normally, but within the class declaration.
### Example
```cpp   
class MethodsClass
{

public:
    void myMethodInside()
    {
        cout << "Hello World Inside Methods!!";
    }
};
```

## Outside 
To add a method to a class outside of the declaration we must add the class name to function declaration, and a declaration reference to class definition. like adding a reference to a header file.  
### Example
```cpp
class MethodsClass
{

public:
    void myMethodOutside();
};

void MethodsClass::myMethodOutside()
{
    cout << "Hello World Outside Methods!!";
}

```  

## Parameters

Parameters an also be added to a class like an Outside Method.  
### Example
```cpp
class Car
{
public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed)
{
    return maxSpeed + (maxSpeed*0.1);
}
```  
