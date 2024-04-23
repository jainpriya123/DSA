class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
       int n=arr.size();
        vector<int>ans(n);
        int prod=arr[0];
        ans[0]=1;
        for(int i=1;i<n;i++){
            ans[i]= prod;
            prod=prod*arr[i];
        }
        
       
        prod=arr[n-1];
        for(int i=n-2;i>=0;i--){
            ans[i]=ans[i]*prod;
            prod=prod*arr[i];
        }
        
        return ans;
    }
};