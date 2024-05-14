class Solution {
public:
    bool isHappy(int n) {
        map<int,int>mp;
        
        while(n!=1){
            if(mp[n]==1) return false;
            mp[n]=1;
            
            int sum=0;
            while(n){
                int num=0;
                num= n%10;
                n=n/10;
                
                sum+= num*num;
            }
            n=sum;
            // cout<<n<<"  ";
        }
        
        if(n==1) return true;
        
        return false;
    }
};