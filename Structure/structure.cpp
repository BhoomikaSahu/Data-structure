#include <iostream>
using namespace std;

struct student
{
    string name;
    int enroll=10;
    float cgpa;

    int sum(int a, int b){
        return a+b;
    }
};

typedef struct faculty
{
    string name;
    int subCode;
    float salary;
}fc;


int main(){
    int n;
    cout << "Enter number of students : ";
    cin >> n; 
    student s[n];               // Declare a variable of student datatype Without typedef
    fc f[n];                    // Declare a variable of faculty datatype Using typedef
    student s1;
    cout << s1.enroll;
    cout << s1.sum(2,4);
    
    // for(int i=0; i<n; i++){
    //     cout << i+1 << ". " << "Name : ";
    //     cin >> s[i].name;
    //     cout << "   " << "Enrolment no. : ";
    //     cin >> s[i].enroll;
    //     cout << "   " << "CGPA : ";
    //     cin >> s[i].cgpa;
    // }
    // for(int i=0; i<n; i++){
    //     cout << i+1 << ". " << "Name : " << s[i].name << endl;
    //     cout << "   " << "Enrolment no. : " << s[i].enroll << endl;
    //     cout << "   " << "CGPA : " << s[i].cgpa << endl;
    // }  
    return 0;
}