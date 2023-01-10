class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> set;
        
        for(int i = 0; i<n; i++)
        {
            set.insert(nums[i]);
        }
        
        // check is it the starting index of the sequence or not
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(set.find(nums[i]-1) != set.end())
            {
                // if you got a number less than 1 of the ith numberthen, we dont need to do anything. if ith number is 4 and we got number 3 inside the set then we dont need to do anything beacuse when we will reached to the 3 we will be able to count 4 
                continue;
            }
            // else will exicute when we dont get a number less than 1 of the ith number 
            else
            {
                int count =0;
                int curr = nums[i];  // suppose ith number is 3 ,curr = 3
                // find till the end that 3 is present in the set 
                // if present increse the count 0 to 1 
                // then increse the curr from 3 to 4 and find again 4 is present or not and continue the process till the end
                while(set.find(curr) != set.end())
                {
                    count++;
                    curr = curr+1;
                }
                // update the ans 
                 ans = max(ans,count);
            }
        }
        return ans;
    }
};