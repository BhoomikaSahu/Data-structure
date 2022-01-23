#include <iostream>
#include <algorithm>
#include <string>     // To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{
    //assign(): Assigns new string by replacing the previous value (can also be done using ‘=’ operator).
    string s1 = "Bhoomika";
    string s2;    
    s2.assign("Bhoomika");
    cout << s2 << endl;           // o/p -- Bhoomika
}