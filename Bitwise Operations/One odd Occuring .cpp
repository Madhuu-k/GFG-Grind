// Problem Link: https://www.geeksforgeeks.org/problems/find-the-odd-occurence4820/1
// Time Complexity: O(n)

class Solution {
public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        int result = 0;
        for(int i = 0; i < arr.size(); i++) result ^= arr[i];
        return result;
    }
};