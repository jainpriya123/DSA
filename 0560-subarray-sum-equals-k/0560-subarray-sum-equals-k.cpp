class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        
        map<int,int>mp;
        mp[0]=1;
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp[sum-k]!=0){
                count+= mp[sum-k];
            }
            mp[sum]++;
        }
        
        return count;
        
        
    }
};