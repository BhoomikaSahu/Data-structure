#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter no. of strings : ";
    cin >> n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cout << i+1 << ". ";
        cin >> s[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[i]>s[j])
            {
                string temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << i+1 << ". " << s[i] << endl;
    }
    return 0;
}