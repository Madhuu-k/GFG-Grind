// Problem Link: https://www.geeksforgeeks.org/problems/remove-spaces0128/1
// Time Complexity: O(n)

class Solution {
public:
    string modify(string& s) {
        // code here.
        string res = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' ') res = res + s[i];
        }
        return res;
    }
};