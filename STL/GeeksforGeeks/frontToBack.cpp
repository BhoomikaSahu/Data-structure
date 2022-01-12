#include <iostream>
#include <vector>
using namespace std;

void iter(vector<int>::iterator it1,vector<int>::iterator it2)
{
    while(it1 != it2){
        cout << *it1 << " ";
        it1++;
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    iter(v.begin(), v.end());
    return 0;
    
}