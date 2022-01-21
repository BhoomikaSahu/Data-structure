#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string fname, lname;                 // Declare variables
    fstream fin;
    fin.open("Bhoomika", ios::out | ios::in);   // Create file using member function or open file to write in it
    cout << "Enter your first name : ";
    cin >> fname;
    cout << "Enter your last name : ";
    cin >> lname;
    fin << fname << " " << lname << endl; // Write in File 
    

    //string name1, name2;                // Declare variables
    //ifstream fout;
    //fout.open("Bhoomika", ios::in);    // Open file for read from it
    fin >> fname >> lname;               // Read from file
    cout << fname << " " << lname;      
    fin.close();                         // Close file
    return 0;
}