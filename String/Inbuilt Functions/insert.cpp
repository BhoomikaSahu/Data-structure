#include <iostream>
#include <algorithm>
#include <string>     // To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{  
    string a1 = "Ninpoop";
    
    a1.insert(3,"com");    
    cout << a1 << endl;   // Nincompoop
}