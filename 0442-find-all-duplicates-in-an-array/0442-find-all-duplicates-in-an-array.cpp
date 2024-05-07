class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        
        int i=0;
        while(i<n){
            if( i!=arr[i]-1 && arr[i]!= arr[arr[i]-1]){
                swap(arr[i], arr[arr[i]-1]);
                
            }
            else{
                i++;
            }
        }
        
       for(int i=0;i<n;i++){
           if(arr[i]-1!=i){
               ans.push_back(arr[i]);
           }
       } 
        
        return ans;
    }
};