    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int k = n-2; // [3,2,5,'4']

        // "null check" []
        if (n==0)return;

        // "find k" [3,2,5,4] -> k = 1 {1 is the index}
        for(int i = n-1; i>0; i--){
            
            // check if i < i11 then decrease the k by 1 [3,2,'5','4']
            //                                                i-1  i
            if (nums[i] <=nums[i-1]){
                k--;
            } 
            else{
                break;
            } 

        }


        // "check if k = -1 then simply reverse the element" [3,2,1] -> [1,2,3]
        if (k == -1){
           reverse(nums.begin(),nums.end());
            return;
        }

        // "else find the next greater element from the last and swap with k  every time untill it decending after k" [3,'2',5,'4']->[3,'4','5',2]->[3,4,2,5]
        
            for (int i = n-1; i > 0;i--){
                if (nums[i]>nums[k]){
                    swap(nums[i],nums[k]);
                    break;
                }
            }
            reverse(nums.begin()+k+1,nums.end());
    }