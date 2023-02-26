class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map <int,int> umap;
        stack<int> s;

        
        for(int  i = n-1; i>=0; i--){
            int ele = nums2[i];
                while(!s.empty() && s.top() <= ele){
                    s.pop();
                }
                if(s.empty()){
                    umap.insert({ele,-1});
                    s.push(ele);
                           
                } 
                else{
                    umap.insert({ele,s.top()});
                    s.push(ele);
                }
            }
        vector<int> ans;
        for(auto x:nums1){
            ans.push_back(umap[x]);
        }
        return ans;
    }                                            
};