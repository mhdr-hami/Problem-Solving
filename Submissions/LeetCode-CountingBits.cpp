//
// Created by Mohammadreza Hami on 2024-05-06.
//

class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> dp(n+1, 0);
        if(n<=0) return dp;
        int maxPower = 0;
        for(int i=1 ; i<=n; i++){
            if((i&(i-1))==0){
                dp[i]= 1;
                maxPower=i;
            }
            else dp[i] = dp[i-maxPower]+1;
        }
        return dp;
    }
};