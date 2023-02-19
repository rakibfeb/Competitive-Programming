//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToInfix(string pre_exp) {
        stack<string> stk;
        int size = pre_exp.length();
        
        for(int i = size-1; i >= 0; i--){
            if (pre_exp[i] >= 'a' && pre_exp[i]<='z' || pre_exp[i]>='A' && pre_exp[i] <= 'Z'){
                string tmp (1, pre_exp[i]);
                // string s(1, pre_exp[i]);
                stk.push(tmp);
            }
            else{
                string tmp;
                tmp += '(';
                tmp += stk.top();
                stk.pop();
                tmp += pre_exp[i];
                tmp += stk.top();
                stk.pop();
                tmp += ')';
                stk.push(tmp);
            }
        }
        
      return stk.top();
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends