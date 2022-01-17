#include <iostream>
#include <map>
using namespace std;

void read(map<int, string> &m, int n){
    for(int i=0; i<n; i++){
        int x; string s;
        cin >> x >> s;
        m.insert(make_pair(x, s));
    }
    cout << endl;
}

void print(map<int, string> &m){
    for(auto val : m){
        cout << val.first << " " << val.second << endl;
    }
    cout << endl;
}

int main(){
    map<int, string> m;
    int n;
    cin >> n;
    // m[2] = "Bhoomika";   // O(log(n))
    // m[1] = "Palak";
    // m.insert({3, "Shreya"});  // O(log(n))
    read(m, n);
    print(m);     //O(nlog(n))
    auto it = m.find(3);
    cout << "Find(3) " << it->first << " " << it->second << endl;
    cout << "erase(3) " << endl;
    m.erase(it);
    print(m);
}