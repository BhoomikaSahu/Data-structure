#include<iostream>
using namespace std;

void printFibonacci(int n){
    int a=0, b=1;
    int sum=0;
    cout << a << " " << b << " ";
    for(int i=1; i<=n-2; i++) {
        sum = a+b;
        cout << sum << " ";
        a = b; 
        b = sum;
    }
}

int main() {
    int n;
    cin >> n;
    printFibonacci(n);
    return 0;
}