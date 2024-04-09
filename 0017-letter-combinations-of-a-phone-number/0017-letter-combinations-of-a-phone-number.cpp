class Solution {
public:
    void solve(string s, map<char,string>&mp, int i, string temp, vector<string>&ans){
        if(i==s.length()){
            if(i!=0) ans.push_back(temp);
            return;
        }
        
        for(auto x: mp[s[i]]){
            temp.push_back(x);
            solve(s, mp, i+1, temp, ans);
            temp.pop_back();
        }
        return;
    }
    
    vector<string> letterCombinations(string s) {
        vector<string>ans;
        string temp="";        
        map<char,string>mp;
        
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        
        solve(s, mp, 0, temp, ans);
        return ans;
    }
};