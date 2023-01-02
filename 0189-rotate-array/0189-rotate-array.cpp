class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size(); // if we have [0,1] k = 3
       // [1,2,3,4,5,6,7]   k = 3
        reverse(nums.begin(),nums.end());
       // [7,6,5,4,3,2,1]   k = 3
        reverse(nums.begin(),nums.begin()+k);
      // [5,6,7,4,3,2,1]    k = 3 
        reverse(nums.begin()+k,nums.end());
      // [5,6,7,1,2,3,4]    k = 3              
    }
};