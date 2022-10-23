class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int less_buy = INT_MAX;
        int curr_prifit = 0;
        int max_profit = 0;

        for (int i = 0; i<prices.size();i++){
            if(prices[i] < less_buy){
                less_buy = prices[i];
            }
            curr_prifit = prices[i] - less_buy;

            if (curr_prifit > max_profit ){
                max_profit= curr_prifit;
            }
        }
        return max_profit;
    }
};