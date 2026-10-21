class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int BestBuy = prices[0];
        for(int i = 0 ; i<n; i++){
            if(prices[i]> BestBuy){
                maxProfit = max(maxProfit , prices[i]- BestBuy);
            }
            BestBuy = min(prices[i] , BestBuy);

        }
        return maxProfit;
        
    }
};