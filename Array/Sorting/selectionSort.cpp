#include<iostream>
#include<climits>
#define size 100
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
void selectionSort( int A[], int n ){
	int i, j, temp, indexOfMin;
	for(i = 0; i < n - 1; i++){
		indexOfMin = i;
	    for(j = i + 1; j < n; j++){
	    	if(A[indexOfMin] > A[j]){
	    		indexOfMin = j;
			}
	    }
	    temp = A[i];
	    A[i] = A[indexOfMin];
	    A[indexOfMin] = temp;
	}
}

int main()
{
	int n; int i,min,j,temp;
	int A[size];
	cout<<"Enter number of elements : ";
	cin>>n;
	read (A, n);
	print (A, n);
	cout << "\nRunning Selection Sort.........\n";
    selectionSort (A, n);
	print (A, n);
    return 0;
}
