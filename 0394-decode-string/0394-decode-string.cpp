class Solution {
public:
    string solve(string s, int &i){
        string res="";
        
        while(i<s.length() && s[i] != ']'){
            if(!isdigit(s[i])){
                res+=s[i++];
            }
            else{
                long long n=0;
                while(i<s.length() && isdigit(s[i])){
                    n=n*10+(s[i]-'0');
                    i++;
                }
            
                i++;
                string t= solve(s, i);
                i++;
                
                while(n-->0){
                    res+=t;
                }
           
            }
            
        }
        return res;
        
    }
    string decodeString(string s) {
        int n=s.length();
//         stack<char>st;
//          string ans="";
//         for(int i=0;i<n;i++){
//             if(s[i]==']'){
//                string x="";
//                 while(st.size()>0 && st.top()!='['){
//                     char y = st.top();
//                     // x=y+x;
//                     x.insert(x.begin(),y);
//                     st.pop();
//                 }
//                 st.pop();
//                 reverse(x.begin(),x.end());
//                 cout<<"x "<<x<<endl;
//                 ans=ans+x;
//                 cout<<"ans "<<ans<<endl;
//                 int num=0;
//                 int number=0;
//                 while(st.size()>0 && (st.top()>='1' && st.top()<='9')){
//                     number=number+pow(10,num)*(st.top()-'0');
//                     num++;
//                     st.pop();
//                 }
//                 cout<<"number "<<number<<endl;
//                 string temp=ans;
//                 for(int j=0;j<number-1;j++){
//                     ans=ans+temp;
//                 }
                
//                 cout<<"after bracket  "<<ans<<endl;
//             }
//             else{
//                 st.push(s[i]);
//             }
//         }
        
//         string x="";
//         while(st.size()>0){
//             char y = st.top();
//             // x=y+x;
//             x.insert(x.begin(),y);
//             st.pop();
//         }
//         ans=ans+x;
        
//         return ans;
        int i=0;
        return solve(s,i);
    }
};