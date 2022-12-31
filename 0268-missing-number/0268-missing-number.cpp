class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int index_sum = 0;
        int here_sum = 0;
        int n = nums.size();
        for (int i = 0; i < n ; i++){
            
            index_sum = index_sum + i;
            here_sum = here_sum + nums[i];
        }
        int temp = here_sum - index_sum;
        return n-temp;
    }
};