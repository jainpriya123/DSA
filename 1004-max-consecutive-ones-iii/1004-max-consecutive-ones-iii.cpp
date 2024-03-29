class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        int n=arr.size();
        int i=0,j=0;
        int ans=0;
        int count=0;
        while(j<n){
            if(arr[j]==0){
                count++;
            }
            if(count<=k){
                ans= max(ans, j-i+1);
            }
            else if(count>k){
                while(i<=j && count>k){
                    if(arr[i]==0){
                        count--;
                    }
                    i++;
                }
                if(count<=k){
                    ans= max(ans, j-i+1);
                }
            }
            j++;
        }
        
        return ans;
    }
};