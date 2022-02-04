#include<iostream>
#include <algorithm>
using namespace std;

string lowerCase(string s){  // Convert upper case letters into lower case letters
    int i=0;
    while(i < s.length()){

        if(s[i]>='A' && s[i]<='Z')        
            s[i] = s[i]+32;         
        i++;
    }
    return s;
}

int main(){
    string str; 
    cin >> str;                      // i/p -- BHOOMIKA
    cout << lowerCase(str) << endl;  // o/p -- bhoomika

    transform(str.begin(), str.end(), str.begin(), ::tolower );
    cout << str << endl;

    return 0;
}