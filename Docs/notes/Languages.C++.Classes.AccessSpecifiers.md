---
id: egiwbu60ofbzsk0khqa6h9z
title: AccessSpecifiers
desc: ''
updated: 1697365779079
created: 1697363047864
---
# Access Specifiers

Access specifiers define how the members (attributes and methods) of a class can be accessed.  

## Public  

The `public` keyword means that any attributes or method defined within that section of the class can be accessed from outside of the class.

### Example

```cpp
class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  return 0;
}
```

## Private 

The `private` keyword means that any attributes or method defined within that section of the class can NOT be accessed from outside of the class.  
By default, all members of a class are treated as `private` unless specified.  

### Example

```cpp
class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  myObj.y = 50;  // Not allowed (private)
  return 0;
}
```  

## Protected

The `protected` keyword means that any attributes or method defined within that section of the class can NOT be accessed from outside of the class, like `private`, except when used as part of an inherited class.  
Further detail in the Inheritance page.  

### Example

```cpp
class Employee
{
    protected:
        int salary;
};

class Programmer: public Employee
{
    public:
        int bonus;
        //Setter
        void setSalary(int s)
        {
            salary = s;
        }
        //Getter
        int getSalary()
        {
            return salary;
        }
};

int main()
{
    Programmer objProg;
    objProg.setSalary(50000);
    objProg.bonus = 4000;
    cout << "Salary: " << objProg.getSalary() << "  Bonus: " << objProg.bonus << endl;
    cout << "Total Income (inc Bonus): " << objProg.getSalary() + objProg.bonus << endl;

/* CAUSES ERROR HERE HAS EXAMPLE
    Employee objEmployee;
    objEmployee.salary = 5000;
    */
}
```