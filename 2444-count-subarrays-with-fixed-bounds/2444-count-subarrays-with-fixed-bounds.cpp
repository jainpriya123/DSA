class Solution {
public:
    long long countSubarrays(vector<int>& arr, int minK, int maxK) {
        int mini=-1;
        int maxi=-1;
        int culp=-1;
        long long ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<minK or arr[i]>maxK){
                culp=i;
            }
            if(arr[i]==minK){
                mini=i;
            }
            if(arr[i]==maxK){
                maxi=i;
            }
            
           long long temp = min(mini,maxi)-culp;
            ans+= temp<=0?0:temp;
        }
        
        return ans;
    }
};