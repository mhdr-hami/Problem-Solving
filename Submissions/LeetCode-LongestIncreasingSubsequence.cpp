//
// Created by Mohammadreza Hami on 2024-05-16.
//

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        dp[0] = 1;
        int globalMax = dp[0];
        for(int i=1; i<nums.size(); i++){
            dp[i]=1;
            for(int j=i-1; j>=0; j--)
                if(nums[j] < nums[i] && (dp[j] + 1) > dp[i]) {
                    dp[i] = dp[j] + 1;
                }
            globalMax = max(globalMax, dp[i]);
        }
        return globalMax;
    }
};