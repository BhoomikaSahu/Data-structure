/*
Given an array of length N, you need to find and return the sum of all elements of the array.
Sample Input 1 :
3
9 8 9
Sample Output 1 :
26
Sample Input 2 :
3
4 2 1
Sample Output 2 :
7    
*/

#include<iostream>

using namespace std;

int sum(int input[], int n) {
  
    if(n == 1)
        return input[0];
    
    int s = input[0] + sum(input+1, n-1);
    return s;
    
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
}


