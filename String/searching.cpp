#include<iostream>
using namespace std;

void sorting(string str[], int n)
{
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(str[i]>str[j])
            {
                string temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
}
int main(){

    int n, c=0, j;
    cout << "Enter no. of strings : ";
    cin >> n;
    string s[n], key, search[10];
    
    for(int i=0; i<n; i++)
    {
        cout << i+1 << ". ";
        cin >> s[i];
    }
    cout << "Key : ";
    cin >> key;

    for(int i=0; i<n; i++)
    {
        for(j=0; j<key.length(); j++)
            if(key[j] == s[i][j])
                continue;
            else
                break;
        if(j == key.length())
            search[c++] = s[i];
    }
    sorting(search, c);
    if(c>5) c=5;
    for(int i=0; i<c; i++)
    {
        cout << search[i] << endl;
    }
    return 0;
}