#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line;                 
    fstream file;
    file.open("Bhoomika", ios::out | ios::in);  

    cout << "Write here : \n";

    while(line != "enter")
    {
        getline(cin, line);          // To read a line
        file << line << endl;
    }

    
    while(getline(file, line)){
        cout << line << endl ;
    }

    file.close();

    return 0;
}