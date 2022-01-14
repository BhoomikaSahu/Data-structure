#include <iostream>
#include <vector>
using namespace std;

void read(vector<pair<int, int>> &v, int n){
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        // v.push_back({x, y});  
        v.push_back(make_pair(x, y));
    }
    cout << endl;
}

void print(vector<pair<int, int>> v){
    cout << "Size: " << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main(){
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    // for(int i=0; i<n; i++){
    //     int x, y;
    //     cin >> x >> y;
    //     v.push_back({x, y});
    // }
    read(v, n);
    print(v);

}