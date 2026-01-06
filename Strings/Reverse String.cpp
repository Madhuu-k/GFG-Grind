// Problem Link: https://www.geeksforgeeks.org/problems/reverse-a-string/1
// Time Complexity: O(n)

// User function Template for C++
class Solution {
public:
    string reverseString(string& s) {
        // code here
        int l = 0, r = s.length() - 1;
        while(l < r){
            char temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++; r--;
        }
        return s;
    }
};
