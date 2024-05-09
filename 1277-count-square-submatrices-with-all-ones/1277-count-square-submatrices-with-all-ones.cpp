class Solution {
public:
    int countSquares(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        
        vector<vector<int>>dp(n,vector<int>(m,0));
        int sum=0;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(arr[i][j]==1){
                    if(i==n-1 || j==m-1){
                     dp[i][j]=1;
                    }
                    else{
                        dp[i][j]= min({dp[i][j+1],dp[i+1][j+1],dp[i+1][j]})+1;
                    }
                }
                sum+=dp[i][j];
            }
        }
        
        return sum;
    }
};