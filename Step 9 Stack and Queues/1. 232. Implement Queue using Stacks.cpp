class MyQueue {
    stack<int> input, output;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if (output.empty()==true) {
            while(input.empty()==false) {
                output.push(input.top());
                input.pop();
            }
        }
        int val = output.top();
        output.pop();
        return val;
    }
    
    int peek() {
        if (output.empty()==true) {
            while(input.empty()==false) {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    
    bool empty() {
        return (input.empty() && output.empty());
    }
};

