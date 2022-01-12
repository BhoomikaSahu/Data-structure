// Time Complexity
// size() -> O(1)
// push_back() -> O(1)
// pop_back() -> O(1)

#include <iostream>
#include <vector>
using namespace std;

// void print(vector<int> v){                 //O(n)
//     for(int i=0; i<v.size(); i++)   
//         cout << v[i] << " ";
//     cout << endl;
// }

void print(vector<int> &v){                  //O(1)
    for(int i=0; i<v.size(); i++)   
        cout << v[i] << " ";
    cout << endl;
}

int main(){
    vector<int> v1;
    v1.push_back(123);
    v1.push_back(456);
    print(v1);

    vector<int> v2 = v1; //O(n)
    print(v2);

    vector<int> &v3 = v1; //O(1)
    v1.push_back(678);
    print(v3);




}