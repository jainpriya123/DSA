class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        int n = arr.size();
        map<int, int>mp;
        mp[0]=-1;
        int sum=0;
        int ans=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]==1) sum+=arr[i];
            else if(arr[i]==0) sum+=(-1);
            
            cout<<sum<<"  ";
            
            if(mp.find(sum)!= mp.end()){
                ans=max(ans,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
        
        return ans;
    }
};