class Solution {
public:
    void solve(vector<int>& arr, int sum, int j, vector<int>temp, vector<vector<int>>&ans){
        if(sum<0) return;
        
        if(sum==0){
            ans.push_back(temp);
            return;
        }
        
        for(int i=j;i<arr.size();i++){
            if(i>j && arr[i]==arr[i-1]) continue;
            temp.push_back(arr[i]);
            solve(arr, sum-arr[i], i+1, temp, ans);
            temp.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int sum) {
        sort(arr.begin(),arr.end());
        
        vector<vector<int>>ans;
        vector<int>temp;
        
        solve(arr, sum, 0, temp, ans);
        
        return ans;
        
    }
};