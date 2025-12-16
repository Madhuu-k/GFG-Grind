// Problem Link: https://www.geeksforgeeks.org/problems/count-number-of-nodes-in-a-binary-tree/1
// Time Complexity: O(n)

// User function Template for C++

class Solution {
public:
    int countNodes(Node* root) {
        // Write your code here
        if(root == nullptr) return 0;
        return 1 + countNodes(root -> left) + countNodes(root -> right);
    }
};