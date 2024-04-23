class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>> ans;
        vector<int>temp;
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        
        temp= arr[0];
        ans.push_back(temp);
        
        for(int i=1;i<n;i++){
            temp=ans[ans.size()-1];
            if(temp[1]>=arr[i][0]){
                ans[ans.size()-1][1]=max(arr[i][1], temp[1]);
            }
            else{
                temp= arr[i];
                ans.push_back(temp);
            }
        }
        return ans;
        
    }
};