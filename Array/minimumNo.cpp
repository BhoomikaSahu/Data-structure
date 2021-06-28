#include<iostream>
#include<climits>
using namespace std;
void read (int arr[], int n){
	int i;
    for (i=0; i<n; i++) {
    cin >> arr[i];
    }
}
void print (int arr[], int n){
	int i;
    for (i=0; i<n; i++) {
    cout << arr[i]<<" ";
    }
}
int min( int arr[], int n){
	int i, min = INT_MAX;
	for( i = 0; i < n ; i++){
		if( min > arr[i])
		    min = arr[i];
	}
	return min;
}
int main()
{
	int n,i;
	int array[n];
	cout<<"Enter number of elements : ";
	cin>>n;
	read (array, n);
	cout << "Minimum number = " << min (array, n);
    return 0;
}
