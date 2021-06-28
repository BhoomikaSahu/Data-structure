#include<iostream>
using namespace std;
void read(int arr[], int n){
	int i;
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
}
void print(int arr[], int n){
	int i;
    for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}
int main()
{
	int n,i;
	int array[n];
	cout<<"Enter number of elements : ";
	cin>>n;
	read(array,n);
	print(array,n);
	/*for(i=0;i<n;i++){
    cin>>array[i];
    }
    for(i=0;i<n;i++){
    cout<<array[i]<<" ";
    }*/
    return 0;
}
