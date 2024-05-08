// class Solution {
// public:
//     bool canJump(vector<int>& a) {
//         int n=a.size();
//         vector<int>dp(n,0);
//         dp[n-1]=1;
        
//         for(int i=n-2;i>=0;i--){
//             if(a[i]>0){
//                 for(int j=i+1;j<=min(i+a[i],n-1);j++){
//                     if(dp[j]==1){
//                     dp[i]=1;
//                     break;
//                     }
//                 }   
//             }
//             else
//               dp[i]=0;
//         }
        
//         return dp[0];
//     }
// };

class Solution {
public:
    bool canJump(vector<int>& arr) {
        int n=arr.size();
        vector<int>v(n,0);
        
        if(n==1) 
            return true;
        
        for(int i=0;i<n;i++){
            if(i<n-1 && arr[i]==0 && v[i+1]==0) return false;
            for(int j=i+1;j<=min(i+arr[i],n-1);j++){
                if(v[j]==0){
                    v[j]=v[i]+1;
                }
                else{
                    v[j]=min(v[i]+1, v[j]);
                }
            }
            if(v[n-1]>0) return true;
        }
        return false;
    }
};