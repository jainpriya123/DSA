class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
            }
        }
        if(q.size()==n*m || q.size()==0) return -1;
        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        
        int dis=0;
        
        while(q.size()){
            int i= q.front().first.first;
            int j= q.front().first.second;
            int d= q.front().second;
            q.pop();
            dis= max(d,dis);
            
            for(int k=0;k<4;k++){
                int ni= i+dx[k];
                int nj= j+dy[k];
                
                if(ni>=0 && nj>=0 && ni<n && nj<m && arr[ni][nj]==0 && !vis[ni][nj]){
                    vis[ni][nj]=1;
                    q.push({{ni,nj},d+1});
                }
            }
        }
        
        return dis;
    }
};