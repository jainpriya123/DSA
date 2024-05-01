class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& arr) {
        int n= arr.size();
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++){
            arr[i]=arr[i]%60;
            
            if(mp[60-arr[i]]>0){
                ans+=mp[60-arr[i]];
            }
            
            if(arr[i]==0){
                ans+=mp[arr[i]];
            }
            mp[arr[i]]++;
        }
        
        // sort(arr.begin(),arr.end());
        return ans;
        
    }
};