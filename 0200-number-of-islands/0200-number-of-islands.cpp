class Solution {
public:
    void solve(vector<vector<char>>& grid, int i, int j, vector<vector<int>>& vis){
        
        int n=grid.size();
        int m= grid[0].size();
        
        queue<pair<int,int>>q;
        q.push({i,j});
        vis[i][j]=1;
        
        while(q.size()>0){
            int i1= q.front().first;
            int j1= q.front().second; 
            q.pop();
            
            if(i1>0 && vis[i1-1][j1]==0 && grid[i1][j1]=='1'){
                q.push({i1-1,j1});
                vis[i1-1][j1]=1;
            }
            if(j1>0 && vis[i1][j1-1]==0 && grid[i1][j1]=='1'){
                q.push({i1, j1-1});
                vis[i1][j1-1]=1;
            }
            
            if(i1<n-1 && vis[i1+1][j1]==0 && grid[i1][j1]=='1'){
                q.push({i1+1,j1});
                vis[i1+1][j1]=1;
            }
            if(j1<m-1 && vis[i1][j1+1]==0 && grid[i1][j1]=='1'){
                q.push({i1, j1+1});
                vis[i1][j1+1]=1;
            }
        }
        
        
        // for(int i2=0;i2<n;i2++){
        //     for(int j2=0;j2<m;j2++){
        //         cout<<vis[i2][j2]<<" ";
        //     }
        //     cout<<endl;
        // }
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        
        int n=grid.size();
        int m= grid[0].size();
        
        vector<vector<int>>vis(n, vector<int>(m,0));
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    solve(grid, i, j, vis);
                    ans++;
                }
            }
        }
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<vis[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        return ans;
    }
};






// class Solution {
// public:
//     int dx[4] = {0,1,0,-1};
//     int dy[4] = {1,0,-1,0};
    
//     bool isvalid(int i, int j, vector<vector<char>>& grid, vector<vector<int>>&vis){
//         if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || vis[i][j]==1 || grid[i][j]=='0') return false;
//         return true;
//     }
    
    
//     int numIslands(vector<vector<char>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         int count=0;
//         vector<vector<int>>vis(n,vector<int>(m,0));
//         queue<pair<int,int>>q;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
                
//                 if(vis[i][j]==0 && grid[i][j]=='1'){
//                     q.push({i,j});
//                     vis[i][j]=1;
//                     while(!q.empty()){
//                         int indi=q.front().first;
//                         int indj=q.front().second;
                        
//                         q.pop();
                        
//                         for(int k=0;k<4;k++){
                            
//                             if(isvalid(indi+dx[k],indj+dy[k],grid,vis)){
//                                 q.push({indi+dx[k],indj+dy[k]});
//                                 vis[indi+dx[k]][indj+dy[k]]=1;
//                             }
//                         }
//                     }
                    
//                     count++;
                    
//                 }
//             }
//         }
        
//         return count;
        
//     }
// };