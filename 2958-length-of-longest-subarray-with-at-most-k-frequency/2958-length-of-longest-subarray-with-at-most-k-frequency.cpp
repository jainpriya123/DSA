class Solution {
public:
    int maxSubarrayLength(vector<int>& arr, int k) {
        int ans=0;
        map<int,int>mp;
        int n=arr.size();
        int i=0,j=0;
        for(j=0;j<n;j++){
            mp[arr[j]]++;
            while(i<=j && mp[arr[j]]>k){
                mp[arr[i]]--;
                i++;
            }
            
            ans= max(ans, j-i+1);
        }
        
        return ans;
    }
};