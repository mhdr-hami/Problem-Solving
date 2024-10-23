//
// Created by Mohammadreza Hami on 2024-10-23.
//

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target+1, 0);
        dp[0] = 1;
        sort(nums.begin(), nums.end());

        for(int i=1; i<=target; i++){
            for(int j=0; j<nums.size(); j++){
                if(nums[j] <= i)
                    dp[i] += dp[i-nums[j]];
                else
                    break;
            }
        }
        
        return dp[target];
    }
};