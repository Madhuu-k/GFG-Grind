// Problem Link: https://www.geeksforgeeks.org/problems/height-of-binary-tree/1
// Time Complexity: O(n)

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    int height(Node* root) {
        // code here
        if(root == nullptr) return -1;
        int leftH = height(root -> left);
        int rightH = height(root -> right);
        return  1 + (max(leftH, rightH));
    }
};