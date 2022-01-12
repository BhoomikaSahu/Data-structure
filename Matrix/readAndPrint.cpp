#include<iostream>
using namespace std;
void read(int r, int c, int arr[][100]){
    for(int i=0;i<r;i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }
    }
}
void print( int r, int c, int arr[][100]){
    for(int i=0;i<r;i++){
        for(int j=0; j<c; j++){
            cout << arr[i][j] << " ";
        }
    }
}
int main()
{
	int r,c;
	cout<<"Enter number of rows and columns: ";
	cin>> r >> c;
	int array[r][100] = {0};
	read(r, c, array);
    // cin >> array[2][2];
    // cin >> array[3][3];
    // cin >> array[0][3];
	print(r, c, array);
    return 0;
}