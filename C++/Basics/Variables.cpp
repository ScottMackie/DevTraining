#include <iostream>

std::string string = "this is a string";

int _int = 42;
double _double = 42.99;
char _chr = 'x';
bool _bool =  true;



int main()
{
    
    std::cout << "int is " << _int << std::endl;
    std::cout << "double is " << _double << std::endl;
    std::cout << "char is " << _chr << std::endl;
    std::cout << "bool is " << _bool << std::endl;
    std::cout << string << std::endl;
    return 0;
}