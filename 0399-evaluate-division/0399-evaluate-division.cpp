class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        map<string,vector<pair<string, double>>>adj;
        int n= equations.size();
        
        for(int i=0;i<n;i++){
            adj[equations[i][0]].push_back({equations[i][1], values[i]});
            adj[equations[i][1]].push_back({equations[i][0], 1/values[i]});
        }
        
//         for(auto x: adj){
//             cout<<x.first<<endl;
            
//             for(auto y: x.second){
//                 cout<<y.first<<" "<<y.second<<" ";
//             }
            
//             cout<<endl;
//         }
        
        vector<double>ans;
        int count=0;
        
        for(int i=0;i<queries.size();i++){
            string src= queries[i][0];
            string des= queries[i][1];
            
           
            
            if(adj.find(src)==adj.end() or adj.find(des)==adj.end()){
                ans.push_back(double(-1));
                // count++;
                // cout<<"a "<<count<<" ";
                continue;
            }
             
            if((src)==(des)){
                ans.push_back(double(1));
                // count++;
                // cout<<"a "<<count<<" ";
                continue;
            }
            queue<pair<string, double>>q;
            q.push({src, double(1)});
            map<string, int>vis;
            int flag=0;
            while(q.size()){
                string node= q.front().first;
                double val= q.front().second;
                vis[node]=1;
                q.pop();
                
                for(auto it: adj[node]){
                    string child= it.first;
                    double value= it.second;
                    if(vis[child]==0){
                        if(child==des){
                        ans.push_back(val*value);
                        flag=1;
                    } 
                    double temp= val*value;
                    q.push({child, temp});
                    }
                    
                }
                if(flag==1){
                    break;
                }
            }
            if(flag==0){
                ans.push_back(double(-1));
            }
        }
        return ans;
        
    }
};