class Solution {
public:
    long long countSubarrays(vector<int>& arr, int k) {
        
        int i=0,j=0;
        int n= arr.size();
        long long ans=0;
        int count= 0;
        int maxi = *max_element (arr.begin(), arr.end());
        while(j<n){
            if(arr[j]==maxi){
                count++;
            }
            while(i<=j && count>=k){
                ans+=n-j;
                if(arr[i]==maxi){
                     count--;
                }
                i++;
            }
            j++;
        }
        
        return ans;
        
    }
};