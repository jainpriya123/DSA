class Solution {
public:
    // void solve(vector<int>& a, int n, int l,vector<vector<int>>&ans){
    //     if(l==n){
    //         ans.push_back(a);
    //         return;
    //     }
    //     for(int i=l;i<n;i++){
    //         swap(a[l],a[i]);
    //         solve(a,n,l+1,ans);
    //         swap(a[l],a[i]);
    //     }
    // }
    
    void solve(vector<int>& arr, int n, int j, vector<vector<int>>&ans){
        if(j==n){
            ans.push_back(arr);
            return;
        }
        
        for(int i=j;i<n;i++){
            swap(arr[i],arr[j]);
            solve(arr,n,j+1,ans);
            swap(arr[i],arr[j]);
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& a) {
       vector<vector<int>>ans;
        solve(a,a.size(),0,ans);
        return ans;
    }
    
};