class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int n=s.length();
        int k=n-1;
        while(k>=0 && s[k]==' '){
            k--;
        }
        while(k>=0 && s[k]!=' '){
            count++;
            k--;
        }
        
        return count;
    }
};