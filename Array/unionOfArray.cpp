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
void unionOfArray(int a1[], int m, int a2[], int n, int u[], int s){
    bool check = true;
    int k=m;

    for(int i=0; i<m; i++)
        u[i]  = a1[i];
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            if(a2[i] == a1[j])
                check = false;
        
        if(check == true)
            u[k++] = a2[i];
        check = true;
    }
    for(int i=0; i<k-1; i++)
        cout << u[i] << " ";
    cout << endl;
}
int main()
{
	int m, n;
	cout << "Enter number of elements in First Array : ";
	cin >> m;
    int a1[m];
    read(a1, m); 

    cout << "Enter number of elements in Second Array : ";
	cin >> n;
    int a2[n];    
    read(a2, n);

    int u[m+n] = {0};
    unionOfArray(a1, m, a2, n, u, m+n);
    print(u,m+n);

    return 0;
}
