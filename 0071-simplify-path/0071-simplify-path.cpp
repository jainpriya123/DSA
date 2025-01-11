class Solution {
public:
    string simplifyPath(string s) {
        stack<string>st;
        string ans="";
        int i=0;
        int n=s.length();
        int j=0;
        while(j<n){
            int count=0;
            if(j<n && s[j]=='/'){
                while(j<n && s[j]=='/'){
                    j++;
                }
            }
            if(j<n && (s[j]!='/')){
                i=j;
                while(j<n && (s[j]!='/')){
                    cout<<s[j]<<"";
                    j++;
                }
                cout<<endl;
                string str= s.substr(i, j-i);
                if(str==".."){
                    if(!st.empty()){
                        cout<<"st.top()  "<<st.top()<<"   ";
                        st.pop();
                        if(!st.empty())
                        cout<<st.top()<<endl;
                    }
                }
                else if(str=="..."){
                    st.push("...");
                }
                else if(str=="."){
                    continue;
                }
                else{
                    if(i<n)
                    st.push(str);
                    cout<<"str  "<<str<<endl;
                }
                
            }
            // if(j<n && s[j]=='.'){
            //     count=0;
            //     while(j<n && s[j]=='.'){
            //         cout<<s[j];
            //         j++;
            //         count++;
            //     }
            //     if(count==2){
            //         if(!st.empty()){
            //             cout<<"st.top()  "<<st.top()<<"   ";
            //             st.pop();
            //             if(!st.empty())
            //             cout<<st.top()<<endl;
            //         }
                    
            //     }

            //     if(count==3){
            //         st.push("...");
            //     }

            // }
            
        }

        vector<string>res;
        if(st.empty()){
            ans="/";
            return ans;
        }
        
        while(!st.empty()){
           res.push_back(st.top());
           cout<<st.top()<<"     ";
           st.pop();
        }
        cout<<endl;

        reverse(res.begin(), res.end());
        string last="";

        for(auto x: res){
            if(x=="/"){
                if(last!="/"){
                    ans+="/";
                    last="/";
                }
                
            }
            else{
                if(last!="/"){
                    ans+="/";
                }
                ans+=x;
                last=x;
            }
        }

        return ans;
    }
};