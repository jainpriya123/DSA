class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>arr1= arr;
        sort(arr.begin(),arr.end());
        vector<int>ans;
        map<int,int>mp;
        int n=arr.size();
        if(n>0){
            int count=1;
        mp[arr[0]]=count;
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[i-1]){
                count++;
            }
            
            mp[arr[i]]=count;
        }
        
        for(auto x: arr1){
            ans.push_back(mp[x]);
        }
        }
        
        return ans;
    }
};