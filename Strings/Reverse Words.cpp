// Problem Link: https://www.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
// Time Compleity: O(n)

class Solution {
public:
    string reverseWords(string &s) {
        // code here
        string result = "";
        int i = s.length() - 1;

        while(i >= 0) {
            while(i >= 0 && s[i] == '.') i--;
            if(i < 0) break;
            string word = "";
            while(i >= 0 && s[i] != '.'){
                word = s[i] + word;
                i--;
            }

            if(result.length() == 0) result = word;
            else result = result + "." + word;

        }
        return result;
    }
};