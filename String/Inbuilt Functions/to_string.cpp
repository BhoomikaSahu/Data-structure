#include <iostream>
#include <algorithm>
#include <string>     // To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{  
    int num = 1234;
    string st = to_string(num);
    cout << st + "5" << endl;     // o/p -- 12345
}