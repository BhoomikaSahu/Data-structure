#include <iostream>
#include <map>
#include <vector>
using namespace std;

void read(map<pair<string, string>, vector<int>> &m, int n){
    for(int i=0; i<n; i++){
        string fn, ln;
        int totalSub;
        cin >> fn >> ln >> totalSub;
        for(int j=0; j<totalSub; j++){
            int x;
            cin >> x;
            m[{fn, ln}].push_back(x);
        }
    }
}

void print(map<pair<string, string>, vector<int>> &m, int n){
    // cout << "\n Print";
    for(auto &item : m){
        auto &fullName = item.first;
        auto &list = item.second;
        cout << fullName.first << " " << fullName.second << " ";
        for(auto &mark : list)
            cout << mark << " ";
        
        cout << endl;
    }
}

int main(){
    map<pair<string, string>, vector<int>> m;
    int n;
    cin >> n;
    read(m, n);
    print(m, n);
    return 0;
}