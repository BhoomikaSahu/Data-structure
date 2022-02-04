#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string upperCase(string s){  // Convert lower case letters into upper case letters
    int i=0;
    while(i < s.length()){

        if(s[i]>='a' && s[i]<='z')        
            s[i] = s[i]-32;         
        i++;
    }
    return s;
}

int main(){
    string str;
    cin >> str;                      // i/p -- bhoomika
    cout << upperCase(str) << endl;  // o/p -- BHOOMIKA

    // Use inbuilt function
    transform(str.begin(), str.end(), str.begin(), ::toupper );
    cout << str << endl;
    
    return 0;
}