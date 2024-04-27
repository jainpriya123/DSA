class Solution {
public:
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;       //to store all susbets
        vector<int> curr;         //to store current individual subset (that we will build)
        sort(nums.begin(),nums.end());      //sort the array so that duplicates are adjacent 
        solve(nums,ans,curr,0);       //we start from index 0
        return ans;
        
    }
    
    void solve(vector<int>& a, vector<vector<int>> &ans, vector<int> temp,int i)
    {
        if(i==a.size()){
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(a[i]);
        solve(a,ans,temp, i+1);
        temp.pop_back();
        
        while(i+1<a.size() && a[i]==a[i+1]) i++;
        
        solve(a,ans,temp,i+1);
        
    }
    
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         vector<vector<int>> ans;       //to store all susbets
//         vector<int> curr;         //to store current individual subset (that we will build)
//         sort(nums.begin(),nums.end());      //sort the array so that duplicates are adjacent 
//         helper(nums,ans,curr,0);       //we start from index 0
//         return ans;
        
//     }
    
//     void helper(vector<int>& nums, vector<vector<int>>& ans, vector<int>& curr, int idx){
//         ans.push_back(curr);       //we include current susbet into final ans
//         for(int i=idx;i<nums.size();i++){     //check for all possibilites
//             if(i>idx &&  nums[i]==nums[i-1]) continue;      //if duplicate then we continue
//             curr.push_back(nums[i]);     //we include nums[i] in current subset
//             helper(nums,ans,curr,i+1); 
//             curr.pop_back();         //to get subset without nums[i]
//         }
//     }  
//     void solve(vector<int>& a, int n, set<vector<int>>&ans,vector<int>temp)
//     {
//         if(n==0){
//             sort(temp.begin(),temp.end());
//             ans.insert(temp);
//             return;
//         }
//         solve(a,n-1,ans,temp);
//         temp.push_back(a[n-1]);
//         solve(a,n-1,ans,temp);
//     }
    
//     vector<vector<int>> subsetsWithDup(vector<int>& a) {
//         vector<vector<int>>ans;
//         set<vector<int>>s;
//         vector<int>temp;
//         solve(a,a.size(),s,temp);
//         for(auto x:s){
//             ans.push_back(x);
//         }
//         return ans;
//     }
};