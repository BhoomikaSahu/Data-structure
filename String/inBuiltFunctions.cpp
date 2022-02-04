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
    // s1.append(s2);
    cout << s1 << endl;           // o/p -- BhoomikaBhoomi
    
    //assign(): Assigns new string by replacing the previous value (can also be done using ‘=’ operator).
    s2.assign("Bhoomika");
    cout << s2 << endl;           // o/p -- Bhoomika

    // at(): Returns the character at a particular position (can also be done using ‘[]’ operator). 
    // Its time complexity is O(1).
    cout << s1.at(2) << endl;     // o/p -- o
    cout << s1[2] << endl;        // o/p -- o   

    // compare(): Compares the value of the string with the string passed in the parameter and returns an integer accordingly. 
    // Its time complexity is O(N + M) 
    // where N is the size of the first string and M is the size of the second string.
    // o/p = -1 that means first string contains letters those ascii values are less than second string
    // o/p = 0  that means both strings are same
    // o/p = 1  that means first string contains letters those ascii values are greater than second string
    cout << s1.compare(s2) << endl;            // o/p -- 0
    if(!s1.compare(s2))               
        cout << "Strings are equal" << endl;   // o/p -- Strings are equal
    
    // clear(): Erases all the contents of the string and assign an empty string ("") of length zero. 
    // Its time complexity is O(1). 
    s1.clear();                                 
        cout << s1 << endl;         //o/p -- no output

    // empty(): Returns a boolean value, true if the string is empty and false if the string is not empty. 
    // Its time complexity is O(1).
    if(s1.empty())
        cout << "String is empty" << endl;  //o/p -- String is empty

    // erase(): Deletes a substring of the string. 
    // Its time complexity is O(N) where N is the size of the new string.
    string a1 = "Nincompoop";
    a1.erase(8,2);        // 1st arg shows position and 2nd ard shows how many charecters you want to erase 
    cout << a1 << endl;   // o/p -- Nipoop

    // find(): Searches the string and returns the first occurrence of the parameter in the string. 
    // Its time complexity is O(N) where N is the size of the string.
    cout << a1.find("comp") << endl;  // o/p -- 3

    // insert(): Inserts additional characters into the string at a particular position.
    // Its time complexity is O(N) where N is the size of the new string.
    a1.insert(8,"op");    
    cout << a1 << endl;

    // length() and size(): both are return size of string
    // time complexity for both is O(1).
    cout << a1.length() << " " << a1.size() << endl ;      // o/p -- 10 10
    
    // substr(): Returns a string which is the copy of the substring. 
    // Its time complexity is O(N) where N is the size of the substring. 
    string s = a1.substr(6,3);
    cout << s << endl;            // o/p -- poo
    
    // stoi(): Returns the strings converted to int datatype.
    string st = "101";
    int num = stoi(st);
    cout << num+100 << endl;      // o/p -- 201

    // to_string(): To convert an integer to a string, we use to_string() function.
    num = 1234;
    st = to_string(num);
    cout << st + "5" << endl;     // o/p -- 12345 
    
    // Sorting a string: To sort a string, we need to include a header file known as <algorithm> 
    // Then we can use sort() function that is present in above header file on our string.
    // Sort() function takes 2 arguments viz. iterator to start of the string and iterator to end of the string.
    // begin(): Returns an iterator pointing to the first character. 
                //Its time complexity is O(1)t
    // end(): Returns an iterator pointing to a position which is next to the last character. 
              //Its time complexity is O(1).
    string s3 = "qwertyuioplkjhgfdsazxcvbnm";
    sort(s3.begin(), s3.end());   
    cout << s3 << endl;         // o/p -- abcdefghijklmnopqrstuvwxyz
    

    return 0; 
}
