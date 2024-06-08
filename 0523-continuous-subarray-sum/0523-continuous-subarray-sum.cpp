//approach similar to array divisible by k

class Solution {
public:
    bool checkSubarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        map<int,int>mp;
        long long int sum=0;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            int count= (sum%k+k)%k;
            if(i!=0 && count==0) return true;
            if(mp.find(count)!=mp.end()){
                if(i-mp[count]>1) return true;
            }
            else{
                mp[count]=i;
            }
           
        }
        
        return false;
    }
};