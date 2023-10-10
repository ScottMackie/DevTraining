#include <iostream>
#include <string>

using namespace std;

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