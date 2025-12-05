// Problem Link: https://www.geeksforgeeks.org/problems/anagram-1587115620/1
// Time Complexity: O(s1 + s2)

class Solution {
public:
    bool areAnagrams(string& s1, string& s2) {
        if(s1.size() != s2.size()) return false;

        vector<int> s1Freq(26, 0), s2Freq(26, 0);

        for(char c : s1) s1Freq[c - 'a']++;
        for(char c : s2) s2Freq[c - 'a']++;

        return s1Freq == s2Freq;

    }
};