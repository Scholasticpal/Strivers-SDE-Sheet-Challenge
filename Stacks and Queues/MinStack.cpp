// https://leetcode.com/problems/min-stack/description/

class MinStack {
public:
    MinStack() {
    }
    stack<pair<int, int>> st;

    void push(int val) {
        int minNum = 0;
        if(st.empty()){
            minNum = val;
        }
        else{
            minNum = min(st.top().second, val);
        }
        st.push({val, minNum});
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
        }
    }
    
    int top() {
        if(st.empty()){
            return 0;
        }
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
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
