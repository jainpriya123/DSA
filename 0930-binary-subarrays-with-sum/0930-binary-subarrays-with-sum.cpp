class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        map<int,int>mp;
        int sum=0,ans=0;
        int n= nums.size();
        mp[0]=1;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp[sum-goal]>0){
                ans+=mp[sum-goal];
            }
            mp[sum]++;
        }
        return ans;
    }
};