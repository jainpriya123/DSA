class Solution {
public:
    int rob(vector<int>& a) {
        int n=a.size();
        
        int inc=a[0];
        int exc=0;
        
        for(int i=1;i<n;i++){
            int dinc=inc;
            int dexc=exc;
            inc=a[i]+dexc;
            exc=max(dinc,dexc);
            
        }
        return max(inc,exc);
    }
};