#include<iostream>
using namespace std;
void read (int arr[], int n){
	int i;
    for (i=0; i<n; i++) {
    cin >> arr[i];
    }
}
int linearSearch (int arr[], int n, int key){
	int i;
	for( i=0; i<n; i++){
		if(key==arr[i])
		return i;
	}
	return -1;
}
int main(){
	int n, key , arr[n];
	cout << "Enter number of elements : ";
	cin >> n ;
	read(arr , n);
	cout << "Enter key : ";
	cin >>key;
	cout << "Position of " << key << " is : "<<linearSearch(arr,n,key);
	return 0;
}
