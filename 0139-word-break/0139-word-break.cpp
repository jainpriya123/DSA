class Solution {
public:
    
    // vector<vector<int>> dp( s.length() , vector<int> (s.length(),-1));
    int solve(string s, int i, int j, vector<string>& wordDict, vector<vector<int>>&dp){
        string temp= s.substr(i,j-i+1);
        
        if(j==s.length()-1){
            for(auto x:wordDict){
                if(temp==x){
                    return 1;
                }
            }
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        
        for(auto x: wordDict){
            if(temp==x){
                if(solve(s, j+1, j+1, wordDict, dp)){
                    return dp[i][j]= 1;
                }   
            }
        }
        return dp[i][j]= solve(s, i, j+1, wordDict, dp);
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<vector<int>>dp(s.length(), vector<int>(s.length(), -1));
        
        if(solve(s,0,0,wordDict, dp)==1) 
            return true;
        
        return false;
    }
};