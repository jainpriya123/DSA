class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int ans=INT_MAX;
        int n = arr.size();
        int i=0;
        if(arr[i]>=target) return 1;
        long sum= arr[i];
        int j=1;
        while(j<n){
            sum+=arr[j];
            if(sum<target){
                j++;
            }
            else if(sum>=target){
                while(i<n &&  sum>=target){
                    ans=min(ans,j-i+1);
                    sum-=arr[i];
                    i++;
                }
                j++;
            }
        }

        if(ans==INT_MAX)
        return 0;
        return ans;
    }
};