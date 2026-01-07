// Problem Link: https://www.geeksforgeeks.org/problems/swap-two-numbers3844/1
// Time Complexity: O(n)

class Solution {
public:
    pair<int, int> get(int a, int b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        return {a, b};

    }
};