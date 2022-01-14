#include <iostream>
#include <vector>
using namespace std;

void read(vector<pair<int, int>> &v, int n){
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    cout << endl;
}

void print(vector<pair<int, int>>::iterator it1, vector<pair<int, int>>::iterator it2){
    for(auto it=it1; it!=it2; it++){
        cout << (*it).first << " " << it->second << endl;
    }
    cout << endl;
}

int main(){
    vector<pair<int, int>> v;
    vector<pair<int, int>> ::iterator it1, it2;
    int n;
    cin >> n;
    read(v, n);
    it1 = v.begin();
    it2 = v.end();
    print(it1, it2);

}