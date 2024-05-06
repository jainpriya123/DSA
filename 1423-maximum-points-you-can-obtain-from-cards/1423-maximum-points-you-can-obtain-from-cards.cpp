class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n=arr.size();
        int sum=0;
        int ans=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        ans=max(ans,sum);
        
        for(int i= k-1;i>=0;i--){
            sum-=arr[i];
            sum+=arr[n-k+i];
            ans=max(ans,sum);
        }
        
        return ans;
        
    }
};