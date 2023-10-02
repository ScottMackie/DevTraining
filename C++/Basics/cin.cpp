#include <iostream>

std::string string;
int var1 = 0;
int var2 = 0;

int main()
{
    
    std::cout << "cin is used to input info to ther program from terminal/screen." << std::endl;
    std::cout << "Input a String, Then Hit Enter" << std::endl;
    std::cin >> string;
    std::cout << "Your string was " << string << std::endl;
    std::cout << std::endl;
    std::cout << "we can also inout numbers and the process them" << std::endl << std::endl;
    std::cout << "Input a 2 numbers to me added together with a space between, Then Hit Enter" << std::endl;
    std::cin >> var1 >> var2;
    std::cout << "Your Numbers were " << var1 << " & " << var2 << "the sum is: " << var1 + var2 << std::endl;
    
    return 0;
}