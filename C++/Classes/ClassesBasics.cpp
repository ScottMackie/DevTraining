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