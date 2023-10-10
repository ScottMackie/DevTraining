#include <iostream>
#include <string>

using namespace std;

class ConstructorClass
{
    public:
    ConstructorClass()
    {
        cout << "Hello World Constructor!" << endl << endl;
    }
};

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
    ConstructorClass objConstructor;

    Car carObj1("Merc", "C-Class", 2020);
    Car carObj2("Mini", "Cooper", 2016);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

    return 0;
}