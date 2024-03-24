class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]>0){
                return arr[i];
            }
            mp[arr[i]]++;
        }
        return 0;
    }
};