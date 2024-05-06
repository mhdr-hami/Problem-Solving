//
// Created by Mohammadreza Hami on 2024-05-06.
//

class Solution {
public:
    int maxArea(vector<int>& height) {
        int pointer1=0, pointer2=height.size()-1;
        int globalMax=0;
        while (pointer1 < pointer2){
            int curr = (pointer2-pointer1) * min(height[pointer1], height[pointer2]);
            globalMax = max(globalMax, curr);
            if(height[pointer1] < height[pointer2])
                pointer1 += 1;
            else
                pointer2 -= 1;
        }
        return globalMax;
    }
};