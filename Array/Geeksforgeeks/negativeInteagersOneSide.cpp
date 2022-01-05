// Move all negative numbers to beginning and positive to end with constant extra space
// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5

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
// int rearrange(int arr[], int n){
//     int l=0;
//     for(int i=0; i<n; i++){
//         if(arr[i] < 0){
//             int temp = arr[i];
//             for(int j=i; j>l; j--){
//                 arr[j] = arr[j-1];
//             }
//             arr[l++] = temp;
//         }
//     }
// }
int rearrange(int arr[], int n){              // Optimized Solution
    int l=0, r=n-1;
    while(l<r){        
        if(arr[l] < 0 ) l++;
        if(arr[r] >= 0) r--;
        if(l>=r) break;
        if(arr[l]>=0 && arr[r]<0)
            swap(arr[l++], arr[r--]);
        
    }
}

int main()
{
	int n;
	cout<<"Enter number of elements : ";
	cin>>n;
    int arr[n];
	read (arr, n);
    rearrange(arr, n);
	print(arr, n);
    return 0;
}