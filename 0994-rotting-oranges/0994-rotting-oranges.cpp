class Solution {
public:
    int dx[4]={-1,0,0,1};
    int dy[4]={0,-1,1,0};
    bool isvalid(vector<vector<int>>& grid, vector<vector<int>>vis, int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || vis[i][j]==2 || vis[i][j]==0) 
            return false;
        
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>vis(n, vector<int>(m,0));
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vis[i][j]=grid[i][j];
                if(vis[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int ans=0;
        
        while(q.size()>0){
            int size=q.size();
            int flag=0;
            
            for(int x=0;x<size;x++){
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                
                for(int k=0;k<4;k++){
                    if(isvalid(grid, vis, i+dx[k],j+dy[k])){
                        flag=1;
                        q.push({i+dx[k], j+dy[k]});
                        vis[i+dx[k]][j+dy[k]]=2;
                    }
                }
            }
            
            if(flag==1){
                ans++;
            }
            
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==1)
                    return -1;
            }
        }
        return ans;
    }
};