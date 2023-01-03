class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max = 1;
        int curr = 1;
        int ans = nums[0];
        // int temp = nums[0];
        for (int i =1; i<nums.size(); i++){
            if(nums[i] == nums[i-1])
            {
                curr++;  
            }
            else
            {
                curr=1;
            }
            if(curr>max)
            {
                max = curr;
                ans = nums[i];  
            }
        }
        if(max > nums.size()/2){
            return ans;
        }
        return 0;
    }
};