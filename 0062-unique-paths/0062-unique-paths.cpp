// class Solution {
// public:
//     int solve(int i, int j, int n, int m){
        
//         if(i>=n || j>=m) return 0;
//         if(i==n-1 && j==m-1) return 1;
        
//         return solve(i,j+1,n,m)+solve(i+1,j,n,m);
//     }
//     int uniquePaths(int n, int m) {
        
//         int i=0,j=0;
        
//         return solve(i,j,n,m);
//     }
// };

class Solution {
public:
    int uniquePaths(int n, int m) {
        vector<vector<int>>dp(n,vector<int>(m,0));
        
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(i==n-1 | j==m-1){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=dp[i+1][j]+dp[i][j+1];
                }
            }
        }
        
        return dp[0][0];
    }
};