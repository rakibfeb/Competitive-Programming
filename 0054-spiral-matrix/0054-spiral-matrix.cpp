class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0, right = n-1, top = 0, buttom = m-1;
        vector<int> ans;
        while(left <= right && top <= buttom){
            // left --> right
            // top fixed
            for(int i = left; i<=right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            // top --> buttom
            // right fixed
            if(top > buttom){
                break;
            }
            for(int i = top; i<= buttom ; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            // right --> left
            // buttom fixed
            if(right < left) break;
            for(int i = right ; i >= left ; i--){
                ans.push_back(matrix[buttom][i]);
            }
            buttom --;
            // buttom --> top
            for(int i = buttom ; i >= top ; i--){
                ans.push_back(matrix[i][left]);
            }
            
            left ++;
        }
        return ans;
    }
};