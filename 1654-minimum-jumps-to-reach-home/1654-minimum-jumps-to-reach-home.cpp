class Solution {
public:
    bool valid(map<int,int>mp, int pos, map<int,int>vis, int x){
        if(pos<0 || vis[pos]==1 || mp[pos]==1)
            return false;
        return true;
    }
    
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        map<int,int>mp;
        for(int i=0;i<forbidden.size();i++){
            mp[forbidden[i]]++;
        }
        
        queue<pair<int,int>>q;
        map<int,int>vis;
        
        q.push({0,1});
        int count=0;
        while(q.size()>0){
            int n=q.size();
            
            for(int i=0;i<n;i++){
                int pos=q.front().first;
                int forward=q.front().second;
                q.pop();
                
                if(pos==x){
                   return count;
                } 
                
                if(mp[pos]==1 || vis[pos]==1) continue;
                vis[pos]=1;
                if(forward){
                    int back= pos-b;
                    if(back>0){
                        q.push({pos-b,0});
                    }
                }
                
                if(pos<2000+a+b){
                   q.push({pos+a,1});
                }
                // cout<<pos<<" ";
            }
            
            count++;
            // cout<<endl;
        }
        
        return -1;
    }
};