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

/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    for(int i=2; i<=20; i+=2){
        a.push_back(i);
    }
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    return 0;
}*/