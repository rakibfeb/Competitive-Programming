class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int start = 1, end = m-1;
        while(start <= end && m > 1){
            int mid = start + (end-start)/2;
            if(target <= matrix[mid][n-1] && matrix[mid-1][n-1] < target){
                row = mid;
                break;
            }
            else if(matrix[mid][n-1] < target ){
                start = mid+1;
            }
            else{
                end =mid-1;
            }
        }
        
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