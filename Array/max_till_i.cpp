#include<iostream>

using namespace std;
void read (int arr[], int n) {
	int i;
    for (i=0; i<n; i++) {
    cin >> arr[i];
    }
}
void print(int arr[], int n){
	int i;
    for(i=0;i<n;i++){
    cout<< arr[i] << " ";
    }
    cout << endl;
}
void max_till_i(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        cout << max << " ";
        if(arr[i] > arr[i-1])
            max = arr[i];
        else
            max = arr[i-1];
    }
    cout << max;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    read(arr, n);
    max_till_i(arr, n);
}