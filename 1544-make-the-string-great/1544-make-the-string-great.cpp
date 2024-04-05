class Solution {
public:
    string makeGood(string s) {
        int n=s.length();
        
        for(int i=0;i<n-1;i++){
            if(i>=0){
            char x= s[i];
            char y = s[i+1];
            
            if(x!=y && (toupper(x)==y || tolower(x)==y)){
                s.erase(i,2);
                i--;
                i--;
            }
            }
        }
        
        return s;
    }
};