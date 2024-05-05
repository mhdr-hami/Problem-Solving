//
// Created by Mohammadreza Hami on 2024-05-04.
//

class Solution {
public:
    int maxProduct(vector<int>& nums) {

        vector < pair<int,int> > dp;
        dp.reserve(nums.size());
        dp[0].first = nums[0];
        dp[0].second = nums[0];
        int global = nums[0];

        for(int i=1; i<nums.size(); i++){
            dp[i].first = max(nums[i], max(nums[i]*dp[i-1].first, nums[i]*dp[i-1].second));
            dp[i].second = min(nums[i], min(nums[i]*dp[i-1].first, nums[i]*dp[i-1].second));
            global = max(global, max(dp[i].first, dp[i].second));
        }

        return global;
    }
};