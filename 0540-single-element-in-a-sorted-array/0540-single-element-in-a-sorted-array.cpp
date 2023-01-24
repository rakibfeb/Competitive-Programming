class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start = 1, end = n-2;
        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        
        while(start <= end)
        {
            int mid = start+(end-start)/2;
            if(nums[mid] == nums[mid+1])
                mid = mid+1;
            
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1])
                return nums[mid];
            else if (mid%2 == 0)
                end = mid-1;
            else
                start = mid+1;
        }
        return 0;
    }
};