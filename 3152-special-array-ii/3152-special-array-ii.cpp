class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& arr, vector<vector<int>>& q) {
        int n=arr.size();
        
        vector<int>prefix(n,0);
        
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1];
            
            if(arr[i]%2==arr[i-1]%2){
                prefix[i]++;
            }
        }
        
        vector<bool>ans;
        for(int i=0;i<q.size();i++){
            int u= q[i][0];
            int v= q[i][1];
            
            if(prefix[v]-prefix[u]>=1){
                ans.push_back(false);
            }
            else{
                ans.push_back(true);
            }
        }
        
        return ans;
    }
};