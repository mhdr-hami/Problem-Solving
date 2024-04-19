//
// Created by Mohammadreza Hami on 2024-04-18.
//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <pair<int, int> > piv;
        for(int i=0; i<nums.size(); i++) piv.push_back(make_pair(nums[i], i));
        sort(piv.begin(), piv.end());
        int begin=0, end=nums.size()-1;
        while(piv[begin].first + piv[end].first != target)
        {
            if (piv[begin].first + piv[end].first < target) {
                begin += 1;
            }
            else if(piv[begin].first + piv[end].first > target) {
                end -= 1;
            }
        }

        vector <int> answer;
        answer.push_back(piv[begin].second);
        answer.push_back(piv[end].second);
        return answer;
    }
};