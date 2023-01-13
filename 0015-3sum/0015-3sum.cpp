class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        
        for(int i = 0 ; i<n-2 ; i++){
            int low = i+1;
            int high = n-1;
            int remain = 0-nums[i];
            if (i == 0 || (i > 0 && nums[i] != nums[i-1]))
            {
                while(low < high)
                {
                    if(nums[low] + nums[high] == remain)
                    {
                        while(low < high && nums [low] == nums[low+1]) low++;
                        while(low < high && nums [high] == nums[high-1]) high--;
                    
                        ans.push_back({nums[i],nums[low],nums[high]});

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