class MyQueue {
public:
    stack<int>q1;
    stack<int>q2;
    MyQueue() {
        
    }
    
    void push(int x) {
        // push all the num q2 to q1
        while(!q2.empty()){
            q1.push(q2.top());
            q2.pop();
        }
        // push the the new num in q2
        q2.push(x);
        // push all the num from q1 to q2
        while(!q1.empty()){
            q2.push(q1.top());
            q1.pop();
        }
    }
    
    int pop() {
        int top = q2.top();
        q2.pop();
        return top;
    }
    
    int peek() {
        return q2.top();
    }
    
    bool empty() {
        return q2.empty();
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