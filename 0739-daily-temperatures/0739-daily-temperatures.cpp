class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        stack<int>st;
        vector<int>ans;
        int n= arr.size();
        
        for(int i=n-1;i>=0;i--){
            if(st.size()==0)
            {
                ans.push_back(n);
            }
            else if(st.size()>0 &&  arr[st.top()]>arr[i]){
                ans.push_back(st.top());
            }
            else if(st.size()>0 && arr[st.top()]<=arr[i]){
                while(st.size()>0 && arr[st.top()]<=arr[i]){
                    st.pop();
                }
                if(st.size()==0){
                    ans.push_back(n);
                }
                else{
                   ans.push_back(st.top()); 
                }
            }
            st.push(i);
        }
       
       reverse(ans.begin(),ans.end());
        
       for(int i=0;i<n;i++){
           if(ans[i]==n){
               ans[i]=0;
           }
           else{
               ans[i]=ans[i]-i;
           }
       }
        
        return ans;
    }
};