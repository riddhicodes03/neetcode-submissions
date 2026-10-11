class MinStack {
    private : 
        stack<long long> st;
        long long min;

    public:
    MinStack() {
       min=0;
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            min=val;
            return;
        }
        if(min>val){
        st.push(2LL*val-min);
        min = val;
        }
        else
        st.push(val);
    }  

    void pop() {
        if(st.empty())
        return;
      if(min>st.top())
      {
        min = 2*min-st.top();
      }    
      st.pop();
    }
    
    int top() {
        if(min<st.top())
        return st.top();

        return min;
    }
    
    int getMin() {
        return min;
    }
};
