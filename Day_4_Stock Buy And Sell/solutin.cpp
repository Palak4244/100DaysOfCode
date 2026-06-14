class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size()<=1)
        {
            return 0;
        }
        int left=0;
        int right=1;
        int maxprofit=0;
        while(right<prices.size())
        {
            if(prices[right]<prices[left])
            {
                left = right;
            }
            else
            {
                int profit=prices[right]-prices[left];
                maxprofit = max(maxprofit,profit);
                
            }
            right ++;
        }
        return maxprofit;

    }

        


        
    
};
