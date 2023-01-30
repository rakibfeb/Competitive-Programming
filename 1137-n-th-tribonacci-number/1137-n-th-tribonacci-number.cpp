class Solution {
public:
    int tribonacci(int n) {
        vector<int>temp={0,1,1};
        for(int i=3;i<n+1;++i){
           temp.push_back(temp[i-1]+temp[i-2]+temp[i-3]);
        }
        return temp[n];
    }
};