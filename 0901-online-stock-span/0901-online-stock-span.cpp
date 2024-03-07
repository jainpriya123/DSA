class StockSpanner {
public:
    vector<int>arr;
    stack<int>st;
    vector<int>temp;
    int count =0;
    StockSpanner() {
        while(arr.size()>0) arr.pop_back();
        while(temp.size()>0) temp.pop_back();
        while(st.size()>0) st.pop();
        count =0;
    }
    
    int next(int price) {
        count++;
        arr.push_back(price);
        
        
        if(st.size()==0){
            temp.push_back(-1);
        } 
        else if(st.size()>0 && arr[st.top()]>price){
            temp.push_back(count-1-1);
        }
        else if(st.size()>0 && arr[st.top()]<=price){
                while(st.size()>0 && arr[st.top()]<=price){
                    st.pop();
                }
                if(st.size()==0){
                    temp.push_back(-1);
                } 
                else{
                    temp.push_back(st.top());
                }
        }
        st.push(count-1);
        
        return count-1-temp[temp.size()-1] ;
        
//         arr.push_back(price);
//         vector<int>temp;
//         int n= arr.size();
        
//         for(int i=0;i<n;i++){
//             if(st.size()==0){
//                temp.push_back(-1);
//             } 
//             else if(st.size()>0 && arr[st.top()]>price){
//                 temp.push_back(i-1);
//             }
//             else if(st.size()>0 && arr[st.top()]<=price){
//                 while(st.size()>0 && arr[st.top()]<=price){
//                     st.pop();
//                 }
//                 if(st.size()==0){
//                     temp.push_back(-1);
//                 } 
//                 else{
//                     temp.push_back(st.top());
//                 }
//             }
//             st.push(i);
//         }
//        return n-1-temp[temp.size()-1] ;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */