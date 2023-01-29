class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = INT_MIN;
        for(auto x : piles){
            high = max(high,x);
        }
        int val = 0;
        while(low<=high)
        {
            long long val = 0;
            int mid = low+(high-low)/2;
            for(auto x : piles){
                val+= (x+(mid-1))/mid;
            }
            if(val <= h) high = mid-1;
            else  low = mid+1;
        }
        return low;
    }
};