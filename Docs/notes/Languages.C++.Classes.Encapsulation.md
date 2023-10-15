---
id: me3bh7f0x5ysxcnl3ervkwn
title: Encapsulation
desc: ''
updated: 1697367565521
created: 1697282887438
---

# Encapulation  

The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as `private` (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide `public get` and `set` methods.  

## Example

```cpp
class Employee
{
    private:

        int salary;

    public:
        //Setter
        void setSalary(int s)
        {
            cout << "Setting salary to " << s << endl;
            salary = s;
            cout << "Salary to " << salary << endl << endl;
        }
        //Getter
        int getSalary()
        {
            return salary;
        }

};

int main()
{
    Employee objEmployee;
    cout << endl;
    cout << "Encapsulation Demo" << endl << endl;

    objEmployee.setSalary(50000);
    cout << objEmployee.getSalary() << endl;
}
```  

### Example Explained

The `salary` attribute is `private`, which have restricted access.  

The `public setSalary()` method takes a parameter (`s`) and assigns it to the salary attribute (`salary = s`).  

The `public getSalary()` method returns the value of the `private salary` attribute.  

Inside `main()`, we create an object of the `Employee` class.  
Now we can use the `setSalary()` method to set the value of the `private` attribute to `50000`.  
Then we call the `getSalary()` method on the object to return the value.  