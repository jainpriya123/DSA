// refer knowledge center yt video..

class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        int n=arr.size();
        map<int, int>mp;
        int sum=0;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            mp[(sum%k+k)%k]++;
        }
        
        int ans=0;
        for(auto x:mp){
            if(x.second>1){
                ans+=(x.second)*(x.second-1)/2;
            }
        }
        
        ans+= mp[0];
        
        return ans;
    }
};