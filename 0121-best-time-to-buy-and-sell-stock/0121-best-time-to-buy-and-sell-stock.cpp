class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = INT_MIN;
        int min_buy = INT_MAX;
        int curr_profit = INT_MIN;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i]<min_buy){
                min_buy = prices[i];
            }
            
            curr_profit = prices[i]-min_buy;
            
            if(curr_profit > max_profit){
                max_profit = curr_profit;
            }
        }
        return max_profit;
    }
};