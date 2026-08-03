class MyStack {
private:
    std::queue<int> que;
    int size;

public:
    MyStack() {
        size = 0;
    }
    
    void push(int x) {
        que.push(x);
        int i = 0;
        while(i < que.size()-1){
            int j = que.front();
            que.pop();
            que.push(j);
            i++;
        }
        size++;
    }
    
    int pop() {
        size--;
        int x = que.front();
        que.pop();
        return x;
    }
    
    int top() {
        return que.front();
    }
    
    bool empty() {
        return size == 0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */