/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
Sample Input 1  : 3 4
Sample Output 1 : 81
Sample Input 2  :  2 5
Sample Output 2 : 32
*/

#include<iostream>

using namespace std;

int power(int x, int n) {
    
    if(n == 0)
        return 1;
    
    return (x * power(x, n-1));
}

int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}