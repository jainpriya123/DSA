class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>>st;
        
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='('){
                st.push({'(',i});
            }
            else if(s[i]==')'){
                if(st.size()==0){
                    s.erase(i,1);
                    i--;
                }
                else{
                    st.pop();
                }
            }
        }
        
        while(st.size()>0){
            s.erase(st.top().second,1);
            st.pop();
        }
        
        return s;
    }
};