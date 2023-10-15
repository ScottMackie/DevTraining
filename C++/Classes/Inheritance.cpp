#include <iostream>
#include <string>

using namespace std;

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
/********************************************************************/

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
/********************************************************************/

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
    cout << endl;
    cout << "Inheritance Basic" << endl << endl;

    Car objCar;

    objCar.honk();
    cout << objCar.brand << " " << objCar.model << endl << endl;

    cout << "Multilevel Inheritance" << endl << endl;

    Spec objSpec;
    objSpec.honk();
    cout << objSpec.brand << " " << objSpec.model << " " << objSpec.spec << endl;

    cout << endl;
    cout << "Multiple Inheritance" << endl << endl;

    ChildClass objMultiple;
    objMultiple.base1Function();
    objMultiple.base2Function();

    cout << endl;
    cout << "Protected Access Inheritance" << endl << endl;

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