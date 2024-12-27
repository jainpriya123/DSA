class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s1=s.length();
        int t1=t.length();
        int i=0;
        int j=0;

        while(i<s1 && j<t1){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }

        if(i<s1) return false;
        return true;
    }
};