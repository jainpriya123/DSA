class Solution {
public:
    int appendCharacters(string s, string t) {
        int n= s.length();
        int m= t.length();
        
        int ans=0;
        int j=0;
        for(int i=0;i<m;i++){
            int flag=0;
            while(j<n){
                if(s[j]==t[i]){
                    j++;
                    flag=1;
                    break;
                }
                j++;
            }
            if(flag==0){
                ans= m-i;
                break;
            }
        }
        return ans;
        
    }
};