class MyQueue {
public:
    stack<int>st1;
    stack<int>st2;
    MyQueue() {
        while(st1.size()>0) st1.pop();
        while(st2.size()>0) st2.pop();
    }
    
    void push(int x) {
        st1.push(x);
        return;
    }
    
    int pop() {
        while(st1.size()>0){
            int x= st1.top();
            st2.push(x);
            st1.pop();   
        }
        int res= st2.top();
        st2.pop();
        while(st2.size()>0){
            int x= st2.top();
            st1.push(x);
            st2.pop();   
        } 
        return res;
    }
    
    int peek() {
        while(st1.size()>0){
            int x= st1.top();
            st2.push(x);
            st1.pop();   
        }
        int res= st2.top();
        while(st2.size()>0){
            int x= st2.top();
            st1.push(x);
            st2.pop();   
        } 
        return res;
    }
    
    bool empty() {
        if(st1.empty()) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */