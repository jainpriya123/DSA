class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        int count=0;
        while(i<=j){
            if(s[i]==s[j]){
                i++;j--;
            }
            else if(s[i]!=s[j]){
                string x= s.substr(i+1, j-(i+1)+1);
                reverse(x.begin(), x.end());
                if( s.substr(i+1, j-(i+1)+1) == x) return true;
               
                string y= s.substr(i, j-i);
                reverse(y.begin(),y.end());
                if( s.substr(i, j-i) == y) return true;
                
                return false;
            }
        }
        
        return true;
    }
};