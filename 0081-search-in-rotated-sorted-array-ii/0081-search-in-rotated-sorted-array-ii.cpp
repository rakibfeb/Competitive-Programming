class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int min_index = 0;
        for(int i = 1 ; i<n; i++){
             if(nums[i] < nums[i-1])
             {
                 if(i>1)
                 {
                    if(nums[i-1] < nums[i-2])
                     {
                        min_index = i+1;
                     }
                    else
                    {
                        min_index = i;
                    }                     

                 }
                 else {
                     min_index = i;
                 }

             }


                     
        }
        
        cout<<min_index<<endl;
        int start =0,end=n-1;
        if(min_index == 0)
        {
            start = 0;
            end = n-1;
        }
        else if (target >= nums[0])
        {
            start = 0;
            end = min_index-1;
        }
        else 
        {
            start = min_index;
            end = n-1;
        }
        // cout<<"start: "<<start<<endl;
        // cout<<"end: "<<end<< endl;
        
        while (start <= end )
        {
            int mid =  start+(end-start)/2;
            
            if(target == nums[mid])
            {
                return true;
            }
                
            else if (target > nums[mid])
            {
                 start = mid+1;
            }
               
            else
            {
                end = mid-1;
            }
                
        }
        return false;
    }
};