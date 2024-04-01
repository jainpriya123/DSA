class Solution {
public:
    bool isAlienSorted(vector<string>& a, string o) {
        int n= a.size();
        map<char,int>mp;
        
        for(int i=0;i<o.length();i++){
            mp[o[i]]= i;
        }
        
        for(int i=0;i<n-1;i++){
            string x= a[i];
            string y= a[i+1];
            int j=0;
            
            while(j<min(x.length(),y.length())){
                if(mp[x[j]]<mp[y[j]]){
                    break;
                } 
                else if(mp[x[j]]>mp[y[j]]) return false;
                else j++;
            }
            
            if(j!=x.length() && j==y.length()) return false;
        }
        
        return true;
    }
};