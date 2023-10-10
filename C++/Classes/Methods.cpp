#include <iostream>
#include <string>


using namespace std;

class MethodsClass
{

public:
    void myMethodInside()
    {
        cout << "Hello World Inside Methods!!";
    }
    void myMethodOutside();
};

class Car
{
public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed)
{
    return maxSpeed + (maxSpeed*0.1);
}

void MethodsClass::myMethodOutside()
{
    cout << "Hello World Outside Methods!!";
}

int main()
{
    cout << "Inside Class Methods" << endl;
    cout << "____________________" << endl << endl;

    MethodsClass objMethod;
    objMethod.myMethodInside();

    cout << "Outside Class Methods" << endl;
    cout << "____________________" << endl << endl;

    objMethod.myMethodOutside();

    cout << "Parameters Class Methods" << endl;
    cout << "____________________" << endl << endl;

    Car objCar;
    cout << objCar.speed(200);

    return 0;
}
