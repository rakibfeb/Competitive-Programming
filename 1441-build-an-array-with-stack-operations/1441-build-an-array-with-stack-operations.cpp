class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int t =1;
        int i = 0 ;
        while (t <= n && i<target.size()){
            
            ans.push_back("Push");
            if(target[i] != t) {
                ans.push_back("Pop");
                i--;
            }
            i++;
            t++;
        }
        return ans;
        }
};