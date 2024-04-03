class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int sum= a[0];
        int ans= a[0];
        
        for(int i=1;i<a.size();i++){
            if(sum<0){
             sum=a[i];   
            }
            else{
                sum+=a[i];
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};