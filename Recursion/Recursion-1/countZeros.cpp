/*Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
Sample Input 1 :
0
Sample Output 1 :
1
Sample Input 2 :
00010204
Sample Output 2 :
2
*/
#include<iostream>

using namespace std;

int countZeros(int n, int count){
    // Write your code here
    if(n <= 0)
        return 0;
    else if(n%10 == 0)
        count++;
    int smallcal = countZeros(n/10, count);
        return smallcal;
}
int main(){
    int n, count=0;
    cin >> n;
  
    cout << countZeros(n, count) << endl;
}