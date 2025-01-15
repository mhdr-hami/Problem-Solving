//
// Created by Mohammadreza Hami on 2025-01-15.
//

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
    int size1=text1.size(), size2=text2.size();
    int dp[size1+1][size2+1];
    // vector<vector<int> > dp(size1+1, vector<int>(size2+1, 0));
    for(int i=0; i<=size1; i++){
        for(int j=0; j<=size2; j++){
            if(i==0 || j==0)
                dp[i][j] = 0;
            else if(text1[i-1]==text2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[size1][size2];
    }
};
