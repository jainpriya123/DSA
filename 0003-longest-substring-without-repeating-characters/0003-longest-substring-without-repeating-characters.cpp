class Solution {
public:
    int lengthOfLongestSubstring(string arr) {
        int n=arr.length();
        int i=0;
        map<char,int>mp;
        if(n==0) return 0;
        int ans=0;
        mp[arr[i]]=1;
        ans++;

        for(int j=1;j<n;j++){
            mp[arr[j]]++;
            if(mp[arr[j]]>1){
                while(j<n && mp[arr[j]]>1){
                    mp[arr[i]]--;
                    i++;
                }
            }

            ans= max(ans, j-i+1);
        }

        return ans;
    }
};