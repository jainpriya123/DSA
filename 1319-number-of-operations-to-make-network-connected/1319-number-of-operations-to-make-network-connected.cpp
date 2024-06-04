class Solution {
public:
   
    
    int makeConnected(int n, vector<vector<int>>& arr) {
        if(arr.size()<n-1){
            return -1;
        }
        
        map<int, vector<int>>adj;
        
        for(int i=0;i<arr.size();i++){
            adj[arr[i][0]].push_back(arr[i][1]);
            adj[arr[i][1]].push_back(arr[i][0]);
        }
        
        vector<int>vis(n);
        int count=0;
        
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                queue<int>q;
                q.push(i);
                vis[i]=1;
        
        while(q.size()){
            int node= q.front();
            q.pop();
            vis[node]=1;
            for(auto it: adj[node]){
                if(vis[it]==0){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
                count++;
            }
        }
        
        return count-1;
    }
};