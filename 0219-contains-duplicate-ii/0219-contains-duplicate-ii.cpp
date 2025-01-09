class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        int n=arr.size();

        map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])!=mp.end()){
                if(abs(i-mp[arr[i]])<=k)
                return true;
            }

            mp[arr[i]]=i;
        }

        return false;
    }
};