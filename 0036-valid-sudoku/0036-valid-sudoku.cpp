class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        
        for(int i=0;i<n;i++){
            map<char,int>mp;
            for(int j=0;j<m;j++){
                if((mp[arr[i][j]]==0 && arr[i][j]>='0' && arr[i][j]<='9') || arr[i][j]=='.' ){
                    if(arr[i][j]!='.' ){
                        mp[arr[i][j]]++;
                    }
                }
                else{
                    return false;
                }
            }
        }

        for(int j=0;j<m;j++){
            map<char,int>mp;
            for(int i=0;i<n;i++){
                if((mp[arr[i][j]]==0 && arr[i][j]>='0' && arr[i][j]<='9') || arr[i][j]=='.' ){
                    if(arr[i][j]!='.' ){
                        mp[arr[i][j]]++;
                    }
                }
                else{
                    return false;
                }
            }
        }

        return true;
    }
};