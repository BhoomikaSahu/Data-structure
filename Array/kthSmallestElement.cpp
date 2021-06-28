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
int kthSmallest(int arr[], int l, int r, int k)
    {
        for(int i=0; i<r; i++)
        {
            for(int j=i+1; j<=r; j++)
            {
                if(arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr[k-1];
    }

int main()
{
	int n,k;
	cout<<"Enter number of elements : ";
	cin>>n;
    int arr[n];
	read (arr, n);
    cout << "Enter K : ";
    cin >> k;
	cout << kthSmallest(arr, 0, n-1, k);
    return 0;
}
