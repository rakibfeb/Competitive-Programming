class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort (intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        
        int minStart = intervals[0][0];
        int maxEnd = intervals[0][1];
        int i=1;
        for( i =1; i<intervals.size(); i++)
        {
            if(intervals[i][0] > maxEnd)
            {
                ans.push_back({minStart,maxEnd});
                minStart = INT_MAX;
                maxEnd = INT_MIN;
            }
            if(intervals[i][0] < minStart )
            {
                minStart = intervals[i][0];
            }
            if(intervals[i][1] > maxEnd)
            {
                maxEnd =intervals[i][1];
            }
        }
        ans.push_back({minStart,maxEnd});
        
     return ans;   
    }
};