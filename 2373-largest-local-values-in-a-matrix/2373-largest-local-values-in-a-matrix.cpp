class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            vector<int>temp;
            for(int j=0;j<n-2;j++){
                int maxi=0;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                       maxi=max(maxi,arr[k][l]); 
                    }
                }
               temp.push_back(maxi); 
            }
            ans.push_back(temp);
        }
        return ans;
    }
};