class Solution {
public:
    bool isArraySpecial(vector<int>& arr) {
        
        int n= arr.size();
        int flag;
        if(arr[0]%2==0){
            flag=1;
        }
        else{
            flag=0;
        }
        
        
        for(int i=1;i<n;i++){
            if(arr[i]%2==0){
                if(flag==1){
                    return false;
                }
            }
            else{
                if(flag==0){
                    return false;
                }
            }
            
            flag=1-flag;
        }
        
        return true;
    }
};