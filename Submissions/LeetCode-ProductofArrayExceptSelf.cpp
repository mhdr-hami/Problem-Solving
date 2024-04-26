//
// Created by Mohammadreza Hami on 2024-04-26.
//

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        vector<int> ans;
        int length = nums.size();
        int * pre = new int [length];
        int * aft = new int [length];

        pre[0] = 1;
        aft[length-1] = 1;

        for(int i=1; i<length-1; i++)
            pre[i] = nums[i-1] * pre[i-1];
        for(int i=length-2; i>=0; i--)
            aft[i] = nums[i+1] * aft[i+1];
        for(int i=0; i<length; i++)
            ans.push_back(pre[i]*aft[i]);

        return ans;
    }
};