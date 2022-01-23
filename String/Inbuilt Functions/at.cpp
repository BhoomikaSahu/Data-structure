#include <iostream>
#include <algorithm>
#include <string>     // To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{
    // at(): Returns the character at a particular position (can also be done using ‘[]’ operator). 
    // Its time complexity is O(1).

    string s1 = "palak";
    cout << s1.at(3) << endl;     // o/p -- a
    cout << s1[2] << endl;        // o/p -- l 
}


    