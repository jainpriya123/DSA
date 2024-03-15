class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        vector<int>pre;
        vector<int>suff;
        vector<int>ans;
        int n=arr.size();
        
        pre.push_back(100);
        int prod= 1;
        for(int i=1;i<n;i++){
            prod= arr[i-1]*prod;
            pre.push_back(prod);
        }
        prod=1;
        suff.push_back(100);
        for(int i=n-2;i>=0;i--){
            prod=arr[i+1]*prod;
            suff.push_back(prod);
        }
        
        reverse(suff.begin(),suff.end());
        
        for(int i=0;i<n;i++){
            if(i==0){
                ans.push_back(suff[0]);
            }
            else if(i==n-1){
                ans.push_back(pre[n-1]);
            }
            else{
                ans.push_back(pre[i]*suff[i]);
            }
        }
        
        return ans;
    }
};