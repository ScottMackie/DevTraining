#include <iostream>
#include <string>

using namespace std;

string string1;
string string2;
string string3;

int main()
{

    string1 = "This is a string";

    cout << string1 << endl;

    string2 = ", with an extra string variable added, but still separate variables.";

    cout << string1 << string2 << endl;

    string2 = ", but both string1 & string2 are appended together into a new string.";

    string3 = string1.append(string2);

    cout << "Using Append(" << string3 << ")" << endl;
    
    return 0;
}