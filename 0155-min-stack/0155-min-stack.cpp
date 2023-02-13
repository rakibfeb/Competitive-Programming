class MinStack {
public:
    stack<int> s;
    vector<int>v = {INT_MAX};
    MinStack() {
        
    }
    
    void push(int val) {
        if(val <= v[v.size()-1]){
            v.push_back(val);
        }
        s.push(val);
    }
    
    void pop() {
        if(v[v.size()-1] == s.top()){
            v.pop_back();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return v[v.size()-1];
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