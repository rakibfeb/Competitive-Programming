class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i = 0 ; i<n-3 ; i++)
        {
            // long long int for this test case 
            // [1000000000,1000000000,1000000000,1000000000]
            // -294967296
            long long int remain1 = nums[i]; 
             if (i > 0 &&  nums[i] == nums[i-1]) continue;
                 
            for (int j = i+1 ; j < n-2 ; j++)
            {
                if(j > i+1 && nums[j] == nums[j-1]) continue;
                int low = j+1;
                int high = n-1;
                long long int remain = target-(remain1 + nums[j]);
                while(low < high)
                    {
                        if(nums[low] + nums[high] == remain)
                        {
                            while(low < high && nums [low] == nums[low+1]) low++;
                            while(low < high && nums [high] == nums[high-1]) high--;
                    
                            ans.push_back({nums[i],nums[j],nums[low],nums[high]});

                            low++;
                            high--;
                        }
                        else if (nums[low] + nums[high] > remain)
                        {
                            high--;
                        }
                        else if (nums[low] + nums[high] < remain)
                        {
                            low++;
                        }
                    }
            }       
        }
        return ans;
    }
};