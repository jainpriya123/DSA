class Solution {
public:

    bool ispalin(string s){
        string s1=s;
        reverse(s1.begin(),s1.end());
        if(s1==s) return true;
        return false;
    }
    bool isPalindrome(string s) {
        // str.erase(str.begin() + 4);
        // Before erase : Hello World!
        // After erase : Hell World!
        
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<s.size();){
           if(isalnum(s[i])) i++;
           else{
            cout<<s[i];
               s.erase(s.begin() + i);
           } 
        }
        
        return ispalin(s);
    }
};