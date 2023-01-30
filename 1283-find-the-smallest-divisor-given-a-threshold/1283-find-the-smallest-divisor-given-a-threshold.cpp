class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low =1;
        int high = INT_MAX;
        
        // for(auto x: nums){
        //     high=max(high,x);
        // }
        
//                   if(sum>threshold){
//                 l=mid+1;
//             } else{
//                 ans=mid;
//                 r=mid-1;  
        
        
      
        int sum=0;
        int ans=0;
        while(low<=high){
            long long  mid=low+(high-low)/2;
            sum=0;
            for(auto x: nums) sum += (x+(mid-1))/mid;
              // for(int i=0;i<nums.size();i++){
              //   if(nums[i]%mid==0){
              //       sum+=(nums[i]/mid);
              //   }else{
              //       sum+=(nums[i]/mid)+1;
              //   }
              // }   
            if(sum > threshold){
                
                low = mid+1;
            } 
            else{
                ans = mid;
                high = mid-1; 
            } 
        }
        return ans;
    }
};