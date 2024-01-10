/*
Given is the code to print numbers from 1 to n in increasing order recursively. But it contains few bugs that you need to rectify such that all the test cases pass.
Sample Input 1  : 6
Sample Output 1 : 1 2 3 4 5 6
Sample Input 2  : 4
Sample Output 2 : 1 2 3 4
*/

#include<iostream>
using namespace std;

void print1(int n){
    if(n == 1){
        cout << n << " ";
    }
    else{
        print1(n - 1);
        cout << n << " ";
    }
}
void print2(int n) {
    if(n<1) return;

    cout << n << " ";
    print2(n-1);

}

int main(){
    int n;
    cin >> n;  
    print2(n);
}