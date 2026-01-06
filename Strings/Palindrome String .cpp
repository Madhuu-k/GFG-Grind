// Problem Link: https://www.geeksforgeeks.org/problems/palindrome-string0817/1
// Time Complexity: O(n)

class Solution {
public:
    bool isPalindrome(string& s) {
        // code here
        int l = 0, r = s.length() - 1;
        while(l < r){
            if(s[l] != s[r]) return false;
            l++; r--;
        }
        return true;
    }
};