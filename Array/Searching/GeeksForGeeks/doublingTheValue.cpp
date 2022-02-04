// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    
    int search(long long arr[], int low, int high, long long key){
        int mid=0;
	    while( low <= high ) {
	        mid = (low + high)/2;
		    if( arr[mid] == key)
		    	return mid;
	    
		    else if( arr[mid] < key )
		        low = mid + 1;
	    
		    else
		        high = mid-1;
	    
        }
	    return -1;
    }
    
    long long solve(int n, long long a[], long long b)
    {
        int index = 0;
        while(true){
            index = search(a, index, n-1, b);
             
            if(index == -1)
                break;
                
            else
                b = a[index]*2;
        }
        return b;
    }  
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, b; cin >> n >> b;
        long long int a[n];
    	for(int i = 0; i < n; ++i){
    		cin >> a[i];
    	}
    	
    	Solution ob;
    	long long ans = ob.solve(n,a,b*1LL);
    	cout << ans << endl;
    }
}  // } Driver Code Ends