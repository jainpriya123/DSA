class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        int original= x;
        int newnum=0;
        
        while(x){
            if(newnum > (INT_MAX - x%10)/10) return false;
            newnum= newnum*10 + x%10;
            x=x/10;
        }
        cout<<newnum;
        
        if(original==newnum) return true;
        return false;
        
    }
};