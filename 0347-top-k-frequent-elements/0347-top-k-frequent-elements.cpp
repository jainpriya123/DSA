class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        vector<int>ans;
        map<int,int>mp;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        vector<vector<int>>temp(arr.size()+1);
        for(auto x: mp){
            temp[x.second].push_back(x.first);
        }
        
        for(int i=temp.size()-1;i>=0;i--){
            if(temp[i].size()>0 && k>0){
                for(auto x: temp[i]){
                     ans.push_back(x);
                     k--;   
                }
            }
        }
        
        return ans;
    }
};