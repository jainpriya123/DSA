class Solution {
public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> subs;
//         vector<int> sub;
//         subsets(nums, 0, sub, subs);
//         return subs;
//     }
// private:
//     void subsets(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& subs) {
//         subs.push_back(sub);
//         for (int j = i; j < nums.size(); j++) {
//             sub.push_back(nums[j]);
//             subsets(nums, j + 1, sub, subs);
//             sub.pop_back();
//         }
//     }
//     void solve(vector<int>& a, int n, set<vector<int>>&ans,vector<int>temp)
//     {
//         if(n==0){
//             ans.insert(temp);
//             return;
//         }
//         solve(a,n-1,ans,temp);
//         temp.push_back(a[n-1]);
//         solve(a,n-1,ans,temp);
//     }
    
//     vector<vector<int>> subsets(vector<int>& a) {
//         vector<vector<int>>ans;
//         set<vector<int>>s;
//         vector<int>temp;
//         solve(a,a.size(),s,temp);
//         for(auto x:s){
//             ans.push_back(x);
//         }
//         return ans;
//     }
    
    void solve(vector<int>& arr,int n,vector<int>ans, vector<vector<int>>&res){
        if(n==0) {
            res.push_back(ans);
            return;
        }
        
        solve(arr,n-1,ans,res);
        ans.push_back(arr[n-1]);
        solve(arr,n-1,ans,res);
        return;
    }
    
    
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<int>ans;
        vector<vector<int>>res;
        int n=arr.size();
        solve(arr,n,ans, res);
        return res;
    }
};