// Problem Link: https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1
// Time Complexity: O(n)

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
public:
    int check(Node* root) {
        if(root == nullptr) return 0;

        int leftH = check(root -> left);
        if(leftH == -1) return -1;

        int rightH = check(root -> right);
        if(rightH == -1) return -1;

        if(abs(leftH - rightH) > 1) return -1;

        return 1 + max(leftH, rightH);
    }

    bool isBalanced(Node* root) {
        // code here
        return check(root) != -1;

    }
};