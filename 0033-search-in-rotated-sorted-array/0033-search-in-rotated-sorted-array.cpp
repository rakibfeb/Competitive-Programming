class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int min_index = 0;
        for(int i = 1 ; i<n; i++)
        {
            if(nums[i] < nums[min_index])
                min_index = i;            
        }

        
        int start = 0, end = n-1;
        if(min_index == 0 )
        {
            start = 0 ;
            end = n-1;
        }
        else if(target >= nums[0])
        {
            start = 0;
            end = min_index-1;
        }
       
        else
        {
            start = min_index;
            end = n-1;
        }
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            
            if( nums[mid ] == target) return mid;   
            
            if(target < nums[mid] )
            {
                
                end = mid-1;
            }
            else 
            {
                start = mid+1;
            }    
        }
        return -1;
    }
};