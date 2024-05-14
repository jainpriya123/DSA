class Solution {
public:
    int missingNumber(vector<int>& arr) {
        map<int,int>mp;
        int n= arr.size();
        for(auto x: arr){
            mp[x]++;
        }
        
        for(int i=0;i<=n; i++){
            if(mp[i]==0){
                return i;
            }
        }
        
        return -1;
    }
};