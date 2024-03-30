class Solution {
public:
    int ok(vector<int>& arr, int k){
        if(k==0) return 0;
        int total=0;
        map<int,int>mp;
        int i=0;
        for(int j=0;j<arr.size();j++){
            mp[arr[j]]++;
            if(mp.size()<=k){
                total+= j-i+1;
            }
            else if(mp.size()>k){
                while(i<arr.size() && mp.size()>k){
                    mp[arr[i]]--;
                    if(mp[arr[i]]==0) mp.erase(arr[i]);
                    i++;
                }
                if(mp.size()<=k){
                  total+= j-i+1;
                }
            }
        }
        
        return total;
    }
    int subarraysWithKDistinct(vector<int>& arr, int k) {
        
        return ok(arr, k)- ok(arr, k-1);
    }
};