class MinStack {
public:
    vector<int> stack, min_stack;

    MinStack() {}

    void push(int val) {
        if (min_stack.empty() || min_stack.back() >= val){
            min_stack.push_back(val);
        }
        else{
            min_stack.push_back(min_stack.back());
        }
        stack.push_back(val);
    }

    void pop() {
        stack.pop_back();
        min_stack.pop_back();
    }

    int top() {
        return stack.back();
    }

    int getMin() {
        return min_stack.back();
    }
};
