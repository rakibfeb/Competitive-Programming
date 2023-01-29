class Solution {
public:
    int mySqrt(int x) {
        int s =0,  e = x,ans;
        
        while(s<=e)
        {
            long long  mid = s+(e-s)/2;
            if(mid*mid == x) return mid;
            
            else if(mid*mid < x) // it can be the answer so, store it
            {
                s = mid+1;
                ans = mid;
            }
            else {
                e = mid-1;
            }
        }
        return ans;
    }
};