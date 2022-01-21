#include<iostream>
using namespace std;
int main()
{
    char ch;
    while(ch != '\n')
    {
        cin.get(ch);
        cout.put(ch);
    }
    return 0;
}