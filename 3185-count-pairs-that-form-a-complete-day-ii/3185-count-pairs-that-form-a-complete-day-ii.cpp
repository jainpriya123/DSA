class Solution {
public:
    long long countCompleteDayPairs(vector<int>& arr) {
        long long count=0;
        
        int n=arr.size();
        map<int, long long>mp;
        long long zero=0;
        
        
        for(int i=0;i<n;i++){
            arr[i]=arr[i]%24;
            if(arr[i]==0){
                zero++;
            }
            if(mp.find(24-arr[i])!=mp.end()){
                count+=mp[24-arr[i]];
            }
            
            mp[arr[i]]++;
            
        }
        long long x=0;
        long long y=0;
        
        if(zero%2==0){
            x=(zero)/2;
            y=(zero-1);
        }
        else{
            x= (zero-1)/2;
            y=zero;
        }
        
        count+=(y*x);
        
        return count;       
        
    }
};