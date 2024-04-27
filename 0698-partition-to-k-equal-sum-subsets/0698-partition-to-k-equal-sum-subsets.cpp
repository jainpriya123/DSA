class Solution {
public:
    bool solve(vector<int>& arr, int j, int k, vector<int>& vis,int currsum, int sum){
        if(k==0) return true;
        if(currsum>sum){
            return false;
        }
        if(sum==currsum){
            return solve(arr, 0, k-1, vis,0, sum);
        }
        
        for(int i=j;i<arr.size();i++){
            if(vis[i]==0){
                vis[i]=1;
                if(solve(arr, i+1, k, vis,currsum+arr[i], sum)) return true;
                vis[i]=0;
            }
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& arr, int k) {
        int sum=0;
        for(auto x:arr){
            sum+=x;
        }
        if(sum%k!=0) return false;
        
        sum=sum/k;
        vector<int>vis(arr.size(),0);
        return solve(arr, 0, k, vis,0, sum); 
        
    }
};