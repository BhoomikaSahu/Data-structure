#include <iostream>
#include <set>
using namespace std;

void read(set<string> &s, int n){
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        s.insert(str);     // O(log(n))
    }
    cout << endl;
}

void print(set<string> &s){
    for(auto val : s){
        cout << val << endl;
    }
    cout << endl;
}

int main(){
    set<string> s;
    int n;
    cin >> n;
    read(s, n);
    print(s);    
}