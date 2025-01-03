class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<int>ans;
        int rows=0, cols=0;
        int rowe=n-1, cole=m-1;
        int total=m*n;
        int count=0;

        while(count<total){
            for(int j=cols;j<=cole;j++){
            ans.push_back(arr[rows][j]);
            count++;
            }
        rows++;
        if(count<total){
        for(int i=rows;i<=rowe;i++){
            ans.push_back(arr[i][cole]);
            count++;
        }
        cole--;
        }
        
        if(count<total){
            for(int j=cole;j>=cols;j--){
            ans.push_back(arr[rowe][j]);
            count++;
        }
        rowe--;
        }
        
        }

        return ans;
        
    }
};