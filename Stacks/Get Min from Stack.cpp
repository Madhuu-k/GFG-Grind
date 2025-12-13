// Problem Link: https://www.geeksforgeeks.org/problems/get-minimum-element-from-stack/1
// Time Complexity: O(1) ~ for all operations

class SpecialStack {
public:
    stack<int> st;
    stack<int> minSt;
    SpecialStack() {
        // Define Stack
    }

    void push(int x) {
        // Add an element to the top of Stack
        st.push(x);
        if(minSt.empty() || x <= minSt.top()) minSt.push(x);
    }

    void pop() {
        // Remove the top element from the Stack
        if(st.empty()) return;
        if(minSt.top() == st.top()) minSt.pop();
        st.pop();
    }

    int peek() {
        // Returns top element of the Stack
        if(st.empty()) return -1;
        return st.top();
    }

    bool isEmpty() {
        // Check if stack is empty
        return st.empty();
    }

    int getMin() {
        // Finds minimum element of Stack
        if(minSt.empty()) return -1;
        return minSt.top();
    }
};

