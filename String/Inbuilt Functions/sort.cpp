#include <iostream>
#include <algorithm>
#include <string>     // To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{  
    string s3 = "qwertyuioplkjhgfdsazxcvbnm";
    sort(s3.begin(), s3.end());   
    cout << s3 << endl;         // o/p -- abcdefghijklmnopqrstuvwxyz
}