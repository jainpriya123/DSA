class Solution {
public:
    int dx[4]={-1,0,1,0};
    int dy[4]={0,-1,0,1};
    
    int solve(vector<vector<int>>& grid, vector<vector<int>>& vis, int i, int j){
        int n=grid.size();
        int m=grid[0].size();
        
        int count=0;
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0 || vis[i][j]==1) return count;
        count++;
        vis[i][j]=1;
        for(int k=0;k<4;k++){
           count+=solve(grid, vis, i+dx[k] , j+dy[k]);
        }
        
        return count;
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        vector<vector<int>>vis(n, vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    ans= max(ans, solve(grid, vis, i, j));
                }
            }
        }
        
        return ans;
    }
};