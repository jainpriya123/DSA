class Solution {
public:
    void sortColors(vector<int>& arr) {
        int i=0,j=0,k=arr.size()-1;
        
        while(j<=k && j<arr.size()){
            if(arr[j]==2){
                swap(arr[j],arr[k]);
                k--;
            }
            else if(arr[j]==0){
                swap(arr[i],arr[j]);
                i++;j++;
            }
            else if(arr[j]==1) j++;
        }
        
        return;
    }
};