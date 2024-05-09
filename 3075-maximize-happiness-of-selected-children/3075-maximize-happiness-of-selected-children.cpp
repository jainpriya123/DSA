class Solution {
public:
    long long maximumHappinessSum(vector<int>& arr, int k) {
        int n=arr.size();
        int i=n-1;
        long long ans=0;
        int k1=k;
        sort(arr.begin(),arr.end());
        
        while(i>=0 && k--){
            // cout<<k+1<<"  "<<i<<endl;
            ans+= max(arr[i]-(k1-k-1),0);
            i--;
        }
        
        return ans;
    }
};