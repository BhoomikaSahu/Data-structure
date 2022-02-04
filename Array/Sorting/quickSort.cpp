#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> &a, int first, int last){
    int temp = a[first];
    a[first] = a[last];
    a[last] = temp;
}

int partition(vector<int> &a, int low, int high){
    int pivot = a[high];
    
    int i = low - 1;

    for(int j=low; i<high; i++){
        if(a[j] < pivot){
            i++;
            swap(a,i,j);
        }
    }
    swap(a,i+1,high);
    return i+1;
}

void quicksort(vector<int> &a, int low, int high){
    if(low<high){
        int pi = partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
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
cout << 1;

    for(auto i:v){
        cout<<i<<" ";
    }

    return 0;
}