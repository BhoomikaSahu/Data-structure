#include<iostream>

using namespace std;
void read (int arr[], int n) {
	int i;
    for (i=0; i<n; i++) {
    cin >> arr[i];
    }
}
void print(int arr[], int n){
	int i;
    for(i=0;i<n;i++){
    cout<< arr[i] << " ";
    }
    cout << endl;
}
int countDistinctEle(int arr[], int n){
    int count = 0;
    for(int i=1; i<n; i++){
        bool flag = true;
        for(int j=i-1; j>=0; j--)
            if(arr[i] == arr[j])
            {
                flag = false;
                break;
            }
    if(flag == true)
        count++;
    }
    return count+1;
}

int main()
{
	int n;
	cout << "Enter number of elements : ";
	cin >> n ;
    int arr[n];
	read(arr , n);
	print(arr, n);
    cout << "Distinct elements in array = "  << countDistinctEle(arr, n);
	return 0;
}
