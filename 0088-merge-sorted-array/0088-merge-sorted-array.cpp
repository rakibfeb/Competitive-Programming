class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if( n == 0) return;
        int p = 0;
        int z = m;
        
        for(int i = 0; p < nums2.size(); i++)
        {

            if(nums2[p] < nums1[i])
            {
                nums1[z] = nums1[i];
                nums1[i] = nums2[p];
                reverse(nums1.begin()+i+1,nums1.begin()+z);
                reverse(nums1.begin()+i+1,nums1.begin()+z+1);
                z++;
                p++;
            }
            else if (nums1[i] == 0 && i >= z)
            {
                nums1[i] = nums2[p];
                p++;
            }
        }
    }
};