#include <iostream>
#include <vector>
using namespace std;

void read(vector<int> &v, int n){
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);  
    }
    cout << endl;
}

void print(vector<int> v){
    cout << "Size: " << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    int N;
    cin >> N;
    vector<int> v[N];
    for(int i=0; i<N; i++){
        int n; 
        cin >> n;
        read(v[i], n);
    }
    for(int i=0; i<N; i++)
        print(v[i]);
}