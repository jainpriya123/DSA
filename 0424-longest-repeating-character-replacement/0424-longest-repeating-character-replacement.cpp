class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0;
        int n=s.length();
        map<char,int>mp;
        int maxf=0;
        int result=0;
        
        for(j=0;j<n;j++){
            mp[s[j]]++;
            maxf = max(maxf, mp[s[j]]);
            if(j-i+1 - maxf <=k){
                result = max(result, j-i+1);
            }
            else{
                while(j-i+1 - maxf >k){
                    mp[s[i]]--;
                    i++;
                }
                if(j-i+1 - maxf <=k){
                    result = max(result, j-i+1);
                }
            }
        }
        return result;
    }
};