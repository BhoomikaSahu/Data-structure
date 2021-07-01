#include<iostream>
#define Size  100
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
void insertEle(int arr[], int n, int x, int loc){
    for(int i=n-1; i>=loc; i--)
    {
            arr[i+1] = arr[i];
    }
    arr[loc] = x;

}
int main(){
	int n, key , arr[Size], loc;
	cout << "Enter number of elements : ";
	cin >> n ;
	read(arr , n);
	cout << "Enter key : ";
	cin >>key;
        cout << "Enter location : ";
        cin >> loc;
	insertEle(arr, n, key, loc);
        cout << "Updated array : ";
        print(arr, n+1);
	return 0;
}
