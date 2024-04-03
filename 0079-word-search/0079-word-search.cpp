class Solution {
public:
    
    bool solve(vector<vector<char>>& grid, vector<vector<int>> &vis, int i, int j, int ind, string word)   //vector<vector<int>> &vis ko '&' ke saath use karo..nhi to time limit exceed ka problem aayega..  
    {
         if(ind==word.size()) return true;
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || vis[i][j]==1 || word[ind]!=grid[i][j]) return false;
       
        
        vis[i][j]=1;
        
        if(solve(grid,vis,i-1,j,ind+1,word)||solve(grid,vis,i+1 ,j,ind+1,word) || solve(grid,vis,i,j-1,ind+1,word)|| solve(grid,vis,i,j+1,ind+1,word)) return true;
    vis[i][j]=0;
        return false;
    }
    
    bool exist(vector<vector<char>>& grid, string word) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0)
                {
                    if(solve(grid,vis,i,j,0,word)==true) return true;
                }
            }
        }
        
        return false;
    }
};