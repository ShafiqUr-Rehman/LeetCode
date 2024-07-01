
class MyQueue {
private:
    stack<int> mainStack;
    stack<int> tempStack;

public:
    MyQueue() {
        
    }   
    void push(int x) {
        // Move all elements from mainStack to tempStack
        while (!mainStack.empty()) {
            tempStack.push(mainStack.top());
            mainStack.pop();
        }
        mainStack.push(x);
        
        // Move elements back from tempStack to mainStack
        while (!tempStack.empty()) {
            mainStack.push(tempStack.top());
            tempStack.pop();
        }
    }
    
    int pop() {
        int front = mainStack.top();
        mainStack.pop();
        return front;
    }
    
    int peek() {
        return mainStack.top();
    }
    
    bool empty() {
        return mainStack.empty();
    }
};
