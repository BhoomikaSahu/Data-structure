#include <iostream>
#include <algorithm>
#include <string>     // To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{
    string s1 = "Bhoomika";
    string s2 = "Bhoomika";    
    cout << s1.compare(s2) << endl;            // o/p -- 0
    if(!s1.compare(s2))               
        cout << "Strings are equal" << endl;   // o/p -- Strings are equal
}
