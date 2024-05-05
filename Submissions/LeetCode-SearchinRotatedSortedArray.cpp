//
// Created by Mohammadreza Hami on 2024-05-04.
//

class Solution {
public:
    int search(vector<int>& nums, int target) {
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

        low=0, high=ans-1;
        if(ans==0) high = nums.size()-1;
        while (low<=high){
            int mid=(low+high)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                low = mid+1;
            else {
                high = mid - 1;
            }
        }

        low=ans, high=nums.size()-1;
        while (low<=high){
            int mid=(low+high)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                low = mid+1;
            else {
                high = mid - 1;
            }
        }
        return -1;
    }
};