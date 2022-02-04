#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

string maximumFrequency(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}
// } Driver Code Ends
string maximumFrequency(string s){
    vector<pair<string, int>> vs;
    string temp = ""; int i;
    for(i=0; i<s.length(); i++){
        if(s[i] == ' ')
            vs.push_back({temp, i});
        else
            temp += s[i];
    }    
    vs.push_back({temp, i});

    map<pair<string, int>, int> m;

    for(auto str : vs){
        m.insert({{str.first, str.second}, ++m[str.first]});
    }
}

// string maximumFrequency(string s){
//         map<string, int> m;
//         string temp = "";
//         for(int i=0; i<s.length(); i++){
//             if(i == s.length()-1){
//                 temp += s[i];
//                 m.insert({temp, m[temp]++});
//                 temp = "";
//             }
//             else if(s[i] != ' ')
//                 temp += s[i];
//             else{
//                 m.insert({temp, m[temp]++});
//                 temp = "";
//             }
//         }
//         int max = 0;
//         string dup = (*(m.begin())).first;
//         for(auto word : m){
//             string key = word.first;
//             int val = word.second;
//             if(max < val){
//                 max = val;
//                 dup = key;
//             }
//             else if(max == val && dup > key){
//                 max = val;
//                 dup = key;
//             }
//         }
//         if(max > 1){
//             string str = dup + " " + to_string(max);
//             return str;
//         }
//         else{
//             string temp = "";
//             for(int i=0; i<s.length(); i++){
//                 if(s[i] != ' ')
//                     temp += s[i];
//                 else
//                     break;
//             }
//             return temp + " 1";
//         }
// }

// string maximumFrequency(string s){
//        // Complete the function
//        map<string, int> m;
//        vector<string>v;
//        string t;
       
//        for(int i=0;i<s.size();i++)
//        {
//            if(s[i]==' ')
//            {
//                v.push_back(t);
//                t.clear();
//            }
//            else t+=s[i];
//        }
//        v.push_back(t);
       
//        for(int i=0;i<v.size();i++)
//        m[v[i]]++;
       
//        int max=0;
//        t.clear();
       
//        for(int i=0;i<v.size();i++)
//            if(m[v[i]]>max)
//            {
//                max=m[v[i]];
//                t=v[i];
//            }
       
//        return t+' '+to_string(max);
// }

