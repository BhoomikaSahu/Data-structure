#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    if(start < end ) {
        
    swap(arr[start], arr[end]);
    reverse(arr, start+1, end-1);
    }
}

int main() {
    int n;    
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i]; 
    }
    reverse(a, 0, n-1);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}