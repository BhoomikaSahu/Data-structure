#include <iostream>
#include <algorithm>
#include <string>     // To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{  
    string a1 = "Nincompoop";
    string s = a1.substr(6,3);
    cout << s << endl;            // o/p -- poo
}