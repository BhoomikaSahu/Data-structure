#include<iostream>

using namespace std;

int countDistinctLetter(string s){
    int count = 0;
    for(int i=1; i<s.length(); i++){
        bool flag = true;
        for(int j=i-1; j>=0; j--)
            if(s[i] == s[j])
            {
                flag = false;
                break;
            }
    if(flag == true)
        count++;
    }
    return count+1;
}

int main()
{
	string s;
    cin >> s;
    cout << countDistinctLetter(s);
    return 0;
}