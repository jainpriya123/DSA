class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n=arr.size();
        
        for(int i=0;i<n;){
            if(arr[i]<=0 || arr[i]>n || arr[i]-1==i || arr[i]==arr[arr[i]-1]){
                i++;
                continue;
            }
            
            swap(arr[i], arr[arr[i]-1]);
        }
        
        // for(auto x: arr){
        //     cout<<x<<" ";
        // }
        
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                return i+1;
            }
        }
        return n+1;
    }
};