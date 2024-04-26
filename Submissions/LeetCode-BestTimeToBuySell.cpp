//
// Created by Mohammadreza Hami on 2024-04-26.
//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn_index=0,curr=0,profit=0;
        while (curr< prices.size())
        {
            if(prices[curr] < prices[mn_index])
            {
                mn_index=curr;
            }
            profit = max(profit, prices[curr]-prices[mn_index]);
            curr+=1;
        }
        return profit;
    }
};