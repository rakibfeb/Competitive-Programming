class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 1) return n;
        int j =1;
        int i = 0;
        int temp = n;
        while(j<n)
        {
            if(nums[i] == nums[j])
            {
                j++;
                temp--;
            }
            else
            {
                i++;
                swap(nums[i],nums[j]);
                j++;
                
            }
        }
        return temp;
    }
};