#include <iostream>

std::string string;

int main()
{
    
    std::cout << "cout is used to output info to terminal/screen/output." << std::endl;

    std::cout << "cout can string multiple " << "like this" << std::endl;
    std::cout << std::endl;
    std::cout << "std::endl is used to end line, like carriage return in C" << std::endl;

    string = "this string is in separate variable";

    std::cout << string << std::endl;

    std::cout << "we can also add numbers like " << 42 << std::endl; 

    
    return 0;
}