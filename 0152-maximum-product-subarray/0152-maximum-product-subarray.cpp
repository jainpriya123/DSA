class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n= arr.size();
        int pref=1;
        int suff=1;
        int ans= arr[0];
        for(int i=0;i<n;i++){
            if(pref==0) pref=1;
            if(suff==0) suff=1;
            
            pref= pref*arr[i];
            suff= suff*arr[n-1-i];
            
            ans= max({ans,pref,suff});
        }
        
        return ans;
    }
};