class Solution {
public:
    int findLength(vector<int>& arr1, vector<int>& arr2) {
        if(arr1.size()<arr2.size()) return findLength(arr2, arr1);
        int ans=0;
        for(int i=0;i<arr1.size();i++){
            for(int j=0;j<arr2.size();j++){
                
                if(arr2[j]==arr1[i]){
                    int k1=i;
                    int k2=j;
                    
                    while(k1<arr1.size() && k2<arr2.size()){
                        if(arr1[k1]==arr2[k2]){
                            ans= max(ans, k1-i+1);
                            k1++;k2++;
                        }
                        else{
                            break;
                        }
                    } 
                }
                
            }
        }
        
        return ans;
    }
};