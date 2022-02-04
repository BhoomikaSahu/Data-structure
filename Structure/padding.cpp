#include <iostream>
using namespace std;

struct student
{   
    //short int name2; 
    
    double marks;
    int enroll;
    char name;
};


int main(){
   student s1;
   
   cout << sizeof(s1.name) << endl;
   //cout << sizeof(s1.name2) << endl;
   cout << sizeof(s1.enroll) << endl;
   cout << sizeof(s1.marks) << endl; 
   cout << sizeof(s1);

     
    return 0;
}