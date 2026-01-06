// Problem Link: https://www.geeksforgeeks.org/problems/anagram-1587115620/1
// Time Complexity: O(n)

class Solution {
public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        if(s1.length() != s2.length()) return false;
        int freq[256] = {0};
        for(int i = 0; i < s1.length(); i++) freq[s1[i] - 'a']++;
        for(int i = 0; i < s2.length(); i++) freq[s2[i] - 'a']--;
        for(int i = 0; i < 256; i++){
            if(freq[i] != 0) return false;
        }
        return true;
    }
};