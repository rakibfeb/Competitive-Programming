//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int start = 1;
	    int end = n-2;
	    
	    if (arr[0] < arr[n-1]) return 0;
	    if(arr[n-1] < arr[n-2] && arr[n-2]< arr[0]) return n;
	    if(arr[n-1] < arr[n-2] ) return n-1;
	    
	    
	    while(start <= end)
	    {
	        int mid = start+ (end-start)/2;
	        if (arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1])
	        {
	            return mid;
	        }
	        if(arr[end] > arr[mid])
	        {
	            end = mid-1;
	        }
	        else
	        {
	            start = mid+1;
	        }
	    }
	    return 0;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends