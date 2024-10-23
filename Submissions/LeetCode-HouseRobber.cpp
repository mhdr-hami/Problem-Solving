//
// Created by Mohammadreza Hami on 2024-10-23.
//

class Solution {
public:
    int rob(vector<int>& nums) {
        int length = nums.size();
        int dp[length];
        if(length==1) return nums[0];
        if(length==2) return max(nums[0], nums[1]);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i=2; i<length; i++)
            dp[i] = max(nums[i]+dp[i-2], dp[i-1]);

        return dp[length-1];
    }
};