// Problem Link: https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1
// Time Complexity: O(n)

class Solution {
public:
    bool isBalanced(string& s) {
        // code here
        stack<int> st;
        for(char c : s){
            if(c == '[' || c == '{' || c == '(')st.push(c);
            else{
                if(st.empty()) return false;
                char top = st.top();
                st.pop();

                if((c == ']' && top != '[') ||
                   (c == '}' && top != '{') ||
                   (c == ')' && top != '(')) return false;
            }
        }
        return st.empty();
    }
};