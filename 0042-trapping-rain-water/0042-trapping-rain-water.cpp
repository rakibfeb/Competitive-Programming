class Solution {
public:
    int trap(vector<int>& height) {
    long long res = 0;
    int lMax = 0, rMax = 0, l = 0, r = height.size()-1;
    while(l <= r) {
        if(height[l] <= height[r]) {
            if(height[l] > lMax) lMax = height[l];
            else res += lMax - height[l];
            l++;
        } else {
            if(height[r] > rMax) rMax = height[r];
            else res += rMax - height[r];
            r--;
        }
    }
    return res;
    }
};