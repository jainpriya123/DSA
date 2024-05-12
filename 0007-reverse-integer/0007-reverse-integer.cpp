class Solution {
public:
    int reverse(int x) {
        int ans=0;
        int flag=0;
        if(x<0){
            flag=1;
            x=abs(x);
        }
        // cout<<x<<" ";
        while(x>0){
            int rem= x%10;
            x= x/10;
            if(ans > INT_MAX/10 or ans>(INT_MAX-rem)/10){
                
                return 0;
            } 
            ans=ans*10+rem;
        }
        if(flag==1){
            if(-1*ans<INT_MIN){
                // cout<<x<<" ";
                return 0;
            } 
            ans=-1*ans;
        }
        return ans;
    }
};