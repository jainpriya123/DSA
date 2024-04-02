class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mps;
        map<char,char>mpt;
        
        for(int i=0;i<s.length();i++)
        {
            if(mps.find(s[i])==mps.end() and mpt.find(t[i])==mpt.end()){
                cout<<"i "<<i<<" both not find"<<endl;
                 mps[s[i]]=t[i];
                 mpt[t[i]]=s[i];
            } 
            else if(mps.find(s[i])!=mps.end() and mpt.find(t[i])!=mpt.end()){
                cout<<"i "<<i<<" both find"<<endl;
                if(s[i]!=mpt[t[i]] or mps[s[i]]!=t[i]){
                    return false;
                }
            }
            else if(mps.find(s[i])!=mps.end() or mpt.find(t[i])!=mpt.end()){
                cout<<"i "<<i<<" one find"<<endl;
                return false;
            }        
            
        }
        return true;
    }
};