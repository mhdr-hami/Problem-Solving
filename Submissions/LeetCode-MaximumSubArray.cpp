//
// Created by Mohammadreza Hami on 2024-04-28.
//

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int * dp = new int [nums.size()];
        int global=nums[0];

        dp[0] = nums[0];
        for(int i=1; i<nums.size(); i++) {
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
            global = max(dp[i], global);
        }

        return global;
    }
};