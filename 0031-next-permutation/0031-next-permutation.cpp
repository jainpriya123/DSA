class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        
        int n=arr.size();
        if(n==1)
            return;
        if(n==2){
            swap(arr[0],arr[1]);
            return;
        }
        int i;
        for(i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                break;
            }
        }
        if(i<0){
            reverse(arr.begin(), arr.end());
            return;
        }
        int ind1= i;
        for(i=n-1;i>=0;i--){
            if(arr[i]>arr[ind1]){
                break;
            }
        }
        
        swap(arr[i],arr[ind1]);
        reverse(arr.begin()+ind1+1, arr.end());
        return;
    }
};