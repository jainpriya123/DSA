class Solution {
public:
    int solve(vector<int>& arr, int num, int n, vector<vector<int>>&dp){
        
        if(n==0) return INT_MAX-1;
        if(num==0){
            return dp[n][num]= 0;
        } 
        if(n==1){
            if(num%arr[0]==0){
                return dp[n][num]= num/arr[0];
            } 
            return dp[n][num]= INT_MAX-1;
        }
             
        if(dp[n][num]!=-1) return dp[n][num];
        
        
         if(arr[n-1]<=num){
             
          // dp[n][num]= min(solve(arr, num-arr[n-1], n,dp),solve(arr, num, n-1,dp));
            // return dp[n][num]==INT_MAX? INT_MAX:dp[n][num]+1;
          return dp[n][num]= min(1+solve(arr, num-arr[n-1], n ,dp), solve(arr, num, n-1,dp));
        }
        else{
            return dp[n][num]= solve(arr, num, n-1,dp);
        } 
        
        return dp[n][num];
    }
    
    int coinChange(vector<int>& arr, int num) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<int>>dp(n+1,vector<int>(num+1,-1));
        
        int x= solve(arr,num,n, dp);
        if(x==INT_MAX || x==INT_MAX-1) return -1;
        return x;
    }
};