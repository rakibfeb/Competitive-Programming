class Solution {
public:
    void combine(vector<int>& arr,int i, int t, vector<int>&tmp,vector<vector<int>>&ans){
          if (i== arr.size()) {
        if (t == 0) {
          ans.push_back(tmp);
        }
        return;
      }
    if(arr[i]<=t)  {
    tmp.push_back(arr[i]);
    combine(arr,i,t-arr[i],tmp,ans);
    tmp.pop_back();        
    }  
    combine(arr,i+1,t,tmp,ans);
}
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<int>tmp;
    vector<vector<int>> ans;    
    combine(candidates,0,target,tmp,ans); 
       return ans; 
    }     
};