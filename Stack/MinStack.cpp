// 155. Min Stack

// Problem Link : https://leetcode.com/problems/min-stack/description/

class MinStack {
public:
    stack<int>st,min_stack;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(min_stack.empty() || val <= min_stack.top()){
            min_stack.push(val);
        }
    }
    
    void pop() {
        if(st.top() == min_stack.top()){
            min_stack.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};