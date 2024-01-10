#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> &a, int first, int last){
    int temp = a[first];
    a[first] = a[last];
    a[last] = temp;
}

int partition(vector<int> &a, int low, int high){
    int pivot = a[low];
    int i=low, j=high;
    while (i<j){
        while (a[i]<=pivot && i<high){
            i++;
        }
        while (a[j]>pivot && j>low) {
            j--;
        }
        if(i<j) {
            swap(a, i, j);
         }
    }    
    swap(a, low, j);
    return j;
}

void quicksort(vector<int> &a, int low, int high){
    if(low>high){
        return;
    }
    int pi = partition(a,low,high);
    quicksort(a,low,pi-1);
    quicksort(a,pi+1,high);
}

int main(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    quicksort(v,0,n-1);

    for(auto i:v){
        cout<<i<<" ";
    }

    return 0;
}