class Solution {
public:
    bool checkValidString(string s) {
        int n= s.length();
        
        stack<int>open;
        stack<int>star;
        
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open.push(i);
            }
            else if(s[i]=='*'){
                star.push(i);
            }
            else if(s[i]==')'){
                if(open.size()==0 && star.size()==0){
                    return false;
                }
                else if(open.size()==0){
                    star.pop();
                }
                else if(open.size()>0){
                    open.pop();
                }
            }
        }
        
        while(open.size()>0){
            // cout<<"( "<<open.top()<<" * "<<star.top()<<endl;
            if(star.size()==0){
                return false;
            }
            if(open.top()>star.top()){
                     return false;
            }
            else{
                    open.pop();
                    star.pop();
            }
        }
        
        return true;
    }
};