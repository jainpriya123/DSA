class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
//         vector<int>ans;
//         // ge.push_back(-1);
//         int n=b.size();
//         stack<int>st;
//         st.push(n-1);
//         map<int,int>ge;
//         ge[b[n-1]]=-1;
        
//         for(int i=n-2;i>=0;i--){
//             while(st.size()>0 && b[st.top()]<=b[i]) st.pop();
//             int ind= st.size()>0 ? st.top(): -1;
//             ge[b[i]]= ind;
//             // ge.push_back(ind);
//             st.push(i);
//         }
//         // for(auto x:b) cout<<ge[x]<<"  ";
//         // reverse(ge.begin(), ge.end());
//         for(int i=0;i<a.size();i++){
//             if(ge[a[i]]!=-1) ans.push_back(b[ge[a[i]]]) ;
//             else ans.push_back(-1);
//         }
        
//         return ans;
        
        vector<int>ans;
        map<int,int>mp;
        stack<int>st;
        int n1=a.size();
        int n2=b.size();
        
        for(int i=n2-1;i>=0;i--){
            if(!st.size()) mp[b[i]]=-1;
            else if (st.top()>b[i]) mp[b[i]]=st.top();
            else{
                while(st.size()>0 && st.top()<=b[i]){
                    st.pop();
                }
            if(!st.size()) mp[b[i]]=-1;
            else mp[b[i]]=st.top();
            }
            st.push(b[i]);
        }
        
        for(int i=0;i<n1;i++)
        {
            ans.push_back(mp[a[i]]);
        }
        
        return ans;
        
    }
};