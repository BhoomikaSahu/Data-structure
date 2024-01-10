#include <iostream>
using namespace std;
int main(){
    pair<int, int> pr;
    pr = {1, 100};
    cout << pr.first << endl << pr.second;

    pair<int, string> p;
    p = {1, "Apple"};
    cin >> p.first >> p.second;
    cout << p.first << " " << p.second;

    pair<int, int> pArr[5];
    for(int i=0; i<5; i++)
        cin >> pArr[i].first >> pArr[i].second;
    swap(pArr[1], pArr[3]);
    for(int i=0; i<5; i++)
        cout << pArr[i].first << " " << pArr[i].second << endl;
}