//
// Created by Mohammadreza Hami on 2024-05-16.
//

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, -1);
        sort(coins.begin(), coins.end());
        dp[0] = 0;
        for(int i=1; i<=amount; i++){
            int minAmount = amount+1, minIndex=-1;
            for(int c=0; c<coins.size(); c++){
                if(coins[c] <= i){
                    if(dp[i-coins[c]] < minAmount && dp[i-coins[c]]!=-1){
                        minAmount = dp[i-coins[c]];
                        minIndex = i-coins[c];
                    }
                }
            }
            if(minAmount!=amount+1)
                dp[i] = dp[minIndex] + 1;
        }
        return dp[amount];
    }
};