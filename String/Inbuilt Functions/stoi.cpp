#include <iostream>
#include <algorithm>
#include <string>     // To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{  
    string st = "101";
    int num = stoi(st);
    cout << num+100 << endl;      // o/p -- 201
}