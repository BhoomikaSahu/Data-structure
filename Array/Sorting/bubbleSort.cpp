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
void bubbleSort( int arr[], int n ){
	int i, j, temp;
	for(i = 0; i < n-1; i++)
	    for(j = 0; j < n-1-i; j++)
	    	if(arr[j+1] < arr[j]){
	    		temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
			}
}
void optBubbleSort( int arr[], int n ){
	int i, j, temp;
	bool  swapped;
	for(i = 0; i < n-1; i++)
	{
		swapped = true;
		 for(j = 0; j < n-1-i; j++)
	    	if(arr[j+1] < arr[j]){
	    		temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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
    int arr[n];
	read (arr, n);
	cout << "\nRunning Bubble Sort.........\n";
    bubbleSort (arr, n);
	print (arr, n);
    return 0;
}
