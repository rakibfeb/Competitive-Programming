//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToPre(string post_exp) {
    
        stack<string>stk;
        int length = post_exp.length();
        for(int i = 0; i < length; i++){
            if(post_exp[i] >= 'a' and post_exp[i] <= 'z' or post_exp[i] >= 'A' and post_exp[i]<='Z'){
                string tmp(1,post_exp[i]);
                stk.push(tmp);
            }
            else{
                string tmp;
                tmp += post_exp[i];
                string t = stk.top();
                stk.pop();
                tmp += stk.top();
                stk.pop();
                tmp += t;
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
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends