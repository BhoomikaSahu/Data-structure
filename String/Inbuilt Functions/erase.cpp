#include <iostream>
#include <algorithm>
#include <string>     // To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{  
    string a1 = "Nincompoop";
    a1.erase(8,2);        // 1st arg shows position and 2nd arg shows how many charecters you want to erase 
    cout << a1 << endl;   // o/p -- Nincompo

}