class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> m;
        for (int i = 0; i < (int)nums.size(); i++) {
		    // checking if target - nums[i] already exists in the map
            if (m.count(target - nums[i])) {
                return {i, m[target - nums[i]]};
            }
			// if it does not, then just update the map with the current element
            m[nums[i]] = i;
        }
        
		/* This is just to avoid the compiler warning of not returning anything
		    from a function with a return type of vector<int>
		*/
        return {};
    }
};