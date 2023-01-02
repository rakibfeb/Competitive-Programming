class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        for(int i = 0; i<n; i++){
             // here we are doing xor operation. if we take xor of two same              number it will give ans as 0 and if we do xor of any different              number it will give 1 ;  00-> 0; 01->1; AA->0; A0->A;
            a = a^nums[i];   
            
        }
        return a;
    }
};