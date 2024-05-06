//
// Created by Mohammadreza Hami on 2024-05-06.
//

class Solution {
public:
    int getSum(int a, int b) {
        return b==0? a:getSum(a^b, (a&b)<<1);
    }
};