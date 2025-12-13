// Problem Link: https://www.geeksforgeeks.org/problems/reverse-a-stack/1
// Time Complexity: O(n^2)

class Solution {
public:
    void reverseStack(stack<int> &st) {
        // code here
        if(st.empty()) return;
        int top = st.top();
        st.pop();

        reverseStack(st);
        insertAtBottom(st, top);
    }

    void insertAtBottom(stack<int>& st, int x){
        if(st.empty()){
            st.push(x);
            return;
        }

        int top = st.top();
        st.pop();
        insertAtBottom(st, x);
        st.push(top);
    }
};