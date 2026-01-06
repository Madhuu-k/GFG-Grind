// Problem Link: https://www.geeksforgeeks.org/problems/non-repeating-character-1587115620/1
// Time Complexity: O(n)

class Solution {
public:
    char nonRepeatingChar(string &s) {
        //  code here
        int freq[256] = {0};
        for(char c : s) freq[c]++;
        for(int i = 0; i < s.length(); i++){
            if(freq[s[i]] == 1) return s[i];
        }
        return '$';
    }
};