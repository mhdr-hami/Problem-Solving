//
// Created by Mohammadreza Hami on 2024-05-04.
//

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0, high=nums.size()-1, ans=0;
        while (low<=high){
            int mid=(low+high)/2;
            if(nums[mid] >= nums[0])
                low = mid+1;
            else {
                high = mid - 1;
                ans = mid;
            }
        }
        return nums[ans];
    }
};