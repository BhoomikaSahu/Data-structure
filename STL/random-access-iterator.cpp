#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    vector<int>::iterator itr1;
    for(itr1=v.begin(); itr1!=v.end(); itr1++){
        cout << *itr1 << " ";
    }

    itr1 = v.end();
    vector<int>::iterator itr2;
    itr2 = v.begin();
    int count = itr2-itr1;
    cout << "\ncount = " << count;

}