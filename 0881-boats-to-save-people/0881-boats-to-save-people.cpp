class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int count=0;
        int n=arr.size();
        int i=0,j=n-1;
        // if(n==1){
        //     return 1;
        // }
        while(i<=j){
            if(arr[i]+arr[j]<=limit){
                count++;
                i++;
                j--;
            }
            else{
                count++;
                j--;
            }
        }
        return count;
    }
};