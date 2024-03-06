class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
//         stack<char>sts;
//         stack<char>stc;
//         int ns=s.length();
//         int nt=t.length();
//         for(int i=0;i<ns;i++){
//             if(s[i]=='#'){
//                 if(sts.size()>0) sts.pop();
//             }
//             else{
//                 sts.push(s[i]);
//             }
//         }
//         string newS;
//         while(sts.size()>0)
//         {
//             newS.push_back(sts.top());
//             sts.pop();
//         }
        
//         for(int i=0;i<nt;i++){
//             if(t[i]=='#'){
//                 if(stc.size()>0) stc.pop();
//             }
//             else{
//                 stc.push(t[i]);
//             }
//         }
//         string newT;
//         while(stc.size()>0)
//         {
//             newT.push_back(stc.top());
//             stc.pop();
//         }
//         if(newS==newT) return true;
//         return false;
        
        stack<char>st1;
        stack<char>st2;
        
        for(auto x:s){
            if(x!='#') st1.push(x);
            else if(st1.size()>0) st1.pop();
        }
        string s1="";
        while(st1.size()>0){
            s1.push_back(st1.top());
            st1.pop();
        } 
        
        for(auto x:t){
            if(x!='#') st2.push(x);
            else if(st2.size()>0) st2.pop();
        }
        string t1="";
        while(st2.size()>0){
            t1.push_back(st2.top());
            st2.pop();
        } 
       if(s1==t1) return true;
        return false;
        
    }
};