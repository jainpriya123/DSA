class Solution {
public:
    bool valid(string s, int x, int i){
        if(s[i-1]=='0') return false;
        if(x>=1 && x<=26) return true;
        return false;
    }
    int numDecodings(string s) {
        if(s[0]=='0') return 0;
        int n=s.length();
        vector<int>dp(n);
        dp[0]=1;
        
        for(int i=1;i<n;i++){
            int x= s[i-1]-'0';
            x= x*10+s[i]-'0';
            // cout<<x<<"  "; 
            if(s[i]=='0' && (s[i-1]-'0'>2 || s[i-1]=='0')) return 0;
            if(valid(s, x, i)){
                if(s[i]=='0'){
                    if(i-2>=0)
                    dp[i]=dp[i-2];
                    else
                    dp[i]= dp[i-1];
                        
                }
                else{
                    if(i-2>=0)
                       dp[i]= dp[i-1]+dp[i-2];
                    else{
                       dp[i]= dp[i-1]+1;
                    }
                }
                
            }
            else{
                dp[i]=dp[i-1];
            }
            
            // cout<<"dp i "<<i << "  "<<dp[i]<<endl;
        }
        // cout<<endl;
        return dp[n-1];
    }
};