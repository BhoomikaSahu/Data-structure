#include<iostream>
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
int sum (int arr[], int n){
	int i, sum = 0;
	for(i=0; i<n; i++){
		sum = sum + arr[i];
	}
	return sum;
}
int main()
{
	int n,i;
	int array[n];
	cout<<"Enter number of elements : ";
	cin>>n;
	read (array, n);
	cout<<sum (array, n);
//	print (array, n);
	return 0;
}
