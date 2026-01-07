// Problem Link: https://www.geeksforgeeks.org/problems/set-bits0143/1
// Time Complexity: O(n)

class Solution {
public:
    int setBits(int n) {
        // Write Your Code here
        int count = 0;
        while(n){
            n = n & (n-1);
            count++;
        }
        return count;
    }
};