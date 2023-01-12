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
            
            // for this taste case [[1,2,3,4],[5,6,7,8],[9,10,11,12]] output will be [1,2,3,4,8,12,11,10,9,5,6,7] but with out this if the ouput is [1,2,3,4,8,12,11,10,9,5,6,7,6]
            if(top > buttom) break;
            
            // top --> buttom
            // right fixed
            for(int i = top; i<= buttom ; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            //for this taste case [[7],[9],[6]] output will be [7,9,6] but without this if the output is [7,9,6,9]
            
            if(right < left) break;
            
            // right --> left
            // buttom fixed
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