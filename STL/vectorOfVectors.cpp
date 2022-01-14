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
    vector<vector<int>> v;
    for(int i=0; i<N; i++){
        int n; 
        cin >> n;
        // v.push_back(vector<int> ());
        // read(v[i], n);

        vector<int> temp;
        read(temp, n);
        v.push_back(temp);
    }
    for(int i=0; i<N; i++)
        print(v[i]);
}