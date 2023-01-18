class Solution {
public:
int maxSubarraySumCircular(vector<int>& nums) {
    int total_sum = 0, max_sum = INT_MIN, cur_max = 0,min_sum = INT_MAX, cur_min = 0;
    for (int num : nums) {
        cur_max = max(num, cur_max + num);
        max_sum = max(max_sum, cur_max);
        cur_min = min(num, cur_min + num);
        min_sum = min(min_sum, cur_min);
        total_sum += num;
    }
    return max_sum > 0 ? max(max_sum, total_sum - min_sum) : max_sum;
}

};