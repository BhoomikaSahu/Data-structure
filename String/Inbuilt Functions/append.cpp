#include <iostream>
#include <algorithm>
#include <string>     // To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{
    // append(): Inserts additional characters at the end of the string (can also be done using ‘+’ or ‘+=’ operator). 
    // Its time complexity is O(N) where N is the size of the new string.
    string s1 = "Bhoomika";
    string s2 = "Bhoomi";
    cout << s1 + s2 << endl;      // o/p -- BhoomikaBhoomi
    s1.append(s2);
    cout << s1 << endl;           // o/p -- BhoomikaBhoomi
}