#include <iostream>
using namespace std;

bool isPalindrom(string s, int start) {
    if(start > s.length()/2) return true;
    if(s[start] != s[s.length()-start-1]){
        return false;
    }
    return isPalindrom(s, start+1);
}

int main(){
    string s;
    cin >> s;
    cout << isPalindrom(s, 0);
    return 0;
}