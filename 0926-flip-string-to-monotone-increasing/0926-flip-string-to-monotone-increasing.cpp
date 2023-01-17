class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int countFlip = 0;
        int countOne = 0;
        
        for( auto i:s)
        {
            if( i == '1')
            {
                countOne++;
            }
            else
            {
                countFlip++;
                countFlip = min(countFlip,countOne);
            }
        }
return countFlip;

    }
};