class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       if(n==1) return 1;
        map<int,int>mp;
        map<int,int>node;
        for(auto x: trust){
            mp[x[1]]++;
            node[x[0]]++;
        }
        
        for(auto x:mp){
            if(node.find(x.first)==node.end() && x.second==n-1)
                return x.first;
        }
        return -1;
    }
};