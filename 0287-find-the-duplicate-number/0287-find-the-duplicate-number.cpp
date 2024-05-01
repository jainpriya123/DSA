class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int n=arr.size();
//         vector<int>v(n+1,0);
        
//         for(int i=0;i<n;i++){
//             v[nums[i]-1]++;
//         }
//         for(int i=0;i<n;i++){
//             if(v[i]>=2)
//                 return i+1;
//         }
//         return -1;
        
        int slow=0;
        int fast=0;
        do{
            slow= arr[slow];
            fast= arr[arr[fast]]; 
        }
        while(arr[slow]!=arr[fast]);
        
        slow=0;
        while(arr[slow]!=arr[fast]){
            slow=arr[slow];
            fast=arr[fast];
        }
        return arr[slow];
    }
};