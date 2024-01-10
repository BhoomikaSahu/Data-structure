#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    // int n;
    // cin >> n;

    // for(int i=0; i<n; i++){
    //     int ele;
    //     cin >> ele;
    //     v.push_back(ele);
    // }
    // cout << *(v.begin()) << " " << *(v.end());
    vector<int>::iterator itr1;
    // for(itr1=v.begin(); itr1!=v.end(); itr1++){
    //     cout << *itr1 << " ";
    // }


    itr1 = v.end()-1;
    // itr1++;
    cout << *itr1 << endl;
    // vector<int>::iterator itr2;
    // itr2 = v.begin();
    // int count = itr2-itr1;
    // cout << "\ncount = " << count;

}