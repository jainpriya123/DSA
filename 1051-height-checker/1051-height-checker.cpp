class Solution {
public:
    int heightChecker(vector<int>& arr1) {
        vector<int>arr2= arr1;
        sort(arr2.begin(),arr2.end());
        int count =0;
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]!=arr2[i]){
                count++;
            }
        }
        
        return count;
    }
};