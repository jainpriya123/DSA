class Solution {
public:
    int longestPalindrome(string s) {
        int n= s.length();
        map<char,int>mp;
        
        for(auto x: s){
            mp[x]++;
        }
        int count=0;
        int f=0;
        for(auto x: mp){
            if((x.second)%2==0){
                count+=(x.second);
            }
            else{
                f=1;
                x.second = x.second-1;
                count+=(x.second);
            }
        }
        if(f==1){
            count+=1;
        }
        return count;
    }
};