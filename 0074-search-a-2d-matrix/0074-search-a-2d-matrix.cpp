class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        // if(m ==1 and n ==1)
        // {
        //     if(matrix[0][0] == target) return true;
        //     else return false;
        // }
        int start = 1, end = m-1;
        if(matrix[0][n-1] > target) row = 0;
        while(start <= end && matrix[0][n-1] < target && m > 1)
        {
            int mid = start + (end-start)/2;
            cout<<matrix[mid][n-1]<<" and "<<matrix[mid-1][n-1]<<endl;
            if(target <= matrix[mid][n-1] && matrix[mid-1][n-1] < target)
            {
                row = mid;
              cout<<"row updated"<<endl;
                break;
            }
            
            else if(matrix[mid][n-1] < target )
            {
                start = mid+1;
            }
            else
            {
                end =mid-1;
            }
        }
        cout<<"row = "<<row<<endl;
        if(row == -1) return false;
        start = 0, end = n-1;
        
        while(start <= end)
        {
            int mid = start+(end-start)/2;
            if(matrix[row][mid] == target)return true;
            else if(target > matrix[row][mid] ){
                start = mid+1;
            }
            else{
                end =mid-1;
            }
        }
        return false;
    }
};