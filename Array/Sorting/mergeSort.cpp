/*Time Complexity: o(nlogn)
Space complexity: O(n) */

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

void merge(int arr[], int low, int mid, int high) {
    int left = low;
    int right = mid+1;
    int temp[high-low+1];
    int i=0;
    while (left <= mid && right <=high) {
        if(arr[left] <= arr[right]) {
            temp[i++] = arr[left];
            left++;
        } else {
            temp[i++] = arr[right];
            right++;
        }
    }
    while(left <= mid) {
        temp[i++] = arr[left];
        left++;
    }
    while(right <= high) {
        temp[i++] = arr[right];
        right++;
    }
    for(int j=low; j<=high; j++) {
        arr[j] = temp[j-low];
    }
}

void mergeSort( int arr[], int low, int high ){
    if(low >= high) {
        return;
    }
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main()
{
	int n;	
	cout<<"Enter number of elements : ";
	cin>>n;
    int A[n];
	read (A, n);
	cout << "\nRunning Merge Sort.........\n";
    mergeSort (A, 0, n-1);
	print (A, n);
    return 0;
}
