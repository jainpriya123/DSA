class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        for(auto x: nums){
            mp[x]++;
        }
        
        for(auto x:mp){
            if(x.second==2){
                ans.push_back(x.first);
            }
        }
        
        return ans;
    }
};