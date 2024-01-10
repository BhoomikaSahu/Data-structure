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

void selectionSort(int arr[], int n) {
	for(int i=0; i<n-1; i++) {
		int mini = i;
		for(int j=i+1; j<n; j++) {
			if(arr[mini] > arr[j]) {
				mini = j;
			}
		}
		int temp = arr[mini];
		arr[mini] = arr[i];
		arr[i] = temp;
	}
}

int main()
{
	int n; int i,min,j,temp;
	int arr[size];
	cout<<"Enter number of elements : ";
	cin>>n;
	read (arr, n);
	print (arr, n);
	cout << "\nRunning Selection Sort.........\n";
    selectionSort (arr, n);
	print (arr, n);
    return 0;
}
