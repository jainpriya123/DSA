class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        int total= n*m;
        
        int rows=0,cols=0;
        int rowe=n-1,cole=m-1;
        vector<int>ans;
        
        while(true){
            if(total==0){
                break;
            }
            for(int j=cols;total>0 && j<=cole;j++){
                ans.push_back(matrix[rows][j]);
                total--;
            }
            rows++;
            
            for(int i=rows;total>0 && i<=rowe;i++){
                ans.push_back(matrix[i][cole]);
                total--;
            }
            cole--;
            
            for(int j=cole;total>0 && j>=cols;j--){
                ans.push_back(matrix[rowe][j]);
                total--;
            }
            rowe--;
            
            for(int i=rowe;total>0 && i>=rows;i--){
                ans.push_back(matrix[i][cols]);
                total--;
            }
            cols++;
                       
        }
        
        return ans;
    }
};