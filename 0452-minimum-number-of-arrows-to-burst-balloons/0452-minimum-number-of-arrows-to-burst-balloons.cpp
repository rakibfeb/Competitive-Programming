class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int arrow = 1;
        int e = points[0][1];
        for( auto x:points)
        {
            e = min (e,x[1]);

            if(x[0] <= e && e <= x[1])
            {
                continue;
            }
            else
            {
                e = x[1];
                arrow++;
            }
        }
return arrow;
    }
};