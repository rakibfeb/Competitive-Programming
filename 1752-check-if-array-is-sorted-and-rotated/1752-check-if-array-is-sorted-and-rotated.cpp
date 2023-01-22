class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size()<1) return true;
        int brk =0;
        for(int i = 1; i< nums.size();i++)
        {
            if(nums[i]< nums[i-1])
            {
                if(brk != 0) return false;
                brk = i;
            }
        }
        
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end()-brk);
        reverse(nums.end()-brk , nums.end());
        
        for(int i = 1; i<nums.size();i++)
        {
            if(nums[i] < nums[i-1])
            {
                return false;
            }
        }
        return true;
    }
};