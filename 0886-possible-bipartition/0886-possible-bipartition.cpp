class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& arr) {
        map<int, vector<int>>mp;
        
        for(auto x: arr){
            mp[x[0]].push_back(x[1]);
            mp[x[1]].push_back(x[0]);
        }
        
        vector<int>vis(n+1,-1);
        
        for(int i=1;i<n;i++){
            if(vis[i]==-1){
                queue<pair<int,int>>q;
                q.push({i, 0});
                vis[i]=0;
                while(q.size()){
                    int node = q.front().first;
                    int group= q.front().second;
                    q.pop();
                    
                    for(auto it: mp[node]){
                        if(vis[it]==-1){
                            vis[it]=1-vis[node];
                            q.push({it, 1-vis[node]});
                        }
                        else if(vis[it]==vis[node])
                            return false;
                    }
                }
            }
        }
        
        return true;
    }
};