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
int max1( int arr[], int n){
	int i, max = INT_MIN;
	for( i = 0; i < n ; i++){
		if( max < arr[i])
		    max = arr[i];
	}
	return max;
}
int main()
{
	int n,i;
	int maxNo = INT_MIN;
	int array[n];
	cout<<"Enter number of elements : ";
	cin>>n;
	read (array, n);
	cout << "Maximum number = " << max1(array,n); 
	/*for ( i=0 ; i<n; i++)
	{
		maxNo = max(maxNo,array[i]);
	}
	cout << maxNo;*/
    return 0;
}
