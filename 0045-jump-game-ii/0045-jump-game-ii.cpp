class Solution {
public:
    int jump(vector<int>& arr) {
        int n=arr.size();
        vector<int>count(n,0);
        for(int i=0;i<n;i++){
            if(arr[i]==0) continue;
            for(int j=1;j<=arr[i];j++){
                if(i+j<n && count[i+j]==0){
                    count[i+j]=count[i]+1;
                }
            }
        }
        return count[n-1];
    }
};