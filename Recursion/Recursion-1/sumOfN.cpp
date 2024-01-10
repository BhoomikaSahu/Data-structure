#include <iostream>
using namespace std;

int sum (int n) {
    if(n < 1) {
        return 0; 
    }
    n += sum(n-1);
    return n;
} 

int main () {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}