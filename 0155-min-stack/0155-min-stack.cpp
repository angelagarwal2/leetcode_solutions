class MinStack {
public:
stack<long> st;
long mini;
    MinStack() {
        mini=LONG_MAX;
    }
    
    void push(int val) {
        if(st.empty()){
            mini=val;
            st.push(val);
        }
        else if(val>mini){
            st.push(val);
        }
        else{
            st.push(2L*val-mini);
            mini=val;
        }
    }
    
    void pop() {
        if(st.empty())
        return;
        long x=st.top();
        st.pop();
        if(x<mini){
            mini=2L*mini-x;
        }
    }
    
    int top() {
        if(st.empty())
        return -1;
        long x=st.top();
        if(mini<x) return x;
        else
        return (int)mini;
    }
    
    int getMin() {
        return (int)mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */