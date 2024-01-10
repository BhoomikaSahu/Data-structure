#include <iostream>
#include <map>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    // Hash Array Method
    // int hashArr[15] = {0};
    // for(int i=0; i<n; i++) {
    //     hashArr[arr[i]] += 1;
    // }

    // Hash Map Method
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        mp[arr[i]] += 1; 
    }

    int q;
    cin >> q;
    for(int i=0; i<q; i++) {
        int x;
        cin >> x; 
        // cout << x << " - " << hashArr[x] << endl;
        cout << x << " - " << mp[x] << endl;
    }
    return 0;
} 