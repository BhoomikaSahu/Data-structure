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
void insertionSort( int arr[], int n ){
	for(int i=1; i<n; i++)
    {
        int current = arr[i];
        int j = i-1;
        while(j>=0 && current<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

int main()
{
    /*#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
    #endif*/

	int n;	
	cout<<"Enter number of elements : ";
	cin>>n;
    int A[n];
	read (A, n);
	cout << "\nRunning Insertion Sort.........\n";
    insertionSort (A, n);
	print (A, n);
    return 0;
}
