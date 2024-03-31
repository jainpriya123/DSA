class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]=i;
        }
        
        vector<int>ans;
        int temp=0, end=0;
        for(int i=0;i<s.length();i++){
            temp++;
           if(mp[s[i]]>end){
               end=mp[s[i]];
           }
            if(i==end){
                ans.push_back(temp);
                temp=0;
            }
        }
        
        return ans;
        
    }
};