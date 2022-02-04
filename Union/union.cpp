#include <iostream>
using namespace std;

typedef union money{
    int rice;
    float pound;
    double rupees;
    char car;
}mon;


int main(){
    mon m1;
    //m1.rice = 199;
    //m1.pound = 23.32f;
    m1.rupees = 332.23232;
    //m1.car = 'g';

    mon m2;
    m2.car = 'q';
    
    cout << sizeof(m1.rupees) << endl;
    cout << sizeof(m2.car);
    return 0;
}