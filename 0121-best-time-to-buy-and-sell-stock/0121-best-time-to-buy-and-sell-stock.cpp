class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int less_buy = INT_MAX;
        int max_profit = 0;
        int curr_profit = 0;
        
        for(int i = 0 ; i<prices.size();i++){
            if (prices[i]<less_buy){
                less_buy = prices[i];
            }
            curr_profit = prices[i]-less_buy;
            if (curr_profit > max_profit){
                max_profit = curr_profit;
            }
        }
        return max_profit;
    }
};