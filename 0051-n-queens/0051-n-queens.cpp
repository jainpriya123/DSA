class Solution {
public:
    bool isPlace(int i, int j, int n, vector<string>&arr){
        
        int row=i;
        int col=j;
        
         while(col>=0 && row>=0){
            if(arr[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }
        
        
       
        row=i;
        col=j;
        while(col>=0){
            if(arr[row][col]=='Q'){
                return false;
            }
            col--;
        }                   
        
        row=i;
        col=j;
        while(row<n && col>=0){
            if(arr[row][col]=='Q'){
                return false;
            }
            row++; col--;
        }
        return true;


        
    }
    void solve(int col, int n, vector<string>&arr, vector<vector<string>>&ans){
        if(col==n){
            ans.push_back(arr);
            return ;
        }
        
        for(int row=0;row<n;row++){
            if(isPlace(row, col, n, arr)){
                arr[row][col]='Q';
                solve(col+1, n, arr, ans);
                arr[row][col]='.';
            }
        }
        return ;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        
        vector<string>arr(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            arr[i]=(s);
        }
        solve(0, n, arr, ans);
        // ans.push_back(arr);
        return ans;
        
    }
};