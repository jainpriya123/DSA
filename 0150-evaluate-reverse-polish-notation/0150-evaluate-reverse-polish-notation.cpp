class Solution {
public:
    
    int calculate(int a, int b, string op){
        if(op=="+") return a+b;
        if(op=="-") return a-b;
        if(op=="*") return a*b;
        if(op=="/") return a/b;
        return 0;
    }
    
    int evalRPN(vector<string>& arr) {
        
        stack<int>st;
        int n=arr.size();
        int res= stoi(arr[0]);
        int b_int, a_int;
        
        for(int i=0;i<n;i++){
            string var1 = arr[i];
            
            char op = var1[0];
            if(var1.size()>1 || isdigit(op)){
                st.push(stoi(var1));
            }
            else{
                
                if(st.size()>0){
                    b_int = st.top();
                    st.pop(); 
                }
                if(st.size()>0){ 
                    a_int = st.top();
                    st.pop();
                }
                
                res = calculate(a_int,b_int,var1);
                st.push(res);
            }
        }
        
        return res;
    }
};