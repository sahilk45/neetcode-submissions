class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            // int diff=prices[i]-mini;
            // profit=max(profit,diff);
            // mini=min(mini,prices[i]);
            if(prices[i]-mini>profit){
                profit=prices[i]-mini;
            }
            if(prices[i]<mini){
                mini=prices[i];
            }
        }
        return profit;
    }
};
