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
void bubbleSort( int A[], int n ){
	int i, j, temp;
	for(i = 0; i < n-1; i++)
	    for(j = 0; j < n -1- i; j++)
	    	if(A[j+1] < A[j]){
	    		temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
			}
}
void optBubbleSort( int A[], int n ){
	int i, j, temp;
	bool  swapped;
	for(i = 0; i < n-1; i++)
	{
		swapped = true;
		 for(j = 0; j < n -1- i; j++)
	    	if(A[j+1] < A[j]){
	    		temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
				swapped = false;
			}
		if(swapped == true)
		    break;
	}
}

int main()
{
    #ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
    #endif

	int n;	
	cout<<"Enter number of elements : ";
	cin>>n;
    int A[n];
	read (A, n);
	cout << "\nRunning Bubble Sort.........\n";
    bubbleSort (A, n);
	print (A, n);
    return 0;
}
