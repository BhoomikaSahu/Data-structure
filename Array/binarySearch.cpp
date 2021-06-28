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
int binarySearch(int arr[], int n, int key) {
	int low=0, high=n-1, mid=0;
	while( low <= high ) {
	    mid = (low + high)/2;
		if( arr[mid] == key){
			return mid+1;
	    }
		else if( arr[mid] < key ){
		    low = mid + 1;
	    }
		else{
		    high = mid-1;
	    }
    }
	return -1;
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
    #endif
	
	int n, key , arr[Size];
	cout << "Enter number of elements : ";
	cin >> n ;
	read(arr , n);
	print(arr, n);
	cout << "Enter key : ";
	cin >>key;
	cout << "Location of " << key << " is : "<< binarySearch(arr,n,key);
	return 0;
}
