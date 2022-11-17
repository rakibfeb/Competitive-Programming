class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if(n == 1) return 1;
        // create a vector size of n and assign all the index as 1 
        vector<int> candies(n,1);
        // loop from left to right 
        for(int i = 1; i<n ; i++){         
            /*chack ratings[i] is grester than ratings [i-1] if yes, then check candies[i]             is less than candies[i-1] if yes, increase the current index by 1 because we               need the minimum */ 
            if(ratings[i] > ratings[i-1] && candies[i] <= candies[i-1]){
                // candies of i will be candies of [i-1]+1 
                // candies[i-1] means previous index of i
                candies[i] = candies[i-1]+1;
            }
        }
        // loop from right to left        
        for(int i = n-2; i>=0; i--){
            /*chack ratings[i] is grester than ratings [i+1] if yes, then check candies[i]             is less than candies[i+1] if yes, increase the current index by 1 because we               need the minimum */             
            if(ratings[i] > ratings[i+1] && candies[i] <= candies[i+1]){
                candies[i] = candies[i+1]+1;
            }
        }
        int totalCandies = 0;
        for (int i =0 ; i< candies.size(); i++){
            totalCandies += candies[i] ;
        }
        return totalCandies;
    }
};