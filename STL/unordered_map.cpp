#include <iostream>
#include <unordered_map>
using namespace std;

// void read(unordered_map<int, string> &m, int n){
//     for(int i=0; i<n; i++){
//         int x; string s;
//         cin >> x >> s;
//         m.insert(make_pair(x, s));
//     }
//     cout << endl;
// }

// void print(unordered_map<int, string> &m){
//     for(auto val : m){
//         cout << val.first << " " << val.second << endl;
//     }
//     cout << endl;
// }

int main(){
    // unordered_map<string, pair<int,int>> m = {{"abc",{1,2}}, {"ddd",{3,4}}};
    // auto it = m.begin();
    // cout << (*it).first << " " << ((*it).second).first << " " << ((*it).second).second;
    // int n;
    // cin >> n;
    // m[2] = "Bhoomika";   // O(1)
    // m[1] = "Palak";
    // m.insert({3, "Shreya"});  // O(1)
    // read(m, n);
    // print(m);     //O(1)
    // auto it = m.find(3);
    // cout << "Find(3) " << it->first << " " << it->second << endl;
    // cout << "erase(3) " << endl;
    // m.erase(it);
    // print(m);

    unordered_map<char, int> m = {{'a', 1}, {'b', 2}, {'c', 3}};
    string s = "abc";
    
    for(char c : s){
        if(m[c] > 0){
            cout << "yes";
        }
    }
}