class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        int p = 0;
        int n = 0;
        int f = 1;
        while(ans.size() != size)
        {
            if(f==1)
            {
                if(nums[p] >= 0) {
                    ans.push_back(nums[p]);
                    f = 0;
                }
                    p++;
            }
            
            if( f == 0) {
                if(nums[n] < 0){
                    ans.push_back(nums[n]);
                    f =1;
                }
                    n++;
            }
        }   
    return ans;
    }
};