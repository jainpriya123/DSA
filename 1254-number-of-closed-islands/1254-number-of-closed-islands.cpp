class Solution {
public:
    int dx[4]= {-1,0,1,0};
    int dy[4]= {0,1,0,-1};
    void dfs(vector<vector<int>>& arr, vector<vector<int>>& vis, int i, int j){
        vis[i][j]=1;
        int n=arr.size();
        int m=arr[0].size();
        
        for(int k=0;k<4;k++){
            int ni= i+dx[k];
            int nj= j+dy[k];
            if(ni>=0 && nj>=0 && ni<n && nj<m && !vis[ni][nj] && arr[ni][nj]==0){
                dfs(arr, vis, ni, nj);
            }
        }
        
        return;
        
    }
    int closedIsland(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        
        vector<vector<int>>vis(n, vector<int>(m,0));
        
        for(int j=0;j<m;j++){
            if(!vis[0][j] && arr[0][j]==0){
                dfs(arr, vis, 0, j);
            }
            
            if(!vis[n-1][j] && arr[n-1][j]==0){
                dfs(arr, vis, n-1, j);
            }
        }
        
        for(int i=0;i<n;i++){
            if(!vis[i][0] && arr[i][0]==0){
                dfs(arr, vis, i, 0);
            }
            
            if(!vis[i][m-1] && arr[i][m-1]==0){
                dfs(arr, vis, i, m-1);
            }
        }
        
        int count=0;
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(arr[i][j]==0 && !vis[i][j]){
                    count++;
                    dfs(arr, vis, i, j);
                }
            }
        }
        
        return count;
    }
};