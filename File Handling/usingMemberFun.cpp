#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string fname, lname;                 // Declare variables
    ofstream fin;
    fin.open("Bhoomika");                // Create file using member function or open file to write in it
    cout << "Enter your first name : ";
    cin >> fname;
    cout << "Enter your last name : ";
    cin >> lname;
    fin << fname << " " << lname << endl; // Write in File 
    fin.close();                          // Close file

    string name1, name2;                  // Declare variables
    ifstream fout;
    fout.open("Bhoomika");                // Open file for read from it
    fout >> name1 >> name2;               // Read from file
    cout << name1 << " " << name2;      
    fout.close();                         // Close file
    return 0;
}