class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        int n= arr.size();
        int sum= INT_MAX;
        int ansi;
        int ansj;
        int ansk;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            
            while(j<k){
                if(arr[i]+arr[j]+arr[k]==target)
                    return target;
                if(sum>abs(target-(arr[i]+arr[j]+arr[k]))){
                    sum =abs(target-(arr[i]+arr[j]+arr[k]));
                    ansi=i;
                    ansj=j;
                    ansk=k;
                }
                if(target>arr[i]+arr[j]+arr[k]) j++;
                else k--;
            }
        }
        
        return arr[ansi]+arr[ansj]+arr[ansk];
    }
};