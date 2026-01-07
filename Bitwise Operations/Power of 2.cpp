// Problem Link: https://www.geeksforgeeks.org/problems/power-of-2-1587115620/1
// Time Complexity: O(1)

class Solution {
public:
    bool isPowerofTwo(int n) {
        // code here
        return (n && (n & (n-1)) == 0);
    }
};