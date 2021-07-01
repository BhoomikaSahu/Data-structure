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
void swapKth(int arr[], int n, int k) {
	    int temp = arr[k-1];
	    arr[k-1] = arr[n-k];
	    arr[n-k] = temp;
}

int main()
{
    #ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
    #endif

	int n,k;
	cout<<"Enter number of elements : ";
	cin>>n;
    int arr[n];
	read (arr, n);
    cout << "Enter K : ";
    cin >> k;
    cout << "Updated Array......"; 
    swapKth(arr, n, k);
	print(arr, n);
    return 0;
}
