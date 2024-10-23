//
// Created by Mohammadreza Hami on 2024-10-22.
//

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int mx = 0, ssize=int(s.size());
        vector<bool> dp (ssize+1, false);
        dp[ssize] = true;
    
        for (string word : wordDict){
            if(word.size() > mx)
                mx = int(word.size());
        }
        mx  = min(mx, ssize);
        for(int i=ssize; i>=0; i--){
            for(int j=i+1; j<=i+mx; j++){
                string s1 = s.substr(i, j-i);
                if(find(wordDict.begin(), wordDict.end(), s1) != wordDict.end() && dp[j]){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[0];   
    }
};