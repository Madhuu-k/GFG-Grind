// Problem Link: https://www.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1
// Time Complexity: O(n)

class Solution {
public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        int n = s.size();
        deleteMiddle(s, 0, n / 2);
    }

    void deleteMiddle(stack<int>& st, int curr, int mid) {
        if(st.empty()) return;

        int temp = st.top();
        st.pop();

        if(curr != mid){
            deleteMiddle(st, curr + 1, mid);
            st.push(temp);
        }
    }
};