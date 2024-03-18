class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& arr) {
        
        int n= arr.size();
        if(n==0) return 0;
        if(n==1) return 1;
        sort(arr.begin(), arr.end());
        
        // for(auto x: arr){
        //     for(auto y: x){
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }
        
        int count=0;
        int i=0;
        for(int j=1;j<n;j++){
            vector<int> temp1= arr[i];
            vector<int> temp2= arr[j];
            if(temp1[1]>=temp2[0]){
                if(temp1[1]>temp2[1])
                i=j;
            }
            else{
                count++;
                i=j;
            }
        }
        
        count++;
         return count;
    }
};