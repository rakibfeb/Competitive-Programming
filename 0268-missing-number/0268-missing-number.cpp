class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int index_sum = 0;
        int here_sum = 0;
        int n = nums.size();
        for (int i = 0; i < n ; i++){
            
            index_sum = index_sum + i+1;
            here_sum = here_sum + nums[i];
        }
        
        return  index_sum-here_sum;
    }
};