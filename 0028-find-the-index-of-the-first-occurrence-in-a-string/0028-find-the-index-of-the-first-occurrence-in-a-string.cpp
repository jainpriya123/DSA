class Solution {
public:
    int strStr(string h, string ne) {
        int n=h.length();
        int m=ne.length();
        if(m>n) return -1;
        
        for(int i=0;i<=n-m;i++){
            if(h.substr(i, m)==ne){
                return i;
            }
        }
        return -1;
        
    }
};