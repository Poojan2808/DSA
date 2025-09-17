class MinStack {
    stack<int>s1;
   stack<int>s2;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s1.push(val);
       
    }
    
    void pop() {
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int min=INT_MAX;

     while(!s2.empty()){
        if(min>s2.top()) min=s2.top();
            s1.push(s2.top());
            s2.pop();
        }

        return min;

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