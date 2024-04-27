class Solution {
public:
    void solve(int k, int n, int j, vector<int>temp, vector<vector<int>>&ans)
    {
        if(n<0) return;
        
        if(k==0 && n==0){
            ans.push_back(temp);
            return;
        }
        
        for(int i=j;i<=9;i++){
            temp.push_back(i);
            solve(k-1,n-i,i+1,temp,ans);
            temp.pop_back();
        }
        
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        
        solve(k,n,1,temp,ans);
        
        return ans;
    }
};