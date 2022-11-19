class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0, i=0, start=0, len=INT_MAX, size = nums.size();
        // if(size == 1){
        //     return 1;
        // }
        while(i<size){
            sum+=nums[i];
            if(sum >= target){
                while(start < i){
                    if(sum-nums[start] >= target){
                        sum -= nums[start];
                        start++;
                    }
                    else{
                        break;
                    }
                }
                len = min(len,i-start+1);
            }
            i++;
        }
        if(len == INT_MAX) return 0;
        return len;
    }
};