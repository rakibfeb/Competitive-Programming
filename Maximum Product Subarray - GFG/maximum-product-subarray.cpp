//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    
	   long long int prod= INT_MIN;
	   long long int curr_prod=1;
	    
	    for(int i =0 ; i<n; i++){
	        if(curr_prod == 0){
	            // 0 chole asar por curr_prod jokhon multiply hoye 0 hoye jay 
	            curr_prod = 1;
	        }
	        curr_prod = curr_prod*arr[i];
	        prod = max(prod,curr_prod);
	    }
	    
	    
	    /* {-6, 3, 10, 0, 2} input er shurute negetive integer thakle r tapore 
	    jodi kono negetive integer na thake tobe se khetre wrong and asbe 
	    tay loop akbar sesh thekeo chalate hobe */
	    curr_prod = 1;
	    for(int i =n-1 ; i>0; i--){
	        if(curr_prod == 0){
	            curr_prod = 1;
	        }
	        curr_prod = curr_prod*arr[i];
	        prod = max(prod,curr_prod);
	    }
	    return prod;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends