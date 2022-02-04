#include <iostream>
#include <string>     //To use strings in a program, you need to include a header called string.
using namespace std;
int main()
{
    // Normal input and output 
    string str;
    cin >> str;                  // i/p -- Bhoomika sahu
    cout << str << endl;         // o/p -- Bhoomika

    // It declares a string of size 4 with all characters ‘b’. 
    string str1(4,'b');   
    cout << str1 << endl;        // o/p -- bbbb

    // It declares a string of value “BhoomikaSahu”
    string str2 = "BhoomikaSahu"; 
    cout << str2 << endl;         // o/p -- BhoomikaSAhu

    // getline() -- To input the string with space, we use getline() function instead of cin.
    string str3;
    getline(cin, str3);          // i/p -- This is getline fun
    cout << str3 << endl;        // o/p -- This is getline fun
    
    return 0;
}
