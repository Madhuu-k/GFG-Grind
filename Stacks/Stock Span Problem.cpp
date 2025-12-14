// Problem Link: https://www.geeksforgeeks.org/problems/stock-span-problem-1587115621/1
// Time Complexity: O(n)

class Solution {
public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> span(n);
        stack<int> st;

        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[i] >= arr[st.top()]) st.pop();
            span[i] = st.empty() ? (i + 1) : (i - st.top());
            st.push(i);
        }
        return span;
    }
};