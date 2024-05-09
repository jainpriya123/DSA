class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        int n=arr.size();
        vector<int>v(n,0);
        
        int ans=1;
        v[0]=1;
        for(int i=1;i<n;i++){
            int f=0;
            for(int j=i-1;j>=0;j--){
                if(arr[j]<arr[i]){
                    f=1;
                    v[i]=max(v[j]+1,v[i]);
                }
            }
            if(f==0){
                v[i]+=1;
            } 
            ans=max(ans,v[i]);
        }
        
        return ans;
    }
};