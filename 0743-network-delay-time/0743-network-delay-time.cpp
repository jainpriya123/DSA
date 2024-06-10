class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        map<int, vector<pair<int,int>>>adj;
        
        for(int i=0;i<times.size();i++){
            int u= times[i][0];
            int v= times[i][1];
            int wt= times[i][2];
            
            adj[u].push_back({v,wt});
        }
        
        vector<int>dis(n+1, 1e9);
        dis[k]=0;
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        
        pq.push({0, k});
        
        while(pq.size()){
            int wt= pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            for(auto it: adj[node]){
                if(dis[it.first]> wt+it.second){
                    dis[it.first]= wt+it.second;
                    pq.push({dis[it.first], it.first});
                }
            }
        }
        int maxi=-1e9;
        
        // for(auto x: dis){
        //     cout<<x<<" ";
        // }
       // cout<<maxi<<" "; 
        for(int i=1;i<=n;i++){
            maxi= max(maxi, dis[i]);
        }
        
        // cout<<maxi<<" "; 
        if(maxi==1e9){
            return -1;
        }
        return  maxi;
    }
};