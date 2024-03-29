class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
        if(k==0) return 0;
        
        int i=0, prod=1;
        int ans=0;
        int n=arr.size();
        for(int j=0;j<n;j++){
            prod= prod*arr[j];
            
            while(i<=j && prod>=k){
                prod=prod/arr[i];
                i++;
            }
            ans+= j-i+1; 
        }
        
        return ans;
    }
};