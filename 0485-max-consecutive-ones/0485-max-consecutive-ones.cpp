class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int con = 0;
        int curr_con = 0;
        for(int i = 0; i < nums.size(); i++){

            if (nums[i] == 1){
                curr_con++; 
                if (curr_con > con){
                    con = curr_con;
                 }
            }
            else {
                curr_con = 0;
            }
        }
        return con;
    }
};