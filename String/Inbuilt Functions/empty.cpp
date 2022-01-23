#include <iostream>
#include <algorithm>
#include <string>     // To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{
    string s1 = "";
    string s2 = "Bhoomika";    
    if(s1.empty())
        cout << "String is empty" << endl;  //o/p -- String is empty
    cout << s2;                 //o/p -- Bhoomika
}