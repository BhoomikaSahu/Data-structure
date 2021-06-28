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
void reverseEle(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main()
{
	int n;
	cout << "Enter number of elements : ";
	cin >> n ;
    int arr[n];
	read(arr , n);
	reverseEle(arr, n);
    cout << "Revered Array : ";
    print(arr, n);
	return 0;
}
