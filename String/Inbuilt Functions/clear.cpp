#include <iostream>
#include <algorithm>
#include <string>     // To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{
    string s1 = "Bhoomika";
    string s2 = "Bhoomika";    
    s1.clear();                                 
    cout << s1 << endl;         //o/p -- no output
    cout << s2;                 //o/p -- Bhoomika
}