class Solution {
public:
    int findMaxK(vector<int>& arr) {
        map<int,int>mp;
        int n=arr.size();
        int ans=-1;
        for(int i=0;i<n;i++){
            if(mp[(-1*arr[i])]>0){
                ans=max(abs(arr[i]),ans);
            }
            mp[arr[i]]++;
        }
        
        return ans;
    }
};