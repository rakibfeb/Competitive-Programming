class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int s =0;
        int e = n-1;
        int pos = 0;
        
        while(s<=e)
        {
            int m = s+(e-s)/2;
            if(nums[m] == target ) return m;
            
            if(nums[m] > target){
                if(nums[pos] >= nums[m]) pos = m;
                e = m-1; 
            } 
            
            if(nums[m] < target){
                if(nums[pos] <= nums[m]) pos = m+1;
                 s = m+1;
            }
        }
        return pos;
    }
};