class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n= s.size();
        int i=0;
        string start = s[0];
        for(i=0;i<s[0].length();i++){
            char first = s[0][i];
            int flag=0;
            for(int j=1;j<n;j++){
                if(first!=s[j][i]){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
        return start.substr(0, i);
       
    }
};