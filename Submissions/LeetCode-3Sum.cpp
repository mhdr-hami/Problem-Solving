//
// Created by Mohammadreza Hami on 2024-05-06.
//

class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector< vector<int> > ans;
        set< vector<int> > s;
        int pointer1, pointer2;
        for(int i=0; i<nums.size()-1; i++){
            pointer1 = i+1;
            pointer2 = int(nums.size())-1;
            while (pointer1 < pointer2){
                if(nums[i] + nums[pointer1] + nums[pointer2] > 0)
                    pointer2 -=1;
                else if(nums[i] + nums[pointer1] + nums[pointer2] < 0)
                    pointer1 +=1;
                else if(nums[i] + nums[pointer1] + nums[pointer2] == 0){
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[pointer1]);
                    tmp.push_back(nums[pointer2]);
                    s.insert(tmp);
                    pointer1 += 1;
                    pointer2 -= 1;
                }
            }
        }
        for(auto v:s)
            ans.push_back(v);
        return ans;
    }
};