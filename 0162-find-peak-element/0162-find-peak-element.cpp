class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0; 
        int end = nums.size()-1;
        if(nums.size()<2) return 0;
        while(start <= end )
        {
            int mid = start + (end -start)/2;
            
            if( mid > 0 and mid <nums.size()-1)
            {
                if(nums[mid] > nums[mid-1] and nums[mid] > nums[mid+1])
                {
                    return mid;
                }
                else if (nums[mid-1] > nums[mid])
                {
                    end =  mid -1;
                }
                else 
                {
                    start = mid+1;
                }
            }
            
            if(mid==0)
            {
                if(nums[mid] > nums[mid+1])
                {
                    return mid;
                }
                else 
                {
                    return 1;
                }
            }
            
            if(mid == nums.size()-1)
            {
               if (nums[mid] > nums[mid-1])
               {
                   return nums.size()-1;
               }
                else 
                {
                    return nums.size()-2;
                }
            }
        }
        return 0;
    }
};