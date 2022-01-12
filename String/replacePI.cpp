#include <iostream>

using namespace std;

string replacePI(string);

int main(){
    string s;
    cin >> s;
     cout << replacePI(s);
    //cout << s;
}

string replacePI(string str){
    string s = str;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'p' || s[i] == 'P')
            if(s[i+1] == 'i' || s[i+1] == 'I'){
                s[i] = '3';
                s[i+1] = '.';

                for(int j=s.length()+2; j>1; j++){
                    s[j] = s[j-2];
                }
                s[i+2] = '1';
                s[i+3] = '4';
                //s[i+1] = '';
            }
    }
    return s;
}