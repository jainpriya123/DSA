class Solution {
public:
    
    int helper(string s, int start, int end, int k){
        if(end-start+1 < k) return 0;
        map<int,int>mp;
        for(int i=start; i<=end; i++){
            mp[s[i]]++;
        }
        
        for(int i=start; i<=end; i++){
            if(mp[s[i]]<k){
                return max(helper(s, start, i-1, k), helper(s, i+1, end, k));
            }
        }
        
        return end-start+1;
    }
    
    int longestSubstring(string s, int k) {
        return helper(s, 0, s.length()-1, k);
    }
};