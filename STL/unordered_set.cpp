#include <iostream>
#include <unordered_set>
using namespace std;

void read(unordered_set<string> &s, int n){
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        s.insert(str);     // O(log(n))
    }
    cout << endl;
}

void print(unordered_set<string> &s){
    for(auto val : s){
        cout << val << endl;
    }
    cout << endl;
}

int main(){
    unordered_set<string> s;
    int n;
    cin >> n;
    read(s, n);
    print(s);    
}