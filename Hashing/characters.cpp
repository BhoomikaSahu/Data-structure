#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    char arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int hashArr[26] = {0};
    for(int i=0; i<n; i++) {
        hashArr[arr[i]-'a'] += 1;
    }

    int q;
    cin >> q;
    for(int i=0; i<q; i++) {
        char x;
        cin >> x; 
        cout << x << " - " << hashArr[x-'a'] << endl;
    }
    return 0;
} 