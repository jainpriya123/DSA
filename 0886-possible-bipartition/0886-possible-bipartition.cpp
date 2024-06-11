class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& arr) {
        
        map<int, vector<int>>adj;
        
        for(int i=0;i<arr.size();i++){
            adj[arr[i][0]].push_back(arr[i][1]);
            // adj[arr[i][1]].push_back(arr[i][0]);
        }
        
        
        
        for(int i=1;i<=n;i++){
        
            vector<int>vis(n+1, -1);
        queue<pair<int,int>>q;
        
        q.push({i, 0});
        vis[i]=-1;
        
        while(q.size()){
            int node= q.front().first;
            int group = q.front().second;
            q.pop();
            
            for(auto it: adj[node]){
                if(vis[it]==-1){
                    vis[it]= 1-group;
                    q.push({it, vis[it]});
                }
                else if(vis[it]==vis[node]){
                    return false;
                }
            }
        }
        
        }
        
        return true;
    }
};